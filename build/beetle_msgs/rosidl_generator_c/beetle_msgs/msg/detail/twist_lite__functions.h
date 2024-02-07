// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from beetle_msgs:msg/TwistLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__FUNCTIONS_H_
#define BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "beetle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "beetle_msgs/msg/detail/twist_lite__struct.h"

/// Initialize msg/TwistLite message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beetle_msgs__msg__TwistLite
 * )) before or use
 * beetle_msgs__msg__TwistLite__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
bool
beetle_msgs__msg__TwistLite__init(beetle_msgs__msg__TwistLite * msg);

/// Finalize msg/TwistLite message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
void
beetle_msgs__msg__TwistLite__fini(beetle_msgs__msg__TwistLite * msg);

/// Create msg/TwistLite message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beetle_msgs__msg__TwistLite__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
beetle_msgs__msg__TwistLite *
beetle_msgs__msg__TwistLite__create();

/// Destroy msg/TwistLite message.
/**
 * It calls
 * beetle_msgs__msg__TwistLite__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
void
beetle_msgs__msg__TwistLite__destroy(beetle_msgs__msg__TwistLite * msg);

/// Check for msg/TwistLite message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
bool
beetle_msgs__msg__TwistLite__are_equal(const beetle_msgs__msg__TwistLite * lhs, const beetle_msgs__msg__TwistLite * rhs);

/// Copy a msg/TwistLite message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
bool
beetle_msgs__msg__TwistLite__copy(
  const beetle_msgs__msg__TwistLite * input,
  beetle_msgs__msg__TwistLite * output);

/// Initialize array of msg/TwistLite messages.
/**
 * It allocates the memory for the number of elements and calls
 * beetle_msgs__msg__TwistLite__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
bool
beetle_msgs__msg__TwistLite__Sequence__init(beetle_msgs__msg__TwistLite__Sequence * array, size_t size);

/// Finalize array of msg/TwistLite messages.
/**
 * It calls
 * beetle_msgs__msg__TwistLite__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
void
beetle_msgs__msg__TwistLite__Sequence__fini(beetle_msgs__msg__TwistLite__Sequence * array);

/// Create array of msg/TwistLite messages.
/**
 * It allocates the memory for the array and calls
 * beetle_msgs__msg__TwistLite__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
beetle_msgs__msg__TwistLite__Sequence *
beetle_msgs__msg__TwistLite__Sequence__create(size_t size);

/// Destroy array of msg/TwistLite messages.
/**
 * It calls
 * beetle_msgs__msg__TwistLite__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
void
beetle_msgs__msg__TwistLite__Sequence__destroy(beetle_msgs__msg__TwistLite__Sequence * array);

/// Check for msg/TwistLite message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
bool
beetle_msgs__msg__TwistLite__Sequence__are_equal(const beetle_msgs__msg__TwistLite__Sequence * lhs, const beetle_msgs__msg__TwistLite__Sequence * rhs);

/// Copy an array of msg/TwistLite messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beetle_msgs
bool
beetle_msgs__msg__TwistLite__Sequence__copy(
  const beetle_msgs__msg__TwistLite__Sequence * input,
  beetle_msgs__msg__TwistLite__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__FUNCTIONS_H_
