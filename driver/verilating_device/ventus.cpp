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
#include <cstring>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <future>
#include <list>
#include <chrono>
// driver/page_table
#include "ventus.h"

#include "vt_device.h"

///@todo MMU，内存分配
// #include <vt_malloc.h> 
#include "vt_utils.h"

//#include <VT_config.h>
// devices/page_table
#include "verilating_device/page_table/vt_memory.h"
#include "verilating_device/page_table/MemConfig.h"
// #include <util.h>
#include "processor.h"

#define RAM_PAGE_SIZE 4096

using namespace ventus;


/// open the device and connect to it
extern int vt_dev_open(vt_device_h* hdevice){
    if(hdevice == nullptr)
        return -1;
    PCOUT_INFO << "vt_dev_open : hello world from ventus.cpp" << endl;
    *hdevice = new vt_device();
    return 0;
}
/// Close the device when all the operations are done
extern int vt_dev_close(vt_device_h hdevice){
    if(hdevice == nullptr)
        return -1;
    auto* device = (vt_device*) hdevice;
    delete device;
    return 0;
}
extern int vt_dev_caps(vt_device_h* hdevice, host_port_t* input_sig){
    // if(hdevice == nullptr)
    //     return -1;
    // vt_device* device = (vt_device*) hdevice;

    return -1;
}
extern int vt_buf_alloc(vt_device_h hdevice, uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0 || hdevice == nullptr)
        return -1;
    auto device = ((vt_device*) hdevice);
    return device->alloc_local_mem( size, vaddr, BUF_TYPE, taskID, kernelID);

}
extern int vt_buf_free(vt_buffer_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0 || hdevice == nullptr)
        return -1;
    auto device = ((vt_device*) hdevice);
    return device->free_local_mem( size, vaddr, taskID, kernelID);

}

/**
 * @brief  为设备分配内存，返回根页表的地址
 * @param  hdevice           
 * @param  size              
 * @param  dev_vaddr    申请物理地址时的虚拟地址         
 * @return int 
 */
extern int vt_root_mem_alloc(vt_device_h hdevice, int taskID) {
    if( hdevice == nullptr)
        return -1;
    vt_device* device = (vt_device*) hdevice;
    return device->create_device_mem(taskID);
}

/**
 * 释放taskID（对应context）的根页表
 * @param hdevice
 * @param taskID
 * @return
 */
extern int vt_root_mem_free(vt_device_h hdevice, int taskID) {
    if(hdevice == nullptr) 
        return -1;
    auto device = (vt_device*) hdevice;
    return device->delete_device_mem(taskID);
}

//extern int vt_create_kernel(vt_device_h hdevice, int taskID, int kernelID) {
//    if(hdevice == nullptr)
//        return -1;
//    auto device = (vt_device*) hdevice;
//    return device->push_kernel(taskID, kernelID);
//}

extern int vt_copy_to_dev(vt_device_h hdevice, uint64_t dev_vaddr, void *src_addr, uint64_t size, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0)
        return -1;
    auto device = (vt_device*) hdevice;
    return device->upload(dev_vaddr, src_addr, size, taskID, kernelID);
}

extern int vt_copy_from_dev(vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0)
        return -1;
    auto device = (vt_device*) hdevice;
    return device->download(dev_vaddr, dst_addr, size, taskID, kernelID);
}

extern int vt_start(vt_device_h hdevice, void* metaData, uint64_t taskID) {
    if(hdevice == nullptr)
        return -1;
    auto device = (vt_device *) hdevice;
    device->start(taskID, metaData);
    return 0;
}
extern int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    if(hdevice == nullptr)
        return -1;
    auto* device = (vt_device*) hdevice;
    return device->wait(timeout);
}

extern int vt_finish_all_kernel(vt_device_h hdevice, queue<int> *finished_kernel_list) {
    if(hdevice == nullptr)
        return -1;
    auto device = (vt_device*) hdevice;
    *finished_kernel_list = device->execute_all_kernel();
    return 0;
}

/*
extern int vt_upload_kernel_bytes(vt_device_h device, const void* content, uint64_t size, int taskID) {
  int err = 0;

  if (NULL == content || 0 == size)
    return -1;

  uint32_t buffer_transfer_size = 65536; ///< 64 KB
  uint64_t kernel_base_addr = GLOBALMEM_BASE;
//   err = vt_dev_caps(device, VT_CAPS_KERNEL_BASE_ADDR, &kernel_base_addr);
//   if (err != 0)
//     return -1;

  // allocate device buffer
  vt_buffer_h buffer;
  err = vt_buf_alloc(device, buffer_transfer_size, &buffer);
  if (err != 0)
    return -1;

  // get buffer address
  auto buf_ptr = (uint8_t*)vt_host_ptr(buffer);

  //
  // upload content
  //

  uint64_t offset = 0;
  while (offset < size) {
    auto chunk_size = std::min<uint64_t>(buffer_transfer_size, size - offset);
    std::memcpy(buf_ptr, (uint8_t*)content + offset, chunk_size);

    */
/*printf("***  Upload Kernel to 0x%0x: data=", kernel_base_addr + offset);
    for (int i = 0, n = ((chunk_size+7)/8); i < n; ++i) {
      printf("%08x", ((uint64_t*)((uint8_t*)content + offset))[n-1-i]);
    }
    printf("\n");*//*



    err = vt_copy_to_dev(buffer, kernel_base_addr + offset, chunk_size, taskID);
    if (err != 0) {
      vt_buf_free(buffer);
      return err;
    }
    offset += chunk_size;
  }

  vt_buf_free(buffer);

  return 0;
}

extern int vt_upload_kernel_file(vt_device_h device, const char* filename, int taskID) {
  std::ifstream ifs(filename);
  if (!ifs) {
    std::cout << "error: " << filename << " not found" << std::endl;
    return -1;
  }

  // read file content
  ifs.seekg(0, ifs.end);
  auto size = ifs.tellg();
  auto content = new char [size];
  ifs.seekg(0, ifs.beg);
  ifs.read(content, size);

  // upload
  int err = vt_upload_kernel_bytes(device, content, size, taskID);

  // release buffer
  delete[] content;

  return err;
}
*/
