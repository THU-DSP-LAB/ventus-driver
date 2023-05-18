set(PROJECT rtldriver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/common)
include_directories(${CMAKE_SOURCE_DIR}/devices/verilating_device)
include_directories(${CMAKE_SOURCE_DIR}/devices/verilating_device/page_table)

#set(CMAKE_POSITION_INDEPENDENT_CODE True)

file(GLOB_RECURSE SRCS "./*.cpp" "./*.h")


link_directories(${CMAKE_BINARY_DIR}/devices/verilating_device)

add_library(${PROJECT} SHARED ${SRCS})
add_dependencies(${PROJECT} rtlsim)

target_link_libraries(${PROJECT} PUBLIC rtlsim)


set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

if(ENABLE_INSTALL)
    install(TARGETS ${PROJECT} LIBRARY DESTINATION ${DRIVER_LIB_INSTALL_DIR} COMPONENT "lib")
endif()