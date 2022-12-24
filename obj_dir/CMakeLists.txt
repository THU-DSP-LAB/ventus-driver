cmake_minimum_required(VERSION 3.23)
project(add_verilator_library)
#
#set(CMAKE_CXX_STANDARD 11)
#
#aux_source_directory(. SRCS)
#
#add_library(rtl SHARED VMMUtest.cpp)
#
set(TOP_MODULE VMMUtest)
add_custom_target(default ALL
    COMMAND make -C ${CMAKE_SOURCE_DIR} -f ${TOP_MODULE}.mk
    COMMAND mv ${CMAKE_SOURCE_DIR}/${TOP_MODULE}__ALL* ${CMAKE_BINARY_DIR})

message(${CMAKE_SOURCE_DIR})
message(${CMAKE_BINARY_DIR})
message(${CMAKE_SOURCE_DIR}/${TOP_MODULE}.[oad])