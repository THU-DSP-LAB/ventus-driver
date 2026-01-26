option(DRIVER_ENABLE_CYCLESIM "Enable cyclesim device driver" OFF)
option(DRIVER_ENABLE_RTLSIM "Enable rtlsim device driver" OFF)
option(DRIVER_ENABLE_GVM "Enable gvm device driver" OFF)
option(DRIVER_ENABLE_PTX "Enable ptx device driver" OFF)
option(DRIVER_ENABLE_AUTOSELECT "Enable auto select device driver" OFF)

add_subdirectory(spike_device)
set(DRIVER_DEFAULT "spike_driver")

# If you enable these, it's assumed that backend libraries are already installed to ${VENTUS_INSTALL_PREFIX}/lib
if(DRIVER_ENABLE_CYCLESIM)
    add_subdirectory(cyclesim_device)
endif()
if(DRIVER_ENABLE_RTLSIM)
    add_subdirectory(rtlsim_device)
endif()
if(DRIVER_ENABLE_GVM)
    add_subdirectory(gvm_device)
endif()
if(DRIVER_ENABLE_PTX)
    add_subdirectory(ptx_device)
endif()
if(DRIVER_ENABLE_AUTOSELECT)
    add_subdirectory(auto_select)
    set(DRIVER_DEFAULT "auto_select_driver")
endif()


install(CODE "
    file(CREATE_LINK
        lib${DRIVER_DEFAULT}.so
        ${CMAKE_INSTALL_PREFIX}/lib/libventus_driver.so
        SYMBOLIC
    )
")
