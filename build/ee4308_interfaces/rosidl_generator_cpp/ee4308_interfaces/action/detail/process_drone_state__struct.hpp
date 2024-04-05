// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ee4308_interfaces:action/ProcessDroneState.idl
// generated code does not contain a copyright notice

#ifndef EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__STRUCT_HPP_
#define EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Goal __declspec(deprecated)
#endif

namespace ee4308_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ProcessDroneState_Goal_
{
  using Type = ProcessDroneState_Goal_<ContainerAllocator>;

  explicit ProcessDroneState_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit ProcessDroneState_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Goal
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Goal
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessDroneState_Goal_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessDroneState_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessDroneState_Goal_

// alias to use template instance with default allocator
using ProcessDroneState_Goal =
  ee4308_interfaces::action::ProcessDroneState_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ee4308_interfaces


// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Result __attribute__((deprecated))
#else
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Result __declspec(deprecated)
#endif

namespace ee4308_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ProcessDroneState_Result_
{
  using Type = ProcessDroneState_Result_<ContainerAllocator>;

  explicit ProcessDroneState_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit ProcessDroneState_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Result
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Result
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessDroneState_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessDroneState_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessDroneState_Result_

// alias to use template instance with default allocator
using ProcessDroneState_Result =
  ee4308_interfaces::action::ProcessDroneState_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ee4308_interfaces


// Include directives for member types
// Member 'feedback'
// already included above
// #include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Feedback __declspec(deprecated)
#endif

namespace ee4308_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ProcessDroneState_Feedback_
{
  using Type = ProcessDroneState_Feedback_<ContainerAllocator>;

  explicit ProcessDroneState_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_init)
  {
    (void)_init;
  }

  explicit ProcessDroneState_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _feedback_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Feedback
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_Feedback
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessDroneState_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessDroneState_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessDroneState_Feedback_

// alias to use template instance with default allocator
using ProcessDroneState_Feedback =
  ee4308_interfaces::action::ProcessDroneState_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ee4308_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_SendGoal_Request __declspec(deprecated)
#endif

namespace ee4308_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ProcessDroneState_SendGoal_Request_
{
  using Type = ProcessDroneState_SendGoal_Request_<ContainerAllocator>;

  explicit ProcessDroneState_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ProcessDroneState_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ee4308_interfaces::action::ProcessDroneState_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_SendGoal_Request
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_SendGoal_Request
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessDroneState_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessDroneState_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessDroneState_SendGoal_Request_

// alias to use template instance with default allocator
using ProcessDroneState_SendGoal_Request =
  ee4308_interfaces::action::ProcessDroneState_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ee4308_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_SendGoal_Response __declspec(deprecated)
#endif

namespace ee4308_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ProcessDroneState_SendGoal_Response_
{
  using Type = ProcessDroneState_SendGoal_Response_<ContainerAllocator>;

  explicit ProcessDroneState_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ProcessDroneState_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_SendGoal_Response
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_SendGoal_Response
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessDroneState_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessDroneState_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessDroneState_SendGoal_Response_

// alias to use template instance with default allocator
using ProcessDroneState_SendGoal_Response =
  ee4308_interfaces::action::ProcessDroneState_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ee4308_interfaces

namespace ee4308_interfaces
{

namespace action
{

struct ProcessDroneState_SendGoal
{
  using Request = ee4308_interfaces::action::ProcessDroneState_SendGoal_Request;
  using Response = ee4308_interfaces::action::ProcessDroneState_SendGoal_Response;
};

}  // namespace action

}  // namespace ee4308_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_GetResult_Request __declspec(deprecated)
#endif

namespace ee4308_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ProcessDroneState_GetResult_Request_
{
  using Type = ProcessDroneState_GetResult_Request_<ContainerAllocator>;

  explicit ProcessDroneState_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ProcessDroneState_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_GetResult_Request
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_GetResult_Request
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessDroneState_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessDroneState_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessDroneState_GetResult_Request_

// alias to use template instance with default allocator
using ProcessDroneState_GetResult_Request =
  ee4308_interfaces::action::ProcessDroneState_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ee4308_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_GetResult_Response __declspec(deprecated)
#endif

namespace ee4308_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ProcessDroneState_GetResult_Response_
{
  using Type = ProcessDroneState_GetResult_Response_<ContainerAllocator>;

  explicit ProcessDroneState_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ProcessDroneState_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ee4308_interfaces::action::ProcessDroneState_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_GetResult_Response
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_GetResult_Response
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessDroneState_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessDroneState_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessDroneState_GetResult_Response_

// alias to use template instance with default allocator
using ProcessDroneState_GetResult_Response =
  ee4308_interfaces::action::ProcessDroneState_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ee4308_interfaces

namespace ee4308_interfaces
{

namespace action
{

struct ProcessDroneState_GetResult
{
  using Request = ee4308_interfaces::action::ProcessDroneState_GetResult_Request;
  using Response = ee4308_interfaces::action::ProcessDroneState_GetResult_Response;
};

}  // namespace action

}  // namespace ee4308_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ee4308_interfaces__action__ProcessDroneState_FeedbackMessage __declspec(deprecated)
#endif

namespace ee4308_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ProcessDroneState_FeedbackMessage_
{
  using Type = ProcessDroneState_FeedbackMessage_<ContainerAllocator>;

  explicit ProcessDroneState_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ProcessDroneState_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ee4308_interfaces::action::ProcessDroneState_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_FeedbackMessage
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ee4308_interfaces__action__ProcessDroneState_FeedbackMessage
    std::shared_ptr<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessDroneState_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessDroneState_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessDroneState_FeedbackMessage_

// alias to use template instance with default allocator
using ProcessDroneState_FeedbackMessage =
  ee4308_interfaces::action::ProcessDroneState_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ee4308_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ee4308_interfaces
{

namespace action
{

struct ProcessDroneState
{
  /// The goal message defined in the action definition.
  using Goal = ee4308_interfaces::action::ProcessDroneState_Goal;
  /// The result message defined in the action definition.
  using Result = ee4308_interfaces::action::ProcessDroneState_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ee4308_interfaces::action::ProcessDroneState_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ee4308_interfaces::action::ProcessDroneState_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ee4308_interfaces::action::ProcessDroneState_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ee4308_interfaces::action::ProcessDroneState_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ProcessDroneState ProcessDroneState;

}  // namespace action

}  // namespace ee4308_interfaces

#endif  // EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__STRUCT_HPP_
