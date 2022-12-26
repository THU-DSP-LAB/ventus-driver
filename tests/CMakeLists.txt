cmake_minimum_required(VERSION 3.15)

project(cmake-exe-test)

execute_process(COMMAND python -c "import multiprocessing as mp; print(mp.cpu_count())"
                OUTPUT_VARIABLE ls_ret)

message(STATUS "ls output:\n${ls_ret}")


# add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/tmp-pcode-matlab/knitromatlab_fsolve.p 
#                     ${CMAKE_BINARY_DIR}/tmp-pcode-matlab/knitromatlab_lsqnonlin.p 
#                     ${CMAKE_BINARY_DIR}/tmp-pcode-matlab/knitromatlab_mip.p 
#                     COMMAND ${Matlab_MAIN_PROGRAM} -nodisplay -nodesktop -nosplash -r \"run('${CMAKE_BINARY_DIR}/generate_pcode.m')\;\" 
#                     WORKING_DIRECTORY ${CMAKE_BINARY_DIR} 
#                     COMMENT "Generating PCode") 

# add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/tmp-pcode-matlab/knitromatlab_fsolve.p 
#                     ${CMAKE_BINARY_DIR}/tmp-pcode-matlab/knitromatlab_lsqnonlin.p 
#                     ${CMAKE_BINARY_DIR}/tmp-pcode-matlab/knitromatlab_mip.p 
#                     COMMAND ${Matlab_MAIN_PROGRAM} -nodisplay -nodesktop -nosplash -r "run('${CMAKE_BINARY_DIR}/generate_pcode.m');" 
#                     VERBATIM 
                    
#                     WORKING_DIRECTORY ${CMAKE_BINARY_DIR} 
#                     COMMENT "Generating PCode") 