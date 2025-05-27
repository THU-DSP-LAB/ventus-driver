set(PROJECT cyclesim_driver)
project(${PROJECT})

message("env CYCLESIM_DIR is: $ENV{CYCLESIM_DIR}")

include_directories(${CMAKE_SOURCE_DIR}/../../include)
include_directories(${CMAKE_SOURCE_DIR}/../../common)

file(GLOB_RECURSE SRCS ./ventus.cpp)

add_library(${PROJECT} SHARED ${SRCS})
target_link_directories(${PROJECT} PRIVATE $ENV{CYCLESIM_DIR}/build/)
target_link_libraries(${PROJECT} PRIVATE VentusCycleSim)
target_link_libraries(${PROJECT} PRIVATE driver_common_utils)
target_link_libraries(${PROJECT} PRIVATE spdlog)
target_link_libraries(${PROJECT} PRIVATE fmt)

set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

if(ENABLE_INSTALL)
    message(STATUS "DRIVER_LIB_INSTALL_DIR:" ${DRIVER_LIB_INSTALL_DIR})
    install(TARGETS ${PROJECT} LIBRARY DESTINATION ${DRIVER_LIB_INSTALL_DIR} COMPONENT "lib")
endif()
