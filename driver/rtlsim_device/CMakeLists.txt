set(PROJECT rtlsim_driver)
project(${PROJECT})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../common)
include_directories(${VENTUS_INSTALL_PREFIX}/include)

file(GLOB_RECURSE SRCS ./ventus.cpp)

add_library(${PROJECT} SHARED ${SRCS})
target_link_directories(${PROJECT} PRIVATE ${VENTUS_INSTALL_PREFIX}/lib)
target_link_libraries(${PROJECT} PRIVATE VentusRTL)
target_link_libraries(${PROJECT} PRIVATE driver_common_utils)
target_link_libraries(${PROJECT} PRIVATE spdlog)
target_link_libraries(${PROJECT} PRIVATE fmt)

set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(${PROJECT} PROPERTIES
    BUILD_RPATH "${VENTUS_INSTALL_PREFIX}/lib"
    INSTALL_RPATH "$ORIGIN"
)

install(TARGETS ${PROJECT}
    LIBRARY DESTINATION lib COMPONENT "lib"
)
