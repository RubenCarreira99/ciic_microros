// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.h"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ciic_ros_tasks_messages__msg__task_booking__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ciic_ros_tasks_messages.msg._task_booking.TaskBooking", full_classname_dest, 53) == 0);
  }
  ciic_ros_tasks_messages__msg__TaskBooking * ros_message = _ros_message;
  {  // task_namespace
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_namespace");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task_namespace, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // action
    PyObject * field = PyObject_GetAttrString(_pymsg, "action");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->action, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // performer_identifier
    PyObject * field = PyObject_GetAttrString(_pymsg, "performer_identifier");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->performer_identifier, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sender_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sender_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sender_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // recipient_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "recipient_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->recipient_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ciic_ros_tasks_messages__msg__task_booking__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TaskBooking */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ciic_ros_tasks_messages.msg._task_booking");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TaskBooking");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ciic_ros_tasks_messages__msg__TaskBooking * ros_message = (ciic_ros_tasks_messages__msg__TaskBooking *)raw_ros_message;
  {  // task_namespace
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task_namespace.data,
      strlen(ros_message->task_namespace.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_namespace", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // action
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->action.data,
      strlen(ros_message->action.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // performer_identifier
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->performer_identifier.data,
      strlen(ros_message->performer_identifier.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "performer_identifier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sender_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->sender_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sender_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recipient_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->recipient_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recipient_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
