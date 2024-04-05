#include <iostream>
#include <algorithm>
#include <cmath>
#include <chrono>
#include <vector>
#include <list>
#include <array>
#include <mutex>

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/path.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/srv/get_plan.hpp>

#include "ee4308_lib/core.hpp"

#pragma once
namespace ee4308::drone
{
    struct SmootherParameters
    { // contains defaults that can be overwritten
        struct Services
        {
            std::string get_plan = "get_plan";
        } services;
        struct Topics
        {
            std::string odom_drone = "odom";
            std::string plan = "plan";
        } topics;
        std::string frame_id = "/world";
        double average_vel = 1.0;
        double interval = 0.1;
    };

    /**
     * The Planner ROS Node that maintains subscribers and publishers for the Planner class.
     */
    class ROSNodeSmoother : public rclcpp::Node
    {
    private:
        SmootherParameters params_;
        rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path_; // publisher
        rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_odom_drone_;
        rclcpp::Service<nav_msgs::srv::GetPlan>::SharedPtr service_plan_; // service

        nav_msgs::msg::Odometry odom_drone_;

    public:
        /**
         * Constructor for the Planner ROS Node.
         * @param name name of node.
         */
        ROSNodeSmoother(
            const std::string &name = "smoother")
            : Node(name)
        {
            initParams();
            initTopics();
            initServices();
            
            RCLCPP_INFO_STREAM(this->get_logger(), "Smoother node initialized!");
        }

    private:
        // ================================ INITIALIZERS ========================================
        void initParams()
        {
            initParam(this, "services.get_plan", params_.services.get_plan);
            initParam(this, "topics.odom_drone", params_.topics.odom_drone);
            initParam(this, "topics.plan", params_.topics.plan);
            initParam(this, "frame_id", params_.frame_id);
            initParam(this, "average_vel", params_.average_vel);
            initParam(this, "interval", params_.interval);
        }

        void initTopics()
        {
            // Initialize Publishers
            pub_path_ = create_publisher<nav_msgs::msg::Path>(params_.topics.plan, 1);

            // Initialize messages with values that will never be written by their publishers.
            odom_drone_.pose.pose.position.x = NAN;

            // Initialize subscribers
            sub_odom_drone_ = create_subscription<nav_msgs::msg::Odometry>(
                params_.topics.odom_drone, 1,
                std::bind(&ROSNodeSmoother::subCbOdomDrone, this, std::placeholders::_1));
            
            // Wait for messages to arrive.
            while (rclcpp::ok())
            {
                rclcpp::sleep_for(200ms);
                rclcpp::spin_some(this->get_node_base_interface());
                if (std::isnan(odom_drone_.pose.pose.position.x) == true)
                    continue;
                break;
            }
        }

        void initServices()
        {
            service_plan_ = create_service<nav_msgs::srv::GetPlan>(
                params_.services.get_plan,
                std::bind(&ROSNodeSmoother::servicePlan, this, std::placeholders::_1, std::placeholders::_2),
                rmw_qos_profile_services_default);
        }

        // ================================ SUBSCRIBER CALLBACKS ========================================
        void subCbOdomDrone(const nav_msgs::msg::Odometry &msg)
        {
            odom_drone_ = msg;
        }

        // ================================ SERVICES ========================================
        /** The service callback to respond with the path */
        void servicePlan(const std::shared_ptr<nav_msgs::srv::GetPlan::Request> request,
                         std::shared_ptr<nav_msgs::srv::GetPlan::Response> response)
        {
            // Smooth the path
            response->plan = smooth(request->start, request->goal);

            // Publish the path
            response->plan.header.frame_id = params_.frame_id;
            response->plan.header.stamp = this->now();
            pub_path_->publish(response->plan);
        }

        // ================================ Main Smoother ========================================
        nav_msgs::msg::Path smooth(const geometry_msgs::msg::PoseStamped &start, const geometry_msgs::msg::PoseStamped &goal)
        {
            // odom_drone_; // use odom_drone_ to get the estimated odometry of the drone.
            
            nav_msgs::msg::Path plan;
            // --- FIXME ---
            // params_.interval;
            // --- Remove the following code after fixing ---
            // geometry_msgs::msg::PoseStamped pose_stamped;
            // pose_stamped.pose.position.x = start.pose.position.x; 
            // pose_stamped.pose.position.y = start.pose.position.y; 
            // pose_stamped.pose.position.z = start.pose.position.z; 
            // plan.poses.push_back(pose_stamped);
            // double startx = start.pose.position.x;
            // double starty = start.pose.position.y;
            // double startz = start.pose.position.z;
            // double endx = goal.pose.position.x;
            // double endy = goal.pose.position.y;
            // double endz = goal.pose.position.z;
            // double xinc = (endx-startx)/10;
            // double yinc = (endy-starty)/10;
            // double zinc = (endz-startz)/10;
            // for(int i=0; i<10;i++){
            //     pose_stamped.pose.position.x+=xinc;
            //     pose_stamped.pose.position.y+=yinc;
            //     pose_stamped.pose.position.z+=zinc;
            //     plan.poses.push_back(pose_stamped);
            // }
            


            //-------------separator-------------------//
            plan.poses.clear();

            // Calculate the distance between the start and goal points
            double dx = goal.pose.position.x - start.pose.position.x;
            double dy = goal.pose.position.y - start.pose.position.y;
            double dz = goal.pose.position.z - start.pose.position.z;
            double distance = sqrt(dx * dx + dy * dy + dz * dz);

            // Get the number of intervals based on the provided interval parameter
            int num_intervals = distance / params_.interval;

            // Generate and push interpolated points at regular distance intervals
            for (int i = 0; i <= num_intervals; ++i) {
                geometry_msgs::msg::PoseStamped ps;

                // Calculate the interpolated position based on the current interval
                double ratio = static_cast<double>(i) / num_intervals;
                ps.pose.position.x = start.pose.position.x + ratio * dx;
                ps.pose.position.y = start.pose.position.y + ratio * dy;
                ps.pose.position.z = start.pose.position.z + ratio * dz;

                // Push the interpolated point into the plan
                plan.poses.push_back(ps);
            }
            // --- EOFIXME ---
            return plan;
        }
    };
}