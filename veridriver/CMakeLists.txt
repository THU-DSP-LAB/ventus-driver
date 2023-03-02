cmake_minimum_required(VERSION 3.23)
set(PROJECT rtldriver)
project(${PROJECT})
set(STATIC_LIB ${PROJECT})
set(SHARED_LIB ${PROJECT}_shared)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/common)
include_directories(${CMAKE_SOURCE_DIR}/sim)
include_directories(${CMAKE_SOURCE_DIR}/sim/page_table)

#set(CMAKE_CXX_FLAGS -fPIC)

file(GLOB_RECURSE SRCS ./*)

link_directories(${CMAKE_BINARY_DIR}/sim/)

add_library(${STATIC_LIB} STATIC ${SRCS})
add_dependencies(${STATIC_LIB} rtlsim)

target_link_libraries(${STATIC_LIB} PUBLIC rtlsim)

set_target_properties(${STATIC_LIB} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${STATIC_LIB} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#add_library(${PROJECT} SHARED ${SRCS})
#add_dependencies(${PROJECT} rtlsim)
#target_link_libraries(${PROJECT} PUBLIC rtlsim)
#set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
#set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

