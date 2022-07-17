// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ciic_ros_tasks_messages:srv/LedTask.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__STRUCT_HPP_
#define CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ciic_ros_tasks_messages__srv__LedTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__ciic_ros_tasks_messages__srv__LedTask_Request __declspec(deprecated)
#endif

namespace ciic_ros_tasks_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedTask_Request_
{
  using Type = LedTask_Request_<ContainerAllocator>;

  explicit LedTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_type = "";
      this->value = 0ll;
    }
  }

  explicit LedTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_type = "";
      this->value = 0ll;
    }
  }

  // field types and members
  using _task_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _task_type_type task_type;
  using _value_type =
    int64_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__task_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__value(
    const int64_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ciic_ros_tasks_messages__srv__LedTask_Request
    std::shared_ptr<ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ciic_ros_tasks_messages__srv__LedTask_Request
    std::shared_ptr<ciic_ros_tasks_messages::srv::LedTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedTask_Request_ & other) const
  {
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedTask_Request_

// alias to use template instance with default allocator
using LedTask_Request =
  ciic_ros_tasks_messages::srv::LedTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ciic_ros_tasks_messages


#ifndef _WIN32
# define DEPRECATED__ciic_ros_tasks_messages__srv__LedTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__ciic_ros_tasks_messages__srv__LedTask_Response __declspec(deprecated)
#endif

namespace ciic_ros_tasks_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedTask_Response_
{
  using Type = LedTask_Response_<ContainerAllocator>;

  explicit LedTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit LedTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ciic_ros_tasks_messages__srv__LedTask_Response
    std::shared_ptr<ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ciic_ros_tasks_messages__srv__LedTask_Response
    std::shared_ptr<ciic_ros_tasks_messages::srv::LedTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedTask_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedTask_Response_

// alias to use template instance with default allocator
using LedTask_Response =
  ciic_ros_tasks_messages::srv::LedTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ciic_ros_tasks_messages

namespace ciic_ros_tasks_messages
{

namespace srv
{

struct LedTask
{
  using Request = ciic_ros_tasks_messages::srv::LedTask_Request;
  using Response = ciic_ros_tasks_messages::srv::LedTask_Response;
};

}  // namespace srv

}  // namespace ciic_ros_tasks_messages

#endif  // CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__STRUCT_HPP_
