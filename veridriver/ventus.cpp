/**
 * @file ventus.cpp
 * @brief 设备和OpenCL程序的交互功能的实现
 * 
 * 1. `/include/ventu.h`中声明的函数
 * 2. `vt_device`类，表示GPGPU设备，成员变量包括设备类（不包含ram），设备ram类
 * 3. `vt_buffer`类，主机和设备之间交换数据的缓冲，成员变量包括`vt_device`，数据，缓冲区大小

 * @author yangzexia (yang-zx17@qq.com)
 * @version 1.0
 * @date 2022-11-16
 * 
 * @copyright Copyright (c) 2022  yangzexia@THU-DSPLAB
 * 
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2022-11-16 <td>1.0     <td>yangzexia     <td>创建
 * </table>
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include <future>
#include <list>
#include <chrono>
// driver/common
#include <ventus.h>

#include <vt_device.h>

///@todo MMU，内存分配
// #include <vt_malloc.h> 
#include <vt_utils.h>

//#include <VX_config.h>
// sim/common
#include <vt_memory.h>
// #include <util.h>
#include <processor.h>

#define RAM_PAGE_SIZE 4096



/// open the device and connect to it
extern int vt_dev_open(vt_device_h* hdevice){
    if(hdevice == nullptr)
        return -1;
    
    *hdevice = new vt_device();
    return 0;
}
/// Close the device when all the operations are done
extern int vt_dev_close(vt_device_h hdevice){
    if(hdevice == nullptr);
        return -1;
    vt_device* device = (vt_device*) hdevice;
    delete device;

    return 0;
}
extern int vt_dev_caps(vt_device_h* hdevice, host_port_t* input_sig){
    // if(hdevice == nullptr)
    //     return -1;
    // vt_device* device = (vt_device*) hdevice;

    return -1;
}
extern int vt_buf_alloc(vt_device_h hdevice, uint64_t size, vt_buffer_h* hbuffer) {
    if(hbuffer == nullptr || size <= 0 || hdevice == nullptr) 
        return -1;
    vt_device *device = ((vt_device*) hdevice);

    auto buffer = new vt_buffer(size, device);
    if(buffer->data() == nullptr) {
        delete buffer;
        return -1;
    }
    *hbuffer = buffer;
    return 0;
}
extern int vt_buf_free(vt_buffer_h hbuffer) {
    if(hbuffer == nullptr)
        return -1;
    vt_buffer *buffer = ((vt_buffer*)hbuffer);
    delete buffer;
    return 0;
}
extern void* vt_host_ptr(vt_buffer_h hbuffer) {
    if (nullptr == hbuffer)
        return nullptr;

    vt_buffer* buffer = ((vt_buffer*)hbuffer);

    return buffer->data();
}
/**
 * @brief  为设备分配内存，返回根页表的地址
 * @param  hdevice           
 * @param  size              
 * @param  dev_maddr         
 * @return int 
 */
extern int vt_mem_alloc(vt_device_h hdevice, uint64_t size, uint64_t* dev_maddr) {
    
}