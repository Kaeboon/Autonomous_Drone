// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ee4308_interfaces:action/ProcessDroneState.idl
// generated code does not contain a copyright notice

#ifndef EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__STRUCT_H_
#define EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ProcessDroneState in the package ee4308_interfaces.
typedef struct ee4308_interfaces__action__ProcessDroneState_Goal
{
  uint8_t state;
} ee4308_interfaces__action__ProcessDroneState_Goal;

// Struct for a sequence of ee4308_interfaces__action__ProcessDroneState_Goal.
typedef struct ee4308_interfaces__action__ProcessDroneState_Goal__Sequence
{
  ee4308_interfaces__action__ProcessDroneState_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__action__ProcessDroneState_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in action/ProcessDroneState in the package ee4308_interfaces.
typedef struct ee4308_interfaces__action__ProcessDroneState_Result
{
  /// result
  std_msgs__msg__Empty result;
} ee4308_interfaces__action__ProcessDroneState_Result;

// Struct for a sequence of ee4308_interfaces__action__ProcessDroneState_Result.
typedef struct ee4308_interfaces__action__ProcessDroneState_Result__Sequence
{
  ee4308_interfaces__action__ProcessDroneState_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__action__ProcessDroneState_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in action/ProcessDroneState in the package ee4308_interfaces.
typedef struct ee4308_interfaces__action__ProcessDroneState_Feedback
{
  /// feedback
  std_msgs__msg__Empty feedback;
} ee4308_interfaces__action__ProcessDroneState_Feedback;

// Struct for a sequence of ee4308_interfaces__action__ProcessDroneState_Feedback.
typedef struct ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence
{
  ee4308_interfaces__action__ProcessDroneState_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ee4308_interfaces/action/detail/process_drone_state__struct.h"

/// Struct defined in action/ProcessDroneState in the package ee4308_interfaces.
typedef struct ee4308_interfaces__action__ProcessDroneState_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ee4308_interfaces__action__ProcessDroneState_Goal goal;
} ee4308_interfaces__action__ProcessDroneState_SendGoal_Request;

// Struct for a sequence of ee4308_interfaces__action__ProcessDroneState_SendGoal_Request.
typedef struct ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence
{
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ProcessDroneState in the package ee4308_interfaces.
typedef struct ee4308_interfaces__action__ProcessDroneState_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ee4308_interfaces__action__ProcessDroneState_SendGoal_Response;

// Struct for a sequence of ee4308_interfaces__action__ProcessDroneState_SendGoal_Response.
typedef struct ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence
{
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ProcessDroneState in the package ee4308_interfaces.
typedef struct ee4308_interfaces__action__ProcessDroneState_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ee4308_interfaces__action__ProcessDroneState_GetResult_Request;

// Struct for a sequence of ee4308_interfaces__action__ProcessDroneState_GetResult_Request.
typedef struct ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence
{
  ee4308_interfaces__action__ProcessDroneState_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.h"

/// Struct defined in action/ProcessDroneState in the package ee4308_interfaces.
typedef struct ee4308_interfaces__action__ProcessDroneState_GetResult_Response
{
  int8_t status;
  ee4308_interfaces__action__ProcessDroneState_Result result;
} ee4308_interfaces__action__ProcessDroneState_GetResult_Response;

// Struct for a sequence of ee4308_interfaces__action__ProcessDroneState_GetResult_Response.
typedef struct ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence
{
  ee4308_interfaces__action__ProcessDroneState_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.h"

/// Struct defined in action/ProcessDroneState in the package ee4308_interfaces.
typedef struct ee4308_interfaces__action__ProcessDroneState_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ee4308_interfaces__action__ProcessDroneState_Feedback feedback;
} ee4308_interfaces__action__ProcessDroneState_FeedbackMessage;

// Struct for a sequence of ee4308_interfaces__action__ProcessDroneState_FeedbackMessage.
typedef struct ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence
{
  ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__STRUCT_H_
