set(PROJECT driver_common_utils)
project(${PROJECT})

set(SRCS
    loadelf.cpp
    ventus_perf_recorder.cpp
)

add_library(${PROJECT} STATIC ${SRCS})

target_link_libraries(${PROJECT} PRIVATE elf)
target_link_libraries(${PROJECT} PRIVATE spdlog)
target_link_libraries(${PROJECT} PRIVATE fmt)
target_include_directories(${PROJECT} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(${PROJECT} PROPERTIES POSITION_INDEPENDENT_CODE ON)

# if(ENABLE_INSTALL)
#     message(STATUS "DRIVER_LIB_INSTALL_DIR:" ${DRIVER_LIB_INSTALL_DIR})
#     install(TARGETS ${PROJECT} LIBRARY DESTINATION ${DRIVER_LIB_INSTALL_DIR} COMPONENT "lib")
# endif()
