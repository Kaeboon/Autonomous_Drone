// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ee4308_interfaces:action/ProcessDroneState.idl
// generated code does not contain a copyright notice

#ifndef EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__BUILDER_HPP_
#define EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ee4308_interfaces
{

namespace action
{

namespace builder
{

class Init_ProcessDroneState_Goal_state
{
public:
  Init_ProcessDroneState_Goal_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ee4308_interfaces::action::ProcessDroneState_Goal state(::ee4308_interfaces::action::ProcessDroneState_Goal::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::action::ProcessDroneState_Goal>()
{
  return ee4308_interfaces::action::builder::Init_ProcessDroneState_Goal_state();
}

}  // namespace ee4308_interfaces


namespace ee4308_interfaces
{

namespace action
{

namespace builder
{

class Init_ProcessDroneState_Result_result
{
public:
  Init_ProcessDroneState_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ee4308_interfaces::action::ProcessDroneState_Result result(::ee4308_interfaces::action::ProcessDroneState_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::action::ProcessDroneState_Result>()
{
  return ee4308_interfaces::action::builder::Init_ProcessDroneState_Result_result();
}

}  // namespace ee4308_interfaces


namespace ee4308_interfaces
{

namespace action
{

namespace builder
{

class Init_ProcessDroneState_Feedback_feedback
{
public:
  Init_ProcessDroneState_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ee4308_interfaces::action::ProcessDroneState_Feedback feedback(::ee4308_interfaces::action::ProcessDroneState_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::action::ProcessDroneState_Feedback>()
{
  return ee4308_interfaces::action::builder::Init_ProcessDroneState_Feedback_feedback();
}

}  // namespace ee4308_interfaces


namespace ee4308_interfaces
{

namespace action
{

namespace builder
{

class Init_ProcessDroneState_SendGoal_Request_goal
{
public:
  explicit Init_ProcessDroneState_SendGoal_Request_goal(::ee4308_interfaces::action::ProcessDroneState_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ee4308_interfaces::action::ProcessDroneState_SendGoal_Request goal(::ee4308_interfaces::action::ProcessDroneState_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_SendGoal_Request msg_;
};

class Init_ProcessDroneState_SendGoal_Request_goal_id
{
public:
  Init_ProcessDroneState_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessDroneState_SendGoal_Request_goal goal_id(::ee4308_interfaces::action::ProcessDroneState_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ProcessDroneState_SendGoal_Request_goal(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>()
{
  return ee4308_interfaces::action::builder::Init_ProcessDroneState_SendGoal_Request_goal_id();
}

}  // namespace ee4308_interfaces


namespace ee4308_interfaces
{

namespace action
{

namespace builder
{

class Init_ProcessDroneState_SendGoal_Response_stamp
{
public:
  explicit Init_ProcessDroneState_SendGoal_Response_stamp(::ee4308_interfaces::action::ProcessDroneState_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ee4308_interfaces::action::ProcessDroneState_SendGoal_Response stamp(::ee4308_interfaces::action::ProcessDroneState_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_SendGoal_Response msg_;
};

class Init_ProcessDroneState_SendGoal_Response_accepted
{
public:
  Init_ProcessDroneState_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessDroneState_SendGoal_Response_stamp accepted(::ee4308_interfaces::action::ProcessDroneState_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ProcessDroneState_SendGoal_Response_stamp(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>()
{
  return ee4308_interfaces::action::builder::Init_ProcessDroneState_SendGoal_Response_accepted();
}

}  // namespace ee4308_interfaces


namespace ee4308_interfaces
{

namespace action
{

namespace builder
{

class Init_ProcessDroneState_GetResult_Request_goal_id
{
public:
  Init_ProcessDroneState_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ee4308_interfaces::action::ProcessDroneState_GetResult_Request goal_id(::ee4308_interfaces::action::ProcessDroneState_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::action::ProcessDroneState_GetResult_Request>()
{
  return ee4308_interfaces::action::builder::Init_ProcessDroneState_GetResult_Request_goal_id();
}

}  // namespace ee4308_interfaces


namespace ee4308_interfaces
{

namespace action
{

namespace builder
{

class Init_ProcessDroneState_GetResult_Response_result
{
public:
  explicit Init_ProcessDroneState_GetResult_Response_result(::ee4308_interfaces::action::ProcessDroneState_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ee4308_interfaces::action::ProcessDroneState_GetResult_Response result(::ee4308_interfaces::action::ProcessDroneState_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_GetResult_Response msg_;
};

class Init_ProcessDroneState_GetResult_Response_status
{
public:
  Init_ProcessDroneState_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessDroneState_GetResult_Response_result status(::ee4308_interfaces::action::ProcessDroneState_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ProcessDroneState_GetResult_Response_result(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::action::ProcessDroneState_GetResult_Response>()
{
  return ee4308_interfaces::action::builder::Init_ProcessDroneState_GetResult_Response_status();
}

}  // namespace ee4308_interfaces


namespace ee4308_interfaces
{

namespace action
{

namespace builder
{

class Init_ProcessDroneState_FeedbackMessage_feedback
{
public:
  explicit Init_ProcessDroneState_FeedbackMessage_feedback(::ee4308_interfaces::action::ProcessDroneState_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ee4308_interfaces::action::ProcessDroneState_FeedbackMessage feedback(::ee4308_interfaces::action::ProcessDroneState_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_FeedbackMessage msg_;
};

class Init_ProcessDroneState_FeedbackMessage_goal_id
{
public:
  Init_ProcessDroneState_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessDroneState_FeedbackMessage_feedback goal_id(::ee4308_interfaces::action::ProcessDroneState_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ProcessDroneState_FeedbackMessage_feedback(msg_);
  }

private:
  ::ee4308_interfaces::action::ProcessDroneState_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ee4308_interfaces::action::ProcessDroneState_FeedbackMessage>()
{
  return ee4308_interfaces::action::builder::Init_ProcessDroneState_FeedbackMessage_goal_id();
}

}  // namespace ee4308_interfaces

#endif  // EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__BUILDER_HPP_
