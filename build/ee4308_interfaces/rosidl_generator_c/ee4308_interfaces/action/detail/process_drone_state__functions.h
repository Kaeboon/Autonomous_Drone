// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ee4308_interfaces:action/ProcessDroneState.idl
// generated code does not contain a copyright notice

#ifndef EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__FUNCTIONS_H_
#define EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ee4308_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ee4308_interfaces/action/detail/process_drone_state__struct.h"

/// Initialize action/ProcessDroneState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ee4308_interfaces__action__ProcessDroneState_Goal
 * )) before or use
 * ee4308_interfaces__action__ProcessDroneState_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Goal__init(ee4308_interfaces__action__ProcessDroneState_Goal * msg);

/// Finalize action/ProcessDroneState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Goal__fini(ee4308_interfaces__action__ProcessDroneState_Goal * msg);

/// Create action/ProcessDroneState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ee4308_interfaces__action__ProcessDroneState_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_Goal *
ee4308_interfaces__action__ProcessDroneState_Goal__create();

/// Destroy action/ProcessDroneState message.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Goal__destroy(ee4308_interfaces__action__ProcessDroneState_Goal * msg);

/// Check for action/ProcessDroneState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Goal__are_equal(const ee4308_interfaces__action__ProcessDroneState_Goal * lhs, const ee4308_interfaces__action__ProcessDroneState_Goal * rhs);

/// Copy a action/ProcessDroneState message.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Goal__copy(
  const ee4308_interfaces__action__ProcessDroneState_Goal * input,
  ee4308_interfaces__action__ProcessDroneState_Goal * output);

/// Initialize array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ee4308_interfaces__action__ProcessDroneState_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__init(ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * array, size_t size);

/// Finalize array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * array);

/// Create array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the array and calls
 * ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence *
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__create(size_t size);

/// Destroy array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * array);

/// Check for action/ProcessDroneState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * rhs);

/// Copy an array of action/ProcessDroneState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * output);

/// Initialize action/ProcessDroneState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ee4308_interfaces__action__ProcessDroneState_Result
 * )) before or use
 * ee4308_interfaces__action__ProcessDroneState_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Result__init(ee4308_interfaces__action__ProcessDroneState_Result * msg);

/// Finalize action/ProcessDroneState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Result__fini(ee4308_interfaces__action__ProcessDroneState_Result * msg);

/// Create action/ProcessDroneState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ee4308_interfaces__action__ProcessDroneState_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_Result *
ee4308_interfaces__action__ProcessDroneState_Result__create();

/// Destroy action/ProcessDroneState message.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Result__destroy(ee4308_interfaces__action__ProcessDroneState_Result * msg);

/// Check for action/ProcessDroneState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Result__are_equal(const ee4308_interfaces__action__ProcessDroneState_Result * lhs, const ee4308_interfaces__action__ProcessDroneState_Result * rhs);

/// Copy a action/ProcessDroneState message.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Result__copy(
  const ee4308_interfaces__action__ProcessDroneState_Result * input,
  ee4308_interfaces__action__ProcessDroneState_Result * output);

/// Initialize array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ee4308_interfaces__action__ProcessDroneState_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__init(ee4308_interfaces__action__ProcessDroneState_Result__Sequence * array, size_t size);

/// Finalize array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_Result__Sequence * array);

/// Create array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the array and calls
 * ee4308_interfaces__action__ProcessDroneState_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_Result__Sequence *
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__create(size_t size);

/// Destroy array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_Result__Sequence * array);

/// Check for action/ProcessDroneState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_Result__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_Result__Sequence * rhs);

/// Copy an array of action/ProcessDroneState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_Result__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_Result__Sequence * output);

/// Initialize action/ProcessDroneState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ee4308_interfaces__action__ProcessDroneState_Feedback
 * )) before or use
 * ee4308_interfaces__action__ProcessDroneState_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Feedback__init(ee4308_interfaces__action__ProcessDroneState_Feedback * msg);

/// Finalize action/ProcessDroneState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Feedback__fini(ee4308_interfaces__action__ProcessDroneState_Feedback * msg);

/// Create action/ProcessDroneState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ee4308_interfaces__action__ProcessDroneState_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_Feedback *
ee4308_interfaces__action__ProcessDroneState_Feedback__create();

/// Destroy action/ProcessDroneState message.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Feedback__destroy(ee4308_interfaces__action__ProcessDroneState_Feedback * msg);

/// Check for action/ProcessDroneState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Feedback__are_equal(const ee4308_interfaces__action__ProcessDroneState_Feedback * lhs, const ee4308_interfaces__action__ProcessDroneState_Feedback * rhs);

/// Copy a action/ProcessDroneState message.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Feedback__copy(
  const ee4308_interfaces__action__ProcessDroneState_Feedback * input,
  ee4308_interfaces__action__ProcessDroneState_Feedback * output);

/// Initialize array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ee4308_interfaces__action__ProcessDroneState_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__init(ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * array);

/// Create array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the array and calls
 * ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence *
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * array);

/// Check for action/ProcessDroneState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * rhs);

/// Copy an array of action/ProcessDroneState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * output);

/// Initialize action/ProcessDroneState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Request
 * )) before or use
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__init(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * msg);

/// Finalize action/ProcessDroneState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * msg);

/// Create action/ProcessDroneState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request *
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__create();

/// Destroy action/ProcessDroneState message.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__destroy(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * msg);

/// Check for action/ProcessDroneState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__are_equal(const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * lhs, const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * rhs);

/// Copy a action/ProcessDroneState message.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__copy(
  const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * input,
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * output);

/// Initialize array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__init(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * array);

/// Create array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the array and calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence *
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * array);

/// Check for action/ProcessDroneState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ProcessDroneState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * output);

/// Initialize action/ProcessDroneState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Response
 * )) before or use
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__init(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * msg);

/// Finalize action/ProcessDroneState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * msg);

/// Create action/ProcessDroneState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response *
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__create();

/// Destroy action/ProcessDroneState message.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__destroy(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * msg);

/// Check for action/ProcessDroneState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__are_equal(const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * lhs, const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * rhs);

/// Copy a action/ProcessDroneState message.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__copy(
  const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * input,
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * output);

/// Initialize array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__init(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * array);

/// Create array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the array and calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence *
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * array);

/// Check for action/ProcessDroneState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ProcessDroneState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * output);

/// Initialize action/ProcessDroneState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Request
 * )) before or use
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__init(ee4308_interfaces__action__ProcessDroneState_GetResult_Request * msg);

/// Finalize action/ProcessDroneState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini(ee4308_interfaces__action__ProcessDroneState_GetResult_Request * msg);

/// Create action/ProcessDroneState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_GetResult_Request *
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__create();

/// Destroy action/ProcessDroneState message.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__destroy(ee4308_interfaces__action__ProcessDroneState_GetResult_Request * msg);

/// Check for action/ProcessDroneState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__are_equal(const ee4308_interfaces__action__ProcessDroneState_GetResult_Request * lhs, const ee4308_interfaces__action__ProcessDroneState_GetResult_Request * rhs);

/// Copy a action/ProcessDroneState message.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__copy(
  const ee4308_interfaces__action__ProcessDroneState_GetResult_Request * input,
  ee4308_interfaces__action__ProcessDroneState_GetResult_Request * output);

/// Initialize array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__init(ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * array);

/// Create array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the array and calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence *
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * array);

/// Check for action/ProcessDroneState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ProcessDroneState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * output);

/// Initialize action/ProcessDroneState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Response
 * )) before or use
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__init(ee4308_interfaces__action__ProcessDroneState_GetResult_Response * msg);

/// Finalize action/ProcessDroneState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini(ee4308_interfaces__action__ProcessDroneState_GetResult_Response * msg);

/// Create action/ProcessDroneState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_GetResult_Response *
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__create();

/// Destroy action/ProcessDroneState message.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__destroy(ee4308_interfaces__action__ProcessDroneState_GetResult_Response * msg);

/// Check for action/ProcessDroneState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__are_equal(const ee4308_interfaces__action__ProcessDroneState_GetResult_Response * lhs, const ee4308_interfaces__action__ProcessDroneState_GetResult_Response * rhs);

/// Copy a action/ProcessDroneState message.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__copy(
  const ee4308_interfaces__action__ProcessDroneState_GetResult_Response * input,
  ee4308_interfaces__action__ProcessDroneState_GetResult_Response * output);

/// Initialize array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__init(ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * array);

/// Create array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the array and calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence *
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * array);

/// Check for action/ProcessDroneState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ProcessDroneState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * output);

/// Initialize action/ProcessDroneState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ee4308_interfaces__action__ProcessDroneState_FeedbackMessage
 * )) before or use
 * ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__init(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * msg);

/// Finalize action/ProcessDroneState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * msg);

/// Create action/ProcessDroneState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage *
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__create();

/// Destroy action/ProcessDroneState message.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__destroy(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * msg);

/// Check for action/ProcessDroneState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__are_equal(const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * lhs, const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * rhs);

/// Copy a action/ProcessDroneState message.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__copy(
  const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * input,
  ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * output);

/// Initialize array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__init(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * array);

/// Create array of action/ProcessDroneState messages.
/**
 * It allocates the memory for the array and calls
 * ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence *
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ProcessDroneState messages.
/**
 * It calls
 * ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
void
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * array);

/// Check for action/ProcessDroneState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ProcessDroneState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ee4308_interfaces
bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EE4308_INTERFACES__ACTION__DETAIL__PROCESS_DRONE_STATE__FUNCTIONS_H_
