// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from beetle_msgs:msg/TwistLite.idl
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
#include "beetle_msgs/msg/detail/twist_lite__struct.h"
#include "beetle_msgs/msg/detail/twist_lite__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool beetle_msgs__msg__twist_lite__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("beetle_msgs.msg._twist_lite.TwistLite", full_classname_dest, 37) == 0);
  }
  beetle_msgs__msg__TwistLite * ros_message = _ros_message;
  {  // linear
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * beetle_msgs__msg__twist_lite__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TwistLite */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("beetle_msgs.msg._twist_lite");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TwistLite");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  beetle_msgs__msg__TwistLite * ros_message = (beetle_msgs__msg__TwistLite *)raw_ros_message;
  {  // linear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
