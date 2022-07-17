// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ciic_ros_tasks_messages:srv/LedTask.idl
// generated code does not contain a copyright notice
#include "ciic_ros_tasks_messages/srv/detail/led_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `task_type`
#include "rosidl_runtime_c/string_functions.h"

bool
ciic_ros_tasks_messages__srv__LedTask_Request__init(ciic_ros_tasks_messages__srv__LedTask_Request * msg)
{
  if (!msg) {
    return false;
  }
  // task_type
  if (!rosidl_runtime_c__String__init(&msg->task_type)) {
    ciic_ros_tasks_messages__srv__LedTask_Request__fini(msg);
    return false;
  }
  // value
  return true;
}

void
ciic_ros_tasks_messages__srv__LedTask_Request__fini(ciic_ros_tasks_messages__srv__LedTask_Request * msg)
{
  if (!msg) {
    return;
  }
  // task_type
  rosidl_runtime_c__String__fini(&msg->task_type);
  // value
}

ciic_ros_tasks_messages__srv__LedTask_Request *
ciic_ros_tasks_messages__srv__LedTask_Request__create()
{
  ciic_ros_tasks_messages__srv__LedTask_Request * msg = (ciic_ros_tasks_messages__srv__LedTask_Request *)malloc(sizeof(ciic_ros_tasks_messages__srv__LedTask_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ciic_ros_tasks_messages__srv__LedTask_Request));
  bool success = ciic_ros_tasks_messages__srv__LedTask_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ciic_ros_tasks_messages__srv__LedTask_Request__destroy(ciic_ros_tasks_messages__srv__LedTask_Request * msg)
{
  if (msg) {
    ciic_ros_tasks_messages__srv__LedTask_Request__fini(msg);
  }
  free(msg);
}


bool
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__init(ciic_ros_tasks_messages__srv__LedTask_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ciic_ros_tasks_messages__srv__LedTask_Request * data = NULL;
  if (size) {
    data = (ciic_ros_tasks_messages__srv__LedTask_Request *)calloc(size, sizeof(ciic_ros_tasks_messages__srv__LedTask_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ciic_ros_tasks_messages__srv__LedTask_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ciic_ros_tasks_messages__srv__LedTask_Request__fini(&data[i - 1]);
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
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__fini(ciic_ros_tasks_messages__srv__LedTask_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ciic_ros_tasks_messages__srv__LedTask_Request__fini(&array->data[i]);
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

ciic_ros_tasks_messages__srv__LedTask_Request__Sequence *
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__create(size_t size)
{
  ciic_ros_tasks_messages__srv__LedTask_Request__Sequence * array = (ciic_ros_tasks_messages__srv__LedTask_Request__Sequence *)malloc(sizeof(ciic_ros_tasks_messages__srv__LedTask_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__destroy(ciic_ros_tasks_messages__srv__LedTask_Request__Sequence * array)
{
  if (array) {
    ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ciic_ros_tasks_messages__srv__LedTask_Response__init(ciic_ros_tasks_messages__srv__LedTask_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    ciic_ros_tasks_messages__srv__LedTask_Response__fini(msg);
    return false;
  }
  return true;
}

void
ciic_ros_tasks_messages__srv__LedTask_Response__fini(ciic_ros_tasks_messages__srv__LedTask_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

ciic_ros_tasks_messages__srv__LedTask_Response *
ciic_ros_tasks_messages__srv__LedTask_Response__create()
{
  ciic_ros_tasks_messages__srv__LedTask_Response * msg = (ciic_ros_tasks_messages__srv__LedTask_Response *)malloc(sizeof(ciic_ros_tasks_messages__srv__LedTask_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ciic_ros_tasks_messages__srv__LedTask_Response));
  bool success = ciic_ros_tasks_messages__srv__LedTask_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ciic_ros_tasks_messages__srv__LedTask_Response__destroy(ciic_ros_tasks_messages__srv__LedTask_Response * msg)
{
  if (msg) {
    ciic_ros_tasks_messages__srv__LedTask_Response__fini(msg);
  }
  free(msg);
}


bool
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__init(ciic_ros_tasks_messages__srv__LedTask_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ciic_ros_tasks_messages__srv__LedTask_Response * data = NULL;
  if (size) {
    data = (ciic_ros_tasks_messages__srv__LedTask_Response *)calloc(size, sizeof(ciic_ros_tasks_messages__srv__LedTask_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ciic_ros_tasks_messages__srv__LedTask_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ciic_ros_tasks_messages__srv__LedTask_Response__fini(&data[i - 1]);
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
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__fini(ciic_ros_tasks_messages__srv__LedTask_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ciic_ros_tasks_messages__srv__LedTask_Response__fini(&array->data[i]);
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

ciic_ros_tasks_messages__srv__LedTask_Response__Sequence *
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__create(size_t size)
{
  ciic_ros_tasks_messages__srv__LedTask_Response__Sequence * array = (ciic_ros_tasks_messages__srv__LedTask_Response__Sequence *)malloc(sizeof(ciic_ros_tasks_messages__srv__LedTask_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__destroy(ciic_ros_tasks_messages__srv__LedTask_Response__Sequence * array)
{
  if (array) {
    ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__fini(array);
  }
  free(array);
}
