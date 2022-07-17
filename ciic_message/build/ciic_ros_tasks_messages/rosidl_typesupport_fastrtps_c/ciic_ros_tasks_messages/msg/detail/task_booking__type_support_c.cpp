// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice
#include "ciic_ros_tasks_messages/msg/detail/task_booking__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ciic_ros_tasks_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.h"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // action, performer_identifier, task_namespace
#include "rosidl_runtime_c/string_functions.h"  // action, performer_identifier, task_namespace

// forward declare type support functions


using _TaskBooking__ros_msg_type = ciic_ros_tasks_messages__msg__TaskBooking;

static bool _TaskBooking__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TaskBooking__ros_msg_type * ros_message = static_cast<const _TaskBooking__ros_msg_type *>(untyped_ros_message);
  // Field name: task_namespace
  {
    const rosidl_runtime_c__String * str = &ros_message->task_namespace;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: action
  {
    const rosidl_runtime_c__String * str = &ros_message->action;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: performer_identifier
  {
    const rosidl_runtime_c__String * str = &ros_message->performer_identifier;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sender_id
  {
    cdr << ros_message->sender_id;
  }

  // Field name: recipient_id
  {
    cdr << ros_message->recipient_id;
  }

  return true;
}

static bool _TaskBooking__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TaskBooking__ros_msg_type * ros_message = static_cast<_TaskBooking__ros_msg_type *>(untyped_ros_message);
  // Field name: task_namespace
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_namespace.data) {
      rosidl_runtime_c__String__init(&ros_message->task_namespace);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_namespace,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_namespace'\n");
      return false;
    }
  }

  // Field name: action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->action.data) {
      rosidl_runtime_c__String__init(&ros_message->action);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'action'\n");
      return false;
    }
  }

  // Field name: performer_identifier
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->performer_identifier.data) {
      rosidl_runtime_c__String__init(&ros_message->performer_identifier);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->performer_identifier,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'performer_identifier'\n");
      return false;
    }
  }

  // Field name: sender_id
  {
    cdr >> ros_message->sender_id;
  }

  // Field name: recipient_id
  {
    cdr >> ros_message->recipient_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ciic_ros_tasks_messages
size_t get_serialized_size_ciic_ros_tasks_messages__msg__TaskBooking(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TaskBooking__ros_msg_type * ros_message = static_cast<const _TaskBooking__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task_namespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_namespace.size + 1);
  // field.name action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->action.size + 1);
  // field.name performer_identifier
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->performer_identifier.size + 1);
  // field.name sender_id
  {
    size_t item_size = sizeof(ros_message->sender_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recipient_id
  {
    size_t item_size = sizeof(ros_message->recipient_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TaskBooking__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ciic_ros_tasks_messages__msg__TaskBooking(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ciic_ros_tasks_messages
size_t max_serialized_size_ciic_ros_tasks_messages__msg__TaskBooking(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: task_namespace
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: action
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: performer_identifier
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sender_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: recipient_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TaskBooking__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ciic_ros_tasks_messages__msg__TaskBooking(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TaskBooking = {
  "ciic_ros_tasks_messages::msg",
  "TaskBooking",
  _TaskBooking__cdr_serialize,
  _TaskBooking__cdr_deserialize,
  _TaskBooking__get_serialized_size,
  _TaskBooking__max_serialized_size
};

static rosidl_message_type_support_t _TaskBooking__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TaskBooking,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ciic_ros_tasks_messages, msg, TaskBooking)() {
  return &_TaskBooking__type_support;
}

#if defined(__cplusplus)
}
#endif
