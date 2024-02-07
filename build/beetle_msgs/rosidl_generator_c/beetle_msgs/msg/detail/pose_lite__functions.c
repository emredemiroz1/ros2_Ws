// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beetle_msgs:msg/PoseLite.idl
// generated code does not contain a copyright notice
#include "beetle_msgs/msg/detail/pose_lite__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
beetle_msgs__msg__PoseLite__init(beetle_msgs__msg__PoseLite * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
beetle_msgs__msg__PoseLite__fini(beetle_msgs__msg__PoseLite * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
beetle_msgs__msg__PoseLite__are_equal(const beetle_msgs__msg__PoseLite * lhs, const beetle_msgs__msg__PoseLite * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
beetle_msgs__msg__PoseLite__copy(
  const beetle_msgs__msg__PoseLite * input,
  beetle_msgs__msg__PoseLite * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

beetle_msgs__msg__PoseLite *
beetle_msgs__msg__PoseLite__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__PoseLite * msg = (beetle_msgs__msg__PoseLite *)allocator.allocate(sizeof(beetle_msgs__msg__PoseLite), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beetle_msgs__msg__PoseLite));
  bool success = beetle_msgs__msg__PoseLite__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beetle_msgs__msg__PoseLite__destroy(beetle_msgs__msg__PoseLite * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beetle_msgs__msg__PoseLite__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beetle_msgs__msg__PoseLite__Sequence__init(beetle_msgs__msg__PoseLite__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__PoseLite * data = NULL;

  if (size) {
    data = (beetle_msgs__msg__PoseLite *)allocator.zero_allocate(size, sizeof(beetle_msgs__msg__PoseLite), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beetle_msgs__msg__PoseLite__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beetle_msgs__msg__PoseLite__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
beetle_msgs__msg__PoseLite__Sequence__fini(beetle_msgs__msg__PoseLite__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beetle_msgs__msg__PoseLite__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

beetle_msgs__msg__PoseLite__Sequence *
beetle_msgs__msg__PoseLite__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__PoseLite__Sequence * array = (beetle_msgs__msg__PoseLite__Sequence *)allocator.allocate(sizeof(beetle_msgs__msg__PoseLite__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beetle_msgs__msg__PoseLite__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beetle_msgs__msg__PoseLite__Sequence__destroy(beetle_msgs__msg__PoseLite__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beetle_msgs__msg__PoseLite__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beetle_msgs__msg__PoseLite__Sequence__are_equal(const beetle_msgs__msg__PoseLite__Sequence * lhs, const beetle_msgs__msg__PoseLite__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beetle_msgs__msg__PoseLite__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beetle_msgs__msg__PoseLite__Sequence__copy(
  const beetle_msgs__msg__PoseLite__Sequence * input,
  beetle_msgs__msg__PoseLite__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beetle_msgs__msg__PoseLite);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beetle_msgs__msg__PoseLite * data =
      (beetle_msgs__msg__PoseLite *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beetle_msgs__msg__PoseLite__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beetle_msgs__msg__PoseLite__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beetle_msgs__msg__PoseLite__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
