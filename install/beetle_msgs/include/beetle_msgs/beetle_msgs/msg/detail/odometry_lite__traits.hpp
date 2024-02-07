// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beetle_msgs:msg/OdometryLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__TRAITS_HPP_
#define BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "beetle_msgs/msg/detail/odometry_lite__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "beetle_msgs/msg/detail/pose_lite__traits.hpp"
// Member 'twist'
#include "beetle_msgs/msg/detail/twist_lite__traits.hpp"

namespace beetle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OdometryLite & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OdometryLite & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OdometryLite & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace beetle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use beetle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const beetle_msgs::msg::OdometryLite & msg,
  std::ostream & out, size_t indentation = 0)
{
  beetle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beetle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const beetle_msgs::msg::OdometryLite & msg)
{
  return beetle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<beetle_msgs::msg::OdometryLite>()
{
  return "beetle_msgs::msg::OdometryLite";
}

template<>
inline const char * name<beetle_msgs::msg::OdometryLite>()
{
  return "beetle_msgs/msg/OdometryLite";
}

template<>
struct has_fixed_size<beetle_msgs::msg::OdometryLite>
  : std::integral_constant<bool, has_fixed_size<beetle_msgs::msg::PoseLite>::value && has_fixed_size<beetle_msgs::msg::TwistLite>::value> {};

template<>
struct has_bounded_size<beetle_msgs::msg::OdometryLite>
  : std::integral_constant<bool, has_bounded_size<beetle_msgs::msg::PoseLite>::value && has_bounded_size<beetle_msgs::msg::TwistLite>::value> {};

template<>
struct is_message<beetle_msgs::msg::OdometryLite>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__TRAITS_HPP_
