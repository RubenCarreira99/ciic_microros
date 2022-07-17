// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__STRUCT_HPP_
#define CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ciic_ros_tasks_messages__msg__TaskBooking __attribute__((deprecated))
#else
# define DEPRECATED__ciic_ros_tasks_messages__msg__TaskBooking __declspec(deprecated)
#endif

namespace ciic_ros_tasks_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskBooking_
{
  using Type = TaskBooking_<ContainerAllocator>;

  explicit TaskBooking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_namespace = "";
      this->action = "";
      this->performer_identifier = "";
      this->sender_id = 0ll;
      this->recipient_id = 0ll;
    }
  }

  explicit TaskBooking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_namespace(_alloc),
    action(_alloc),
    performer_identifier(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_namespace = "";
      this->action = "";
      this->performer_identifier = "";
      this->sender_id = 0ll;
      this->recipient_id = 0ll;
    }
  }

  // field types and members
  using _task_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _task_namespace_type task_namespace;
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;
  using _performer_identifier_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _performer_identifier_type performer_identifier;
  using _sender_id_type =
    int64_t;
  _sender_id_type sender_id;
  using _recipient_id_type =
    int64_t;
  _recipient_id_type recipient_id;

  // setters for named parameter idiom
  Type & set__task_namespace(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->task_namespace = _arg;
    return *this;
  }
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__performer_identifier(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->performer_identifier = _arg;
    return *this;
  }
  Type & set__sender_id(
    const int64_t & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__recipient_id(
    const int64_t & _arg)
  {
    this->recipient_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator> *;
  using ConstRawPtr =
    const ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ciic_ros_tasks_messages__msg__TaskBooking
    std::shared_ptr<ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ciic_ros_tasks_messages__msg__TaskBooking
    std::shared_ptr<ciic_ros_tasks_messages::msg::TaskBooking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskBooking_ & other) const
  {
    if (this->task_namespace != other.task_namespace) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->performer_identifier != other.performer_identifier) {
      return false;
    }
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->recipient_id != other.recipient_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskBooking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskBooking_

// alias to use template instance with default allocator
using TaskBooking =
  ciic_ros_tasks_messages::msg::TaskBooking_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ciic_ros_tasks_messages

#endif  // CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__STRUCT_HPP_
