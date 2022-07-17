// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice
#include "ciic_ros_tasks_messages/msg/detail/task_booking__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ciic_ros_tasks_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
cdr_serialize(
  const ciic_ros_tasks_messages::msg::TaskBooking & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: task_namespace
  cdr << ros_message.task_namespace;
  // Member: action
  cdr << ros_message.action;
  // Member: performer_identifier
  cdr << ros_message.performer_identifier;
  // Member: sender_id
  cdr << ros_message.sender_id;
  // Member: recipient_id
  cdr << ros_message.recipient_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ciic_ros_tasks_messages::msg::TaskBooking & ros_message)
{
  // Member: task_namespace
  cdr >> ros_message.task_namespace;

  // Member: action
  cdr >> ros_message.action;

  // Member: performer_identifier
  cdr >> ros_message.performer_identifier;

  // Member: sender_id
  cdr >> ros_message.sender_id;

  // Member: recipient_id
  cdr >> ros_message.recipient_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
get_serialized_size(
  const ciic_ros_tasks_messages::msg::TaskBooking & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: task_namespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.task_namespace.size() + 1);
  // Member: action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.action.size() + 1);
  // Member: performer_identifier
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.performer_identifier.size() + 1);
  // Member: sender_id
  {
    size_t item_size = sizeof(ros_message.sender_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: recipient_id
  {
    size_t item_size = sizeof(ros_message.recipient_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
max_serialized_size_TaskBooking(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: task_namespace
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: action
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: performer_identifier
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sender_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: recipient_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TaskBooking__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ciic_ros_tasks_messages::msg::TaskBooking *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TaskBooking__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ciic_ros_tasks_messages::msg::TaskBooking *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TaskBooking__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ciic_ros_tasks_messages::msg::TaskBooking *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TaskBooking__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TaskBooking(full_bounded, 0);
}

static message_type_support_callbacks_t _TaskBooking__callbacks = {
  "ciic_ros_tasks_messages::msg",
  "TaskBooking",
  _TaskBooking__cdr_serialize,
  _TaskBooking__cdr_deserialize,
  _TaskBooking__get_serialized_size,
  _TaskBooking__max_serialized_size
};

static rosidl_message_type_support_t _TaskBooking__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TaskBooking__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ciic_ros_tasks_messages

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ciic_ros_tasks_messages
const rosidl_message_type_support_t *
get_message_type_support_handle<ciic_ros_tasks_messages::msg::TaskBooking>()
{
  return &ciic_ros_tasks_messages::msg::typesupport_fastrtps_cpp::_TaskBooking__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ciic_ros_tasks_messages, msg, TaskBooking)() {
  return &ciic_ros_tasks_messages::msg::typesupport_fastrtps_cpp::_TaskBooking__handle;
}

#ifdef __cplusplus
}
#endif
