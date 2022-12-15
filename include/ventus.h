/**
 * @file ventus.h
 * @brief this file defined some ventus driver API when running OpenCL program
 * @author yangzexia
 * @version 1.0
 * @date 2022-11-16
 * 
 * @copyright Tsinghua DSPLAB
 * 
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2022-11-16 <td>1.0     <td>yangzexia     <td>main程序和驱动之间的接口
 * <tr><td>2022-12-15 <td>1.1     <td>yangzexia     <td>增加了执行所有kernel并返回id的接口
 * </table>
 */
#ifndef __VT_DRIVER_H__
#define __VT_DRIVER_H__

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <queue>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* vt_device_h;

typedef void* vt_buffer_h;

// device parameters
#define   HOST_REQ_WG_ID            
#define   HOST_REQ_NUM_WF
#define   HOST_REQ_WF_SIZE
#define   HOST_REQ_START_PC
#define   HOST_REQ_VGPR_SIZE_TOTAL
#define   HOST_REQ_SGPR_SIZE_TOTAL
#define   HOST_REQ_LDS_SIZE_TOTAL
#define   HOST_REQ_GDS_SIZE_TOTAL
#define   HOST_REQ_VGPR_SIZE_PER_WF
#define   HOST_REQ_SGPR_SIZE_PER_WF
#define   HOST_REQ_GDS_BASEADDR

#define MAX_TIMEOUT               (60*60*1000)   // 1hr 

/// NEED TO DEFINE
/// open the device and connect to it
int vt_dev_open(vt_device_h* hdevice);

/// NEED TO DEFINE
/// Close the device when all the operations are done
int vt_dev_close(vt_device_h hdevice);

/// return device configurations
int vt_dev_caps(vt_device_h* hdevice, uint32_t caps_id, uint64_t *value);

/// NEED TO DEFINE
/// Allocate shared buffer with device
int vt_buf_alloc(vt_device_h hdevice, uint64_t size, vt_buffer_h* hbuffer);

/// NEED TO DEFINE
/// release buffer
int vt_buf_free(vt_buffer_h hbuffer);

/// NEED TO DEFINE
/// Get host pointer address  
void* vt_host_ptr(vt_buffer_h hbuffer);

/// NEED TO DEFINE
/// allocate device memory and return address
int vt_mem_alloc(vt_device_h hdevice, uint64_t size, uint64_t* dev_vaddr, int taskID);

/// NEED TO DEFINE
/// release device memory
int vt_mem_free(vt_device_h hdevice, uint64_t dev_vaddr, int taskID);

/// NEED TO DEFINE
/// Copy bytes from buffer to device local memory
int vt_copy_to_dev(vt_buffer_h hbuffer, uint64_t dev_vaddr, uint64_t size, int taskID);

/// NEED TO DEFINE
/// Copy bytes from device local memory to buffer
int vt_copy_from_dev(vt_buffer_h hbuffer, uint64_t dev_vaddr, uint64_t size, int taskID);

/// NEED TO DEFINE
/// Start device execution
int vt_start(vt_device_h hdevice);

/// NEED TO DEFINE
/// Wait for device ready with milliseconds timeout
int vt_ready_wait(vt_device_h hdevice, uint64_t timeout);

/// NEED TO DEFINE
/// Excute all kernels and return kernel_id
int vt_finish_all_kernel(vt_device_h hdevice, std::queue<int> *finished_list);

////////////////////////////// UTILITY FUNCIONS ///////////////////////////////
/// NEED TO DEFINE
/// upload kernel bytes to device
int vt_upload_kernel_bytes(vt_device_h device, const void* content, uint64_t size, int taskID);

/// NEED TO DEFINE
/// upload kernel file to device
int vt_upload_kernel_file(vt_device_h device, const char* filename, int taskID);

/// dump performance counters
int vt_dump_perf(vt_device_h device, FILE* stream);

//////////////////////////// DEPRECATED FUNCTIONS /////////////////////////////
/// DEPRECATED FUNCTIONS
int vt_alloc_dev_mem(vt_device_h hdevice, uint64_t size, uint64_t* dev_maddr);
int vt_alloc_shared_mem(vt_device_h hdevice, uint64_t size, vt_buffer_h* hbuffer);
int vt_buf_release(vt_buffer_h hbuffer);

#ifdef __cplusplus
}
#endif

#endif // __VT_DRIVER_H__
