// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beetle_msgs:msg/OdometryLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__STRUCT_H_
#define BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "beetle_msgs/msg/detail/pose_lite__struct.h"
// Member 'twist'
#include "beetle_msgs/msg/detail/twist_lite__struct.h"

/// Struct defined in msg/OdometryLite in the package beetle_msgs.
typedef struct beetle_msgs__msg__OdometryLite
{
  beetle_msgs__msg__PoseLite pose;
  beetle_msgs__msg__TwistLite twist;
} beetle_msgs__msg__OdometryLite;

// Struct for a sequence of beetle_msgs__msg__OdometryLite.
typedef struct beetle_msgs__msg__OdometryLite__Sequence
{
  beetle_msgs__msg__OdometryLite * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beetle_msgs__msg__OdometryLite__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__STRUCT_H_
