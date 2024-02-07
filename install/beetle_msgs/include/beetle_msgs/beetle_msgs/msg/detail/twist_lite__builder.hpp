// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beetle_msgs:msg/TwistLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__BUILDER_HPP_
#define BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beetle_msgs/msg/detail/twist_lite__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beetle_msgs
{

namespace msg
{

namespace builder
{

class Init_TwistLite_angular
{
public:
  explicit Init_TwistLite_angular(::beetle_msgs::msg::TwistLite & msg)
  : msg_(msg)
  {}
  ::beetle_msgs::msg::TwistLite angular(::beetle_msgs::msg::TwistLite::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beetle_msgs::msg::TwistLite msg_;
};

class Init_TwistLite_linear
{
public:
  Init_TwistLite_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistLite_angular linear(::beetle_msgs::msg::TwistLite::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_TwistLite_angular(msg_);
  }

private:
  ::beetle_msgs::msg::TwistLite msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beetle_msgs::msg::TwistLite>()
{
  return beetle_msgs::msg::builder::Init_TwistLite_linear();
}

}  // namespace beetle_msgs

#endif  // BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__BUILDER_HPP_
