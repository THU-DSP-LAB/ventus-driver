cmake_minimum_required(VERSION 3.20)
set(PROJECT ventus_driver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS -Wl,--whole-archive -Wl,--no-whole-archive)

include_directories(common)
include_directories(include)
include_directories(sim)
include_directories(sim/common)
include_directories(tests)
include_directories(veridriver)


add_subdirectory(sim)
# find_library(librtlsim.a ${CMAKE_BINARY_DIR}/sim/obj_dir)

# if(PACKAGES_NAME MATCHES "-NOTFOUND")
#         message(FATAL_ERROR "${PACKAGE_NAME} not found!")
# else()
#         message(STATUS "${PACKAGE_NAME} found!")
        add_subdirectory(veridriver)
# endif()


add_executable(${PROJECT} tests/test_mmu.cpp)
# link_directories(${CMAKE_BINARY_DIR}/sim)
target_link_directories(${PROJECT} PUBLIC ${CMAKE_BINARY_DIR}/veridriver)
target_link_libraries(${PROJECT} librtldriver.so)

add_subdirectory(tests)