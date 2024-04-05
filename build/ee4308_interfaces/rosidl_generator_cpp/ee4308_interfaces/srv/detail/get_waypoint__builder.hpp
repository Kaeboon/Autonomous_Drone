// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ee4308_interfaces:srv/GetWaypoint.idl
// generated code does not contain a copyright notice

#ifndef EE4308_INTERFACES__SRV__DETAIL__GET_WAYPOINT__BUILDER_HPP_
#define EE4308_INTERFACES__SRV__DETAIL__GET_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ee4308_interfaces/srv/detail/get_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ee4308_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetWaypoint_Request_request
{
public:
  Init_GetWaypoint_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ee4308_interfaces::srv::GetWaypoint_Request request(::ee4308_interfaces::srv::GetWaypoint_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::srv::GetWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::srv::GetWaypoint_Request>()
{
  return ee4308_interfaces::srv::builder::Init_GetWaypoint_Request_request();
}

}  // namespace ee4308_interfaces


namespace ee4308_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetWaypoint_Response_waypoint
{
public:
  Init_GetWaypoint_Response_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ee4308_interfaces::srv::GetWaypoint_Response waypoint(::ee4308_interfaces::srv::GetWaypoint_Response::_waypoint_type arg)
  {
    msg_.waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::srv::GetWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::srv::GetWaypoint_Response>()
{
  return ee4308_interfaces::srv::builder::Init_GetWaypoint_Response_waypoint();
}

}  // namespace ee4308_interfaces

#endif  // EE4308_INTERFACES__SRV__DETAIL__GET_WAYPOINT__BUILDER_HPP_
