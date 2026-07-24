set(PROJECT rtlsim_driver)
project(${PROJECT})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../common)
include_directories(${VENTUS_INSTALL_PREFIX}/include)

find_package(nlohmann_json CONFIG REQUIRED)
find_package(OpenSSL REQUIRED)

file(GLOB_RECURSE SRCS ./*.cpp)

add_library(${PROJECT} SHARED ${SRCS})
target_link_libraries(${PROJECT} PRIVATE driver_common_utils)
target_link_libraries(${PROJECT} PRIVATE spdlog)
target_link_libraries(${PROJECT} PRIVATE fmt)
target_link_libraries(${PROJECT} PRIVATE SV)
target_link_libraries(${PROJECT} PRIVATE dl)
target_link_libraries(${PROJECT} PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(${PROJECT} PRIVATE OpenSSL::Crypto)
target_compile_definitions(${PROJECT} PRIVATE -DSPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE)

set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(${PROJECT} PROPERTIES
    BUILD_RPATH "${VENTUS_INSTALL_PREFIX}/lib"
    INSTALL_RPATH "$ORIGIN"
)

install(TARGETS ${PROJECT}
    LIBRARY DESTINATION lib COMPONENT "lib"
)
