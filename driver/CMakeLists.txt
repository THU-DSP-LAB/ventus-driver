if(ENABLE_VERILATOR)
    add_subdirectory(verilating_device)
endif()

add_subdirectory(spike_device)

if(DEFINED ENV{CYCLESIM_DIR})
    add_subdirectory(cyclesim_device)
else()
    message(WARNING "env CYCLESIM_DIR is not defined, skipping building driver of cyclesim_device")
endif()

if(DEFINED ENV{RTLSIM_DIR})
    add_subdirectory(rtlsim_device)
else()
    message(WARNING "env RTLSIM_DIR is not defined, skipping building driver of rtlsim_device")
endif()
