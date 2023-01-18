cmake_minimum_required(VERSION 3.15)

project(cmake-exe-test)

set(CMAKE_CXX_STANDARD 11)

set(TARGET1 hello)
set(TARGET2 test_mmu)
set(TARGET3 test_all)
set(TARGET4 test_processor)

add_executable(${TARGET1} hello.cpp)

add_dependencies(${TARGET1} rtldriver)
target_link_directories(${TARGET1} PUBLIC ${CMAKE_BINARY_DIR}/veridriver)
target_link_libraries(${TARGET1} librtldriver.so)


add_executable(${TARGET2} test_mmu.cpp)

add_dependencies(${TARGET2} rtldriver)
target_link_directories(${TARGET2} PUBLIC ${CMAKE_BINARY_DIR}/veridriver)
target_link_libraries(${TARGET2} librtldriver.so)

add_executable(${TARGET3} main.cpp)

add_dependencies(${TARGET3} rtldriver)
target_link_directories(${TARGET3} PUBLIC ${CMAKE_BINARY_DIR}/veridriver)
target_link_libraries(${TARGET3} librtldriver.so)

file(GLOB_RECURSE SRCS "${CMAKE_SOURCE_DIR}/veridriver/*" "main.cpp" "${CMAKE_SOURCE_DIR}/sim/*.cpp" "${CMAKE_SOURCE_DIR}/common/*.cpp")
add_executable(${TARGET4} ${SRCS})

target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/common)
target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/sim)
target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/sim/common)

set(CMAKE_CXX_FLAGS -fPIC)

file(GLOB_RECURSE SRCS "${CMAKE_SOURCE_DIR}/veridriver/*")

#link_directories(${CMAKE_BINARY_DIR}/sim/obj_dir)

target_link_directories(${TARGET4} PUBLIC ${CMAKE_BINARY_DIR}/sim/obj_dir)
target_link_libraries(${TARGET4} librtlsim2.so)