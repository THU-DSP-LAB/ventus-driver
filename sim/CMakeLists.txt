cmake_minimum_required(VERSION 3.22)
set(PROJECT rtllib)
PROJECT(${PROJECT})

set(CMAKE_CXX_STANDARD 11)

set(TOP MMUtest)
set(RTL_SRC ${CMAKE_SOURCE_DIR}/../../rtl)
set(RTL_SRC ${RTL_SRC} /../test)


include_directories(${CMAKE_SOURCE_DIR}/../common)
include_directories(${CMAKE_SOURCE_DIR}/../../include)
include_directories(${CMAKE_SOURCE_DIR}/../../common)

add_custom_target()