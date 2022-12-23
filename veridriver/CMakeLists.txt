cmake_minimum_required(VERSION 3.23)
set(PROJECT veridriver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_SOURCE_DIR}/../include)

file(GLOB_RECURSE RTL_SRCS ${CMAKE_SOURCE_DIR}/obj_dir/*)

file(GLOB_RECURSE SIM_LIB_SRCS ${CMAKE_SOURCE_DIR}/sim/*[cpp|h])
file(GLOB_RECURSE VERILATOR_SRCS ${CMAKE_SOURCE_DIR}/verilator/*[cpp|h])
file(GLOB_RECURSE COMMON_SRCS ${CMAKE_SOURCE_DIR}/common/*[cpp|h])
# aux_source_directory()
message("${SIM_LIB_SRCS}")

add_library(${PROJECT} SHARED ${SIM_LIB_SRCS} ${VERILATOR_SRCS} ${COMMON_SRCS} ${RTL_SRCS})

install(TARGETS ${PROJECT} LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/lib)