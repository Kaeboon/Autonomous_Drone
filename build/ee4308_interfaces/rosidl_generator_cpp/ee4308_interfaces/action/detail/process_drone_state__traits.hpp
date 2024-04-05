// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ee4308_interfaces:action/ProcessDroneState.idl
// generated code does not contain a copyright notice

#ifndef EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__TRAITS_HPP_
#define EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ee4308_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ProcessDroneState_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessDroneState_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessDroneState_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ee4308_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ee4308_interfaces::action::ProcessDroneState_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ee4308_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ee4308_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ee4308_interfaces::action::ProcessDroneState_Goal & msg)
{
  return ee4308_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_Goal>()
{
  return "ee4308_interfaces::action::ProcessDroneState_Goal";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_Goal>()
{
  return "ee4308_interfaces/action/ProcessDroneState_Goal";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ee4308_interfaces::action::ProcessDroneState_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace ee4308_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ProcessDroneState_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessDroneState_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessDroneState_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ee4308_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ee4308_interfaces::action::ProcessDroneState_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ee4308_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ee4308_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ee4308_interfaces::action::ProcessDroneState_Result & msg)
{
  return ee4308_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_Result>()
{
  return "ee4308_interfaces::action::ProcessDroneState_Result";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_Result>()
{
  return "ee4308_interfaces/action/ProcessDroneState_Result";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_Result>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_Result>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<ee4308_interfaces::action::ProcessDroneState_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'feedback'
// already included above
// #include "std_msgs/msg/detail/empty__traits.hpp"

namespace ee4308_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ProcessDroneState_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessDroneState_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessDroneState_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ee4308_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ee4308_interfaces::action::ProcessDroneState_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ee4308_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ee4308_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ee4308_interfaces::action::ProcessDroneState_Feedback & msg)
{
  return ee4308_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_Feedback>()
{
  return "ee4308_interfaces::action::ProcessDroneState_Feedback";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_Feedback>()
{
  return "ee4308_interfaces/action/ProcessDroneState_Feedback";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_Feedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_Feedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<ee4308_interfaces::action::ProcessDroneState_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ee4308_interfaces/action/detail/process_drone_state__traits.hpp"

namespace ee4308_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ProcessDroneState_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessDroneState_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessDroneState_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ee4308_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ee4308_interfaces::action::ProcessDroneState_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ee4308_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ee4308_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ee4308_interfaces::action::ProcessDroneState_SendGoal_Request & msg)
{
  return ee4308_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>()
{
  return "ee4308_interfaces::action::ProcessDroneState_SendGoal_Request";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>()
{
  return "ee4308_interfaces/action/ProcessDroneState_SendGoal_Request";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ee4308_interfaces::action::ProcessDroneState_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ee4308_interfaces::action::ProcessDroneState_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ee4308_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ProcessDroneState_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessDroneState_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessDroneState_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ee4308_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ee4308_interfaces::action::ProcessDroneState_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ee4308_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ee4308_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ee4308_interfaces::action::ProcessDroneState_SendGoal_Response & msg)
{
  return ee4308_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>()
{
  return "ee4308_interfaces::action::ProcessDroneState_SendGoal_Response";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>()
{
  return "ee4308_interfaces/action/ProcessDroneState_SendGoal_Response";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_SendGoal>()
{
  return "ee4308_interfaces::action::ProcessDroneState_SendGoal";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_SendGoal>()
{
  return "ee4308_interfaces/action/ProcessDroneState_SendGoal";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>::value &&
    has_fixed_size<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>::value &&
    has_bounded_size<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ee4308_interfaces::action::ProcessDroneState_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ee4308_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ProcessDroneState_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessDroneState_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessDroneState_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ee4308_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ee4308_interfaces::action::ProcessDroneState_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ee4308_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ee4308_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ee4308_interfaces::action::ProcessDroneState_GetResult_Request & msg)
{
  return ee4308_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>()
{
  return "ee4308_interfaces::action::ProcessDroneState_GetResult_Request";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>()
{
  return "ee4308_interfaces/action/ProcessDroneState_GetResult_Request";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__traits.hpp"

namespace ee4308_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ProcessDroneState_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessDroneState_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessDroneState_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ee4308_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ee4308_interfaces::action::ProcessDroneState_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ee4308_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ee4308_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ee4308_interfaces::action::ProcessDroneState_GetResult_Response & msg)
{
  return ee4308_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>()
{
  return "ee4308_interfaces::action::ProcessDroneState_GetResult_Response";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>()
{
  return "ee4308_interfaces/action/ProcessDroneState_GetResult_Response";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ee4308_interfaces::action::ProcessDroneState_Result>::value> {};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ee4308_interfaces::action::ProcessDroneState_Result>::value> {};

template<>
struct is_message<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_GetResult>()
{
  return "ee4308_interfaces::action::ProcessDroneState_GetResult";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_GetResult>()
{
  return "ee4308_interfaces/action/ProcessDroneState_GetResult";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>::value &&
    has_fixed_size<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>::value &&
    has_bounded_size<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ee4308_interfaces::action::ProcessDroneState_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__traits.hpp"

namespace ee4308_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ProcessDroneState_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessDroneState_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessDroneState_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ee4308_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ee4308_interfaces::action::ProcessDroneState_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ee4308_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ee4308_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ee4308_interfaces::action::ProcessDroneState_FeedbackMessage & msg)
{
  return ee4308_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage>()
{
  return "ee4308_interfaces::action::ProcessDroneState_FeedbackMessage";
}

template<>
inline const char * name<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage>()
{
  return "ee4308_interfaces/action/ProcessDroneState_FeedbackMessage";
}

template<>
struct has_fixed_size<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ee4308_interfaces::action::ProcessDroneState_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ee4308_interfaces::action::ProcessDroneState_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ee4308_interfaces::action::ProcessDroneState>
  : std::true_type
{
};

template<>
struct is_action_goal<ee4308_interfaces::action::ProcessDroneState_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ee4308_interfaces::action::ProcessDroneState_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ee4308_interfaces::action::ProcessDroneState_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__TRAITS_HPP_
