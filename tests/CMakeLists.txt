cmake_minimum_required(VERSION 3.15)

project(cmake-exe-test)

set(CMAKE_CXX_STANDARD 11)

set(TARGET1 hello)
set(TARGET2 test_mmu)
set(TARGET3 test_all)

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