// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice
#include "ciic_ros_tasks_messages/msg/detail/task_booking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `task_namespace`
// Member `action`
// Member `performer_identifier`
#include "rosidl_runtime_c/string_functions.h"

bool
ciic_ros_tasks_messages__msg__TaskBooking__init(ciic_ros_tasks_messages__msg__TaskBooking * msg)
{
  if (!msg) {
    return false;
  }
  // task_namespace
  if (!rosidl_runtime_c__String__init(&msg->task_namespace)) {
    ciic_ros_tasks_messages__msg__TaskBooking__fini(msg);
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    ciic_ros_tasks_messages__msg__TaskBooking__fini(msg);
    return false;
  }
  // performer_identifier
  if (!rosidl_runtime_c__String__init(&msg->performer_identifier)) {
    ciic_ros_tasks_messages__msg__TaskBooking__fini(msg);
    return false;
  }
  // sender_id
  // recipient_id
  return true;
}

void
ciic_ros_tasks_messages__msg__TaskBooking__fini(ciic_ros_tasks_messages__msg__TaskBooking * msg)
{
  if (!msg) {
    return;
  }
  // task_namespace
  rosidl_runtime_c__String__fini(&msg->task_namespace);
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // performer_identifier
  rosidl_runtime_c__String__fini(&msg->performer_identifier);
  // sender_id
  // recipient_id
}

ciic_ros_tasks_messages__msg__TaskBooking *
ciic_ros_tasks_messages__msg__TaskBooking__create()
{
  ciic_ros_tasks_messages__msg__TaskBooking * msg = (ciic_ros_tasks_messages__msg__TaskBooking *)malloc(sizeof(ciic_ros_tasks_messages__msg__TaskBooking));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ciic_ros_tasks_messages__msg__TaskBooking));
  bool success = ciic_ros_tasks_messages__msg__TaskBooking__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ciic_ros_tasks_messages__msg__TaskBooking__destroy(ciic_ros_tasks_messages__msg__TaskBooking * msg)
{
  if (msg) {
    ciic_ros_tasks_messages__msg__TaskBooking__fini(msg);
  }
  free(msg);
}


bool
ciic_ros_tasks_messages__msg__TaskBooking__Sequence__init(ciic_ros_tasks_messages__msg__TaskBooking__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ciic_ros_tasks_messages__msg__TaskBooking * data = NULL;
  if (size) {
    data = (ciic_ros_tasks_messages__msg__TaskBooking *)calloc(size, sizeof(ciic_ros_tasks_messages__msg__TaskBooking));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ciic_ros_tasks_messages__msg__TaskBooking__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ciic_ros_tasks_messages__msg__TaskBooking__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ciic_ros_tasks_messages__msg__TaskBooking__Sequence__fini(ciic_ros_tasks_messages__msg__TaskBooking__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ciic_ros_tasks_messages__msg__TaskBooking__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ciic_ros_tasks_messages__msg__TaskBooking__Sequence *
ciic_ros_tasks_messages__msg__TaskBooking__Sequence__create(size_t size)
{
  ciic_ros_tasks_messages__msg__TaskBooking__Sequence * array = (ciic_ros_tasks_messages__msg__TaskBooking__Sequence *)malloc(sizeof(ciic_ros_tasks_messages__msg__TaskBooking__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ciic_ros_tasks_messages__msg__TaskBooking__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ciic_ros_tasks_messages__msg__TaskBooking__Sequence__destroy(ciic_ros_tasks_messages__msg__TaskBooking__Sequence * array)
{
  if (array) {
    ciic_ros_tasks_messages__msg__TaskBooking__Sequence__fini(array);
  }
  free(array);
}
