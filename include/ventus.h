/**
 * @file ventus.h
 * @brief this file defined some ventus driver functions when running OpenCL program
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
 * </table>
 */
#ifndef __VT_DRIVER_H__
#define __VT_DRIVER_H__

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* vt_device_h;

typedef void* vt_buffer_h;

// device caps ids
#define VT_CAPS_VERSION           0x0 
#define VT_CAPS_MAX_CORES         0x1
#define VT_CAPS_MAX_WARPS         0x2
#define VT_CAPS_MAX_THREADS       0x3
#define VT_CAPS_CACHE_LINE_SIZE   0x4
#define VT_CAPS_LOCAL_MEM_SIZE    0x5
#define VT_CAPS_ALLOC_BASE_ADDR   0x6
#define VT_CAPS_KERNEL_BASE_ADDR  0x7

#define MAX_TIMEOUT               (60*60*1000)   // 1hr 

/// open the device and connect to it
int vt_dev_open(vt_device_h* hdevice);

/// Close the device when all the operations are done
int vt_dev_close(vt_device_h hdevice);

/// return device configurations
int vt_dev_caps(vt_device_h hdevice, uint32_t caps_id, uint64_t *value);

/// Allocate shared buffer with device
int vt_buf_alloc(vt_device_h hdevice, uint64_t size, vt_buffer_h* hbuffer);

/// release buffer
int vt_buf_free(vt_buffer_h hbuffer);

/// Get host pointer address  
void* vt_host_ptr(vt_buffer_h hbuffer);

/// allocate device memory and return address
int vt_mem_alloc(vt_device_h hdevice, uint64_t size, uint64_t* dev_maddr);

/// release device memory
int vt_mem_free(vt_device_h hdevice, uint64_t dev_maddr);

/// Copy bytes from buffer to device local memory
int vt_copy_to_dev(vt_buffer_h hbuffer, uint64_t dev_maddr, uint64_t size, uint64_t src_offset);

/// Copy bytes from device local memory to buffer
int vt_copy_from_dev(vt_buffer_h hbuffer, uint64_t dev_maddr, uint64_t size, uint64_t dst_offset);

/// Start device execution
int vt_start(vt_device_h hdevice);

/// Wait for device ready with milliseconds timeout
int vt_ready_wait(vt_device_h hdevice, uint64_t timeout);

////////////////////////////// UTILITY FUNCIONS ///////////////////////////////

/// upload kernel bytes to device
int vt_upload_kernel_bytes(vt_device_h device, const void* content, uint64_t size);

/// upload kernel file to device
int vt_upload_kernel_file(vt_device_h device, const char* filename);

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
