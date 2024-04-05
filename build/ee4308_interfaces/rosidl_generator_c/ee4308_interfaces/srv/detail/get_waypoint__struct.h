// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ee4308_interfaces:srv/GetWaypoint.idl
// generated code does not contain a copyright notice

#ifndef EE4308_INTERFACES__SRV__DETAIL__GET_WAYPOINT__STRUCT_H_
#define EE4308_INTERFACES__SRV__DETAIL__GET_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in srv/GetWaypoint in the package ee4308_interfaces.
typedef struct ee4308_interfaces__srv__GetWaypoint_Request
{
  std_msgs__msg__Empty request;
} ee4308_interfaces__srv__GetWaypoint_Request;

// Struct for a sequence of ee4308_interfaces__srv__GetWaypoint_Request.
typedef struct ee4308_interfaces__srv__GetWaypoint_Request__Sequence
{
  ee4308_interfaces__srv__GetWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__srv__GetWaypoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoint'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"

/// Struct defined in srv/GetWaypoint in the package ee4308_interfaces.
typedef struct ee4308_interfaces__srv__GetWaypoint_Response
{
  geometry_msgs__msg__PointStamped waypoint;
} ee4308_interfaces__srv__GetWaypoint_Response;

// Struct for a sequence of ee4308_interfaces__srv__GetWaypoint_Response.
typedef struct ee4308_interfaces__srv__GetWaypoint_Response__Sequence
{
  ee4308_interfaces__srv__GetWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__srv__GetWaypoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EE4308_INTERFACES__SRV__DETAIL__GET_WAYPOINT__STRUCT_H_
