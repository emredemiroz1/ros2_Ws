// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beetle_msgs:msg/OdometryLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__STRUCT_HPP_
#define BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "beetle_msgs/msg/detail/pose_lite__struct.hpp"
// Member 'twist'
#include "beetle_msgs/msg/detail/twist_lite__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__beetle_msgs__msg__OdometryLite __attribute__((deprecated))
#else
# define DEPRECATED__beetle_msgs__msg__OdometryLite __declspec(deprecated)
#endif

namespace beetle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OdometryLite_
{
  using Type = OdometryLite_<ContainerAllocator>;

  explicit OdometryLite_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    twist(_init)
  {
    (void)_init;
  }

  explicit OdometryLite_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    twist(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    beetle_msgs::msg::PoseLite_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    beetle_msgs::msg::TwistLite_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__pose(
    const beetle_msgs::msg::PoseLite_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const beetle_msgs::msg::TwistLite_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beetle_msgs::msg::OdometryLite_<ContainerAllocator> *;
  using ConstRawPtr =
    const beetle_msgs::msg::OdometryLite_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beetle_msgs::msg::OdometryLite_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beetle_msgs::msg::OdometryLite_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beetle_msgs::msg::OdometryLite_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beetle_msgs::msg::OdometryLite_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beetle_msgs::msg::OdometryLite_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beetle_msgs::msg::OdometryLite_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beetle_msgs::msg::OdometryLite_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beetle_msgs::msg::OdometryLite_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beetle_msgs__msg__OdometryLite
    std::shared_ptr<beetle_msgs::msg::OdometryLite_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beetle_msgs__msg__OdometryLite
    std::shared_ptr<beetle_msgs::msg::OdometryLite_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OdometryLite_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const OdometryLite_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OdometryLite_

// alias to use template instance with default allocator
using OdometryLite =
  beetle_msgs::msg::OdometryLite_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace beetle_msgs

#endif  // BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__STRUCT_HPP_
