cmake_minimum_required(VERSION 3.22)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(PROJECT ventus_driver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

add_subdirectory(driver)
add_subdirectory(common)
add_subdirectory(codetests)

set(DRIVER_PUBLIC_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ventus.h
    ${CMAKE_CURRENT_SOURCE_DIR}/common/vt_utils.h
)
install(FILES ${DRIVER_PUBLIC_HEADERS}
    DESTINATION include COMPONENT "include"
)
