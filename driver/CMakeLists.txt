if(ENABLE_VERILATOR)
    add_subdirectory(verilating_device)
endif()

add_subdirectory(spike_device)

#if(ENABLE_FGPA)
    add_subdirectory(fpga)
#endif()