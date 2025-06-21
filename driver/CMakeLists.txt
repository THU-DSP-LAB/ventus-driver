option(DRIVER_ENABLE_CYCLESIM "Enable cyclesim device driver" OFF)
option(DRIVER_ENABLE_RTLSIM "Enable rtlsim device driver" OFF)
option(DRIVER_ENABLE_AUTOSELECT "Enable auto select device driver" OFF)

add_subdirectory(spike_device)

# If you enable these, it's assumed that backend libraries are already installed to ${VENTUS_INSTALL_PREFIX}/lib
if(DRIVER_ENABLE_CYCLESIM)
    add_subdirectory(cyclesim_device)
endif()
if(DRIVER_ENABLE_RTLSIM)
    add_subdirectory(rtlsim_device)
endif()
if(DRIVER_ENABLE_AUTOSELECT)
    add_subdirectory(auto_select)
endif()
