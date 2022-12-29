cmake_minimum_required(VERSION 3.23)
set(PROJECT rtldriver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/common)
include_directories(${CMAKE_SOURCE_DIR}/sim)
include_directories(${CMAKE_SOURCE_DIR}/sim/common)

set(CMAKE_CXX_FLAGS -fPIC)

file(GLOB_RECURSE SRCS ./*)

link_directories(${CMAKE_BINARY_DIR}/sim/obj_dir)

add_library(${PROJECT}_static STATIC ${SRCS})
add_dependencies(${PROJECT}_static rtlsim)

target_link_libraries(${PROJECT}_static PUBLIC librtlsim.a)

set_target_properties(${PROJECT}_static PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

add_library(${PROJECT} SHARED ${SRCS})
add_dependencies(${PROJECT} rtlsim)
target_link_libraries(${PROJECT} PUBLIC librtlsim.a)
set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

