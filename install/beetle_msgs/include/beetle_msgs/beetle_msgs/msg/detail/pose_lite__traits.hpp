// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beetle_msgs:msg/PoseLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__POSE_LITE__TRAITS_HPP_
#define BEETLE_MSGS__MSG__DETAIL__POSE_LITE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "beetle_msgs/msg/detail/pose_lite__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace beetle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseLite & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseLite & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseLite & msg, bool use_flow_style = false)
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
  const beetle_msgs::msg::PoseLite & msg,
  std::ostream & out, size_t indentation = 0)
{
  beetle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beetle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const beetle_msgs::msg::PoseLite & msg)
{
  return beetle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<beetle_msgs::msg::PoseLite>()
{
  return "beetle_msgs::msg::PoseLite";
}

template<>
inline const char * name<beetle_msgs::msg::PoseLite>()
{
  return "beetle_msgs/msg/PoseLite";
}

template<>
struct has_fixed_size<beetle_msgs::msg::PoseLite>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beetle_msgs::msg::PoseLite>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beetle_msgs::msg::PoseLite>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEETLE_MSGS__MSG__DETAIL__POSE_LITE__TRAITS_HPP_