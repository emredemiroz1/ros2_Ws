// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beetle_msgs:msg/TwistLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__STRUCT_H_
#define BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TwistLite in the package beetle_msgs.
typedef struct beetle_msgs__msg__TwistLite
{
  float linear;
  float angular;
} beetle_msgs__msg__TwistLite;

// Struct for a sequence of beetle_msgs__msg__TwistLite.
typedef struct beetle_msgs__msg__TwistLite__Sequence
{
  beetle_msgs__msg__TwistLite * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beetle_msgs__msg__TwistLite__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__STRUCT_H_
