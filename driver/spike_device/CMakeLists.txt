cmake_minimum_required(VERSION 3.22)
set(PROJECT spike_driver)
project(${PROJECT})


message("val of env is:$ENV{SPIKE_SRC_DIR}/spike_main")
set(CMAKE_CXX_FLAGS -lstdc++)

include_directories(${CMAKE_SOURCE_DIR}/../../include)
include_directories(${CMAKE_SOURCE_DIR}/../../common)
include_directories($ENV{SPIKE_SRC_DIR})
include_directories($ENV{SPIKE_SRC_DIR}/spike_main)
include_directories($ENV{SPIKE_SRC_DIR}/riscv)
include_directories($ENV{SPIKE_SRC_DIR}/build)
include_directories($ENV{SPIKE_SRC_DIR}/softfloat)
include_directories($ENV{SPIKE_SRC_DIR}/fesvr)

#set(CMAKE_POSITION_INDEPENDENT_CODE True)

file(GLOB_RECURSE SRCS ./ventus.cpp)


#message($ENV{SPIKE_TARGET_DIR})

add_library(${PROJECT} SHARED ${SRCS})
target_link_directories(${PROJECT} PUBLIC $ENV{SPIKE_TARGET_DIR})
target_link_libraries(${PROJECT} PUBLIC spike_main)

set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

if(ENABLE_INSTALL)
    install(TARGETS ${PROJECT} LIBRARY DESTINATION ${DRIVER_LIB_INSTALL_DIR} COMPONENT "lib")
    endif()