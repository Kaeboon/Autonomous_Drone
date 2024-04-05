#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <mutex>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/srv/get_plan.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "nav_msgs/msg/path.hpp"
#include "geometry_msgs/msg/point_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"

#include "ee4308_lib/core.hpp"

#pragma once
namespace ee4308::drone
{
    struct ControllerParameters
    { // contains defaults that can be overwritten
        struct Services
        {
            std::string get_plan = "get_plan";
        } services;
        struct Topics
        {
            std::string odom_drone = "odom";
            std::string waypoint = "waypoint";
            std::string cmd_vel = "cmd_vel";
            std::string lookahead = "lookahead";
        } topics;
        std::string frame_id = "/world"; 
        double lookahead_distance = 0.3; 
        double kp_horz = 1;         
        double kp_vert = 1;         
        double max_horz_vel = 1;         
        double max_horz_acc = 1;
        double max_vert_vel = 0.5; // the maximum vertical velocity (m/s)
        double max_vert_acc = 0.2;
        double yaw_vel = 0.3;  // the static yaw velocity (rad/s)
        double frequency = 20; // the rate to run the controller
    };

    /**
     * The Controller ROS Node that maintains subscribers and publishers for the Controller class.
     */
    class ROSNodeController : public rclcpp::Node
    {
    private:
        ControllerParameters params_;
        rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_odom_drone_;
        rclcpp::Subscription<geometry_msgs::msg::PointStamped>::SharedPtr sub_waypoint_;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_cmd_vel_;
        rclcpp::Publisher<geometry_msgs::msg::PointStamped>::SharedPtr pub_lookahead_;
        rclcpp::Client<nav_msgs::srv::GetPlan>::SharedPtr client_get_plan_;
        rclcpp::CallbackGroup::SharedPtr cbg_reentrant_;
        rclcpp::CallbackGroup::SharedPtr cbg_me_;
        rclcpp::TimerBase::SharedPtr looper_;

        nav_msgs::msg::Odometry odom_drone_;
        geometry_msgs::msg::PointStamped waypoint_;
        geometry_msgs::msg::PointStamped lookahead_;
        std::vector<geometry_msgs::msg::PoseStamped> plan_;
        geometry_msgs::msg::Twist cmd_vel_;

        std::mutex mutex_odom_drone_;
        std::mutex mutex_waypoint_;
        std::mutex mutex_plan_;

        bool has_plan_request_ = false;
        std::future<std::shared_ptr<nav_msgs::srv::GetPlan_Response>> plan_response_;

        double last_time_ = 0, elapsed_ = 0;
        bool has_new_waypoint_ = false;

    public:
        /**
         * Constructor for the Controller ROS Node.
         * @param name name of node.
         */
        explicit ROSNodeController(
            const std::string &name = "controller")
            : Node(name)
        {
            cbg_reentrant_ = create_callback_group(rclcpp::CallbackGroupType::Reentrant);
            cbg_me_ = create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

            initParams();
            initTopics();
            initServices();
            initLoop();

            RCLCPP_INFO_STREAM(this->get_logger(), "Controller node initialized!");
        }

    private:
        // ================================ INITIALIZERS ========================================
        void initParams()
        {
            initParam(this, "services.get_plan", params_.services.get_plan);
            initParam(this, "topics.odom_drone", params_.topics.odom_drone);
            initParam(this, "topics.waypoint", params_.topics.waypoint);
            initParam(this, "topics.cmd_vel", params_.topics.cmd_vel);
            initParam(this, "topics.lookahead", params_.topics.lookahead);
            initParam(this, "frame_id", params_.frame_id);
            initParam(this, "lookahead_distance", params_.lookahead_distance);
            initParam(this, "kp_horz", params_.kp_horz);
            initParam(this, "kp_vert", params_.kp_vert);
            initParam(this, "max_horz_vel", params_.max_horz_vel);
            initParam(this, "max_horz_acc", params_.max_horz_acc);
            initParam(this, "max_vert_vel", params_.max_vert_vel);
            initParam(this, "max_vert_acc", params_.max_vert_acc);
            initParam(this, "yaw_vel", params_.yaw_vel);
            initParam(this, "frequency", params_.frequency);
        }

        void initTopics()
        {
            // Initialize publishers
            pub_cmd_vel_ = create_publisher<geometry_msgs::msg::Twist>(params_.topics.cmd_vel, 1);
            pub_lookahead_ = create_publisher<geometry_msgs::msg::PointStamped>(params_.topics.lookahead, 1);

            // Initialize messages with values that will never be written by their publishers.
            odom_drone_.pose.pose.position.x = NAN;
            waypoint_.point.x = NAN;

            // Initialize subscribers
            sub_odom_drone_ = create_subscription<nav_msgs::msg::Odometry>(
                params_.topics.odom_drone, 1,
                std::bind(&ROSNodeController::subCbOdomDrone, this, std::placeholders::_1));
            sub_waypoint_ = create_subscription<geometry_msgs::msg::PointStamped>(
                params_.topics.waypoint, 1,
                std::bind(&ROSNodeController::subCbWaypoint, this, std::placeholders::_1));

            // Wait for messages to arrive.
            while (rclcpp::ok())
            {
                rclcpp::sleep_for(200ms);
                rclcpp::spin_some(get_node_base_interface());

                {
                    const std::lock_guard<std::mutex> lock(mutex_odom_drone_);
                    if (std::isnan(odom_drone_.pose.pose.position.x) == true)
                        continue;
                }
                {
                    const std::lock_guard<std::mutex> lock(mutex_waypoint_);
                    if (std::isnan(waypoint_.point.x) == true)
                        continue;
                }

                break;
            }
        }

        void initServices()
        {
            client_get_plan_ = create_client<nav_msgs::srv::GetPlan>(
                params_.services.get_plan,
                rmw_qos_profile_services_default,
                cbg_reentrant_);
        }

        void initLoop()
        {
            last_time_ = this->now().seconds();

            auto period = std::chrono::duration<double, std::ratio<1>>(1 / params_.frequency);
            looper_ = this->create_wall_timer(
                period,
                std::bind(&ROSNodeController::loop, this),
                cbg_me_);
        }

        // ================================ SUBSCRIBER CALLBACKS ========================================
        void subCbOdomDrone(const nav_msgs::msg::Odometry &msg)
        {
            const std::lock_guard<std::mutex> lock(mutex_odom_drone_);
            odom_drone_ = msg;
        }

        void subCbWaypoint(const geometry_msgs::msg::PointStamped &msg)
        {
            const std::lock_guard<std::mutex> lock(mutex_waypoint_);
            waypoint_ = msg;
            has_new_waypoint_ = true;
        }

        // ================================  THREAD-SAFE MESSAGE GETTERS ========================================
        nav_msgs::msg::Odometry getOdomDrone()
        {
            const std::lock_guard<std::mutex> lock(mutex_odom_drone_);
            return odom_drone_; // copy
        }

        bool getWaypoint(geometry_msgs::msg::PointStamped &waypoint)
        {
            const std::lock_guard<std::mutex> lock(mutex_waypoint_);
            waypoint = waypoint_; // copy
            if (has_new_waypoint_ == true)
            {
                has_new_waypoint_ = false;
                return true;
            }
            return false;
        }

        std::vector<geometry_msgs::msg::PoseStamped> getPlan()
        {
            const std::lock_guard<std::mutex> lock(mutex_plan_);
            return plan_; // copy
        }

        // ================================  PUBLISHING ========================================
        void publishCmdVel()
        {
            pub_cmd_vel_->publish(cmd_vel_);
        }

        void publishLookahead()
        {
            lookahead_.header.stamp = this->now();
            lookahead_.header.frame_id = params_.frame_id;
            pub_lookahead_->publish(lookahead_);
        }

        // ================================  SERVICES ========================================
        void requestPlan(
            const geometry_msgs::msg::Pose &start_pose, const geometry_msgs::msg::PointStamped &waypoint)
        {
            const std::lock_guard<std::mutex> lock(mutex_plan_);
            if (has_plan_request_ == true)
                return; // no additional requests allowed

            auto request = std::make_shared<nav_msgs::srv::GetPlan::Request>();
            request->start.pose = start_pose;
            request->goal.pose.position = waypoint.point;
            plan_response_ = client_get_plan_->async_send_request(request).future;
            has_plan_request_ = true;
        }

        void checkPlanReceived()
        {
            const std::lock_guard<std::mutex> lock(mutex_plan_);
            if (has_plan_request_ == true && plan_response_.valid() == true)
            {
                plan_ = plan_response_.get()->plan.poses;
                has_plan_request_ = false;
            }
        }

        // ================================  MAIN LOOP and FUNCTIONS ========================================
        void loop() // goal_handle is cancelable, and a feedback topic can be sent.
        {
            // Gets the elapsed. If the duration is too short, skip the iteration.
            if (getElapsed() == false)
                return;

            // If there is a new waypoint, send an async (non-blocking) request for a path.
            // The path will be written in another thread once a response is received.
            // Quickly move to the next instruction to keep the controller running at a constant rate.
            geometry_msgs::msg::PointStamped waypoint;
            if (getWaypoint(waypoint) == true)
            {
                requestPlan(getOdomDrone().pose.pose, waypoint);
            }

            // Gets the drone position
            geometry_msgs::msg::Pose drone_pose = getOdomDrone().pose.pose;

            // processes an active plan request if the result is received
            checkPlanReceived();

            if (getPlan().empty() == true)
            {
                RCLCPP_WARN_STREAM(this->get_logger(), "No control because there is no path yet.");
                return;
            }

            // Find the lookahead
            getLookahead(drone_pose);

            // move robot
            move(drone_pose);

            // publish to cmd vel
            publishCmdVel();

            // publish lookahead
            publishLookahead();
        }

        bool getElapsed()
        {
            elapsed_ = this->now().seconds() - last_time_;
            if (elapsed_ < 1e-3)
            {
                // std::cout << this->now().seconds() << std::endl;
                // std::cout << last_time_ << std::endl;
                RCLCPP_WARN_STREAM(this->get_logger(), "Elapsed is too short (" << elapsed_ << "). Skipping iteration.");
                return false;
            }
            last_time_ += elapsed_;
            return true;
        }

        void print(auto x){
            std::cout<<x<<std::endl;
        }

        /** Gets lookahead */
        void getLookahead(const geometry_msgs::msg::Pose &drone_pose)
        {
            // Get a thread-safe copy of the plan. A more efficient way is to use a lock guard here and use the plan directly without copying.
            std::vector<geometry_msgs::msg::PoseStamped> plan = getPlan();
            print("=========== get plan size first ===========");
            print(plan.size());
            double drone_x = drone_pose.position.x;
            double drone_y = drone_pose.position.y;
            double drone_z = drone_pose.position.z;
            
            geometry_msgs::msg::PointStamped Closest;
            Closest.point = plan[0].pose.position;
            // print("========== closest point value ========");
            // print(Closest.point.x);
            // print(Closest.point.y);
            // print(Closest.point.z);
            double distance = sqrt((Closest.point.x-drone_x)*(Closest.point.x-drone_x)+(Closest.point.y-drone_y)*(Closest.point.y-drone_y)+(Closest.point.z-drone_z)*(Closest.point.z-drone_z));
            // print("========== check distance value ========");
            // print(distance);
            double index = 0;
            
            // find the closest point on the path
            for (int i=1; i< plan.size(); i++){
                // print("=== check index number === ");
                // print(i);
                double newDistance = sqrt((plan[i].pose.position.x-drone_x)*(plan[i].pose.position.x-drone_x)+(plan[i].pose.position.y-drone_y)*(plan[i].pose.position.y-drone_y)+(plan[i].pose.position.z-drone_z)*(plan[i].pose.position.z-drone_z));
                // print("=== new distance === ");
                // print(newDistance);
                if (newDistance<distance){
                    // print("=== closest point ===");
                    Closest.point = plan[i].pose.position;
                    // print(Closest.point.x);
                    // print(Closest.point.y);
                    // print(Closest.point.z);
                    distance = newDistance;
                    index = i;
                }
            }
            // print("========== check lookahead point ========");

            // find the first point that exceeds the lookahead distance
            lookahead_.point = plan.back().pose.position;

            for (int j=index; j<plan.size(); j++){
                // print("--- check index ---");
                // print(j);
                double newDistance = sqrt((plan[j].pose.position.x-drone_x)*(plan[j].pose.position.x-drone_x)+(plan[j].pose.position.y-drone_y)*(plan[j].pose.position.y-drone_y)+(plan[j].pose.position.z-drone_z)*(plan[j].pose.position.z-drone_z));
                // print("--- check newDistance ---");
                // print(newDistance);
                if (newDistance>params_.lookahead_distance){
                    // print(" --- check lookahead_point ---");
                    lookahead_.point = plan[j].pose.position;
                    break;
                }
            }
            // Get a thread-safe copy of the plan. A more efficient way is to use a lock guard here and use the plan directly without copying.
            //std::vector<geometry_msgs::msg::PoseStamped> plan = getPlan();

            // --- FIXME ---
            // params_.lookahead_distance
            //lookahead_.point = plan.back().pose.position;
            // --- EOFIXME ---
            
            // --- EOFIXME ---
        }
        /** Calculate the command velocities to move the drone */
        void move(geometry_msgs::msg::Pose drone_pose)
        {
            // // find the distance vector of the lookahead point in world frame.
            double dx = lookahead_.point.x - drone_pose.position.x;
            double dy = lookahead_.point.y - drone_pose.position.y;
            double dz = lookahead_.point.z - drone_pose.position.z;
            double drone_yaw = quaternionToYaw(drone_pose.orientation);

            // --- FIXME ---
            // params_.kp_horz, params.kp_vert
            // params_.max_horz_vel, params_.max_horz_acc
            // params_.max_vert_vel, params_.max_vert_acc
            // cmd_vel_
            // params_.yaw_vel

            //coordinates of lookahead point in robot frame
            double x_la = dx * cos(drone_yaw) + dy * sin(drone_yaw);
            double y_la = dy * cos(drone_yaw) - dx * sin(drone_yaw);
            double z_la = dz; 
            
            //desired horizontal and vertical command linear velocity
            double d_hor_vel = params_.kp_horz * sqrt(x_la*x_la + y_la*y_la);
            double d_ver_vel = params_.kp_vert * z_la; 

            //previous horizontal and vertical command linear velocities
            double hor_prev = sqrt(cmd_vel_.linear.x*cmd_vel_.linear.x + cmd_vel_.linear.y*cmd_vel_.linear.y);
            double ver_prev = cmd_vel_.linear.z;

            // calculate the acceleration of the desired velocities
            double hor_acc = (d_hor_vel-hor_prev)/elapsed_;
            double ver_acc = (d_ver_vel-ver_prev)/elapsed_;

            //constrain the accelerations of the desired velocities
            if (abs(hor_acc) < params_.max_horz_acc) 
                hor_acc = hor_acc; 
            else 
                hor_acc = params_.max_horz_acc * sgn(hor_acc); 
                 
            if (abs(ver_acc) < params_.max_vert_acc) 
                ver_acc = ver_acc; 
            else 
                ver_acc = params_.max_vert_acc * sgn(ver_acc); 

            // calculate the horizontal and vertical velocities
            double new_hor_vel = hor_prev + (hor_acc * elapsed_); 
            double new_ver_vel = ver_prev + (ver_acc * elapsed_); 

            // constrain the velocities
            if (abs(new_hor_vel) < params_.max_horz_vel) 
                new_hor_vel = new_hor_vel; 
            else 
                new_hor_vel = params_.max_horz_vel * sgn(new_hor_vel); 

            if (abs(new_ver_vel) < params_.max_vert_vel) 
                new_ver_vel = new_ver_vel; 
            else 
                new_ver_vel = params_.max_vert_vel * sgn(new_ver_vel); 

            //final constrained velocities
            cmd_vel_.linear.x = new_hor_vel * x_la/sqrt(x_la*x_la + y_la*y_la);
            cmd_vel_.linear.y = new_hor_vel * y_la/sqrt(x_la*x_la + y_la*y_la);
            cmd_vel_.linear.z = new_ver_vel;
            cmd_vel_.angular.z = params_.yaw_vel;
                    
            // --- EOFIXME ---

            std::cout << "linear_x :" << cmd_vel_.linear.x << std::endl;
            std::cout << "linear_y :" << cmd_vel_.linear.x << std::endl;
            std::cout << "linear_z :" << cmd_vel_.linear.z << std::endl;
            std::cout << "angular_z :" << cmd_vel_.angular.x << std::endl;

        }
    };
}