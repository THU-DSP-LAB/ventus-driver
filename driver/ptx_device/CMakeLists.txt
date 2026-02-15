set(PROJECT ptx_driver)
project(${PROJECT})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../common)

file(GLOB_RECURSE SRCS ventus.cpp)

add_library(${PROJECT} SHARED ${SRCS})
target_compile_features(${PROJECT} PRIVATE cxx_std_20)

# CUDA Driver API comes from NVIDIA driver (libcuda.so). Headers typically come from CUDA toolkit.
find_package(CUDAToolkit REQUIRED)
target_include_directories(${PROJECT} PRIVATE ${CUDAToolkit_INCLUDE_DIRS})

find_library(CUDA_DRIVER_LIB cuda)
if(NOT CUDA_DRIVER_LIB)
    message(FATAL_ERROR "Could not find CUDA driver library (libcuda.so / -lcuda)")
endif()

target_link_libraries(${PROJECT} PRIVATE ${CUDA_DRIVER_LIB})

target_link_libraries(${PROJECT} PRIVATE driver_common_utils)

target_link_libraries(${PROJECT} PRIVATE spdlog)

target_link_libraries(${PROJECT} PRIVATE fmt)

set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(${PROJECT} PROPERTIES
    INSTALL_RPATH "$ORIGIN"
)

install(TARGETS ${PROJECT}
    LIBRARY DESTINATION lib COMPONENT "lib"
)
