# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_map_odom_static_broadcaster_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED map_odom_static_broadcaster_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(map_odom_static_broadcaster_FOUND FALSE)
  elseif(NOT map_odom_static_broadcaster_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(map_odom_static_broadcaster_FOUND FALSE)
  endif()
  return()
endif()
set(_map_odom_static_broadcaster_CONFIG_INCLUDED TRUE)

# output package information
if(NOT map_odom_static_broadcaster_FIND_QUIETLY)
  message(STATUS "Found map_odom_static_broadcaster: 0.0.0 (${map_odom_static_broadcaster_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'map_odom_static_broadcaster' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${map_odom_static_broadcaster_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(map_odom_static_broadcaster_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${map_odom_static_broadcaster_DIR}/${_extra}")
endforeach()