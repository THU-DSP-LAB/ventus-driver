/**
 * @file ventus.cpp
 * @brief 设备和OpenCL程序的交互功能的实现
 * 
 * 1. `/include/ventu.h`中声明的函数
 * 2. `vt_device`类，表示GPGPU设备，成员变量包括设备类（不包含ram），设备ram类
 * 3. `vt_buffer`类，主机和设备之间交换数据的缓冲，成员变量包括`vt_device`，数据，缓冲区大小

 * @author yangzexia (yang-zx17\@qq.com)
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
#include "vt_config.h"

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
	vt_root_mem_alloc(*hdevice, 0);
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
extern int vt_dev_caps(vt_device_h* hdevice,  uint64_t caps_id, uint64_t *value){
     if(hdevice == nullptr)
         return -1;
    switch (caps_id) {
        case VT_CAPS_VERSION:
            *value = IMPLEMENTATION_ID;
            break;
        case VT_CAPS_MAX_CORES:
            *value = NUM_CTA;
            break;
        case VT_CAPS_MAX_WARPS:
            *value = NUM_WARP;
            break;
        case VT_CAPS_MAX_THREADS:
            *value = NUM_THREAD;
            break;
        default:
            std::cout << "invalid caps id: " << caps_id << std::endl;
            std::abort();
            return -1;
    }

    return 0;
}
extern int vt_buf_alloc(vt_device_h hdevice, uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0 || hdevice == nullptr)
        return -1;
    auto device = ((vt_device*) hdevice);
    return device->alloc_local_mem( size, vaddr, BUF_TYPE, taskID, kernelID);

}
extern int vt_buf_free(vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID) {
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

extern int vt_copy_to_dev(vt_device_h hdevice, uint64_t dev_vaddr,const void *src_addr, uint64_t size, uint64_t taskID, uint64_t kernelID) {
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
#ifdef DEBUG_VIRTUAL_ADDR
	device->execute_all_kernel();
	return 0;
#endif
    return device->wait(timeout);

}

extern int vt_finish_all_kernel(vt_device_h hdevice, queue<int> *finished_kernel_list) {
    if(hdevice == nullptr)
        return -1;
    auto device = (vt_device*) hdevice;
    *finished_kernel_list = device->execute_all_kernel();
    return 0;
}

extern int vt_upload_kernel_bytes(vt_device_h device, const void* content, uint64_t size, int taskID) {
  int err = 0;

  if (NULL == content || 0 == size)
    return -1;

  uint32_t buffer_transfer_size = 65536; ///< 64 KB
  uint64_t kernel_base_addr = BUF_PARA_BASE;

  // allocate device buffer
  uint64_t dev_mem_addr;

  uint64_t offset = 0;
	// 确定字符串可以被4整除

	int numValues = size / 8; // 每个uint32_t值占据8个字符

	// 创建uint32_t数组
	uint32_t values[numValues];

	// 将字符串转换为uint32_t数组
	for (int i = 0; i < numValues; i++) {
		std::string substring = (*(string*)content).substr(i * 8, 8); // 每次提取8个字符
		unsigned int value = std::stoul(substring, nullptr, 16); // 转换为无符号整数
		std::memcpy(values + i, &value, sizeof(uint32_t)); // 复制到数组中
	}
  void * const buffer = malloc(buffer_transfer_size);
  while (offset < size) {
    auto chunk_size = std::min<uint64_t>(buffer_transfer_size, size - offset);
    std::memcpy(buffer, values + offset, chunk_size);

	err = vt_buf_alloc(device, buffer_transfer_size, &dev_mem_addr, KERNEL_MEM, taskID, 0);
	if (err != 0)
	  return -1;

	printf("***  Upload Kernel to 0x%0x: data=", kernel_base_addr + offset);
    for (int i = 0; i < chunk_size; ++i) {
      printf("%08x", ((values + offset))[i]);
    }
    printf("\n");


    err = vt_copy_to_dev(device, dev_mem_addr, buffer, chunk_size, taskID, 0);
    if (err != 0) {
//      vt_buf_free(device, buffer_transfer_size, &dev_mem_addr, taskID, 0);
      return err;
    }
    offset += chunk_size;
  }
	free(buffer);
  return 0;
}

extern int vt_upload_kernel_file(vt_device_h device, const char* filename, int taskID) {

//	return 0;

	const char *pos = std::strchr(filename, '.');
	char newname[100];
	if (pos != nullptr) {
		std::strncpy(newname, filename, pos - filename);
		std::strcat(newname,".vmem");
		std::size_t len = std::strlen(newname);
		newname[len] = '\0';
	}
  std::ifstream ifs(newname, std::ios::binary);
  if (!ifs) {
    std::cout << "error: " << newname << " not found" << std::endl;
    return -1;
  }

  // read file content
  ifs.seekg(0, ifs.end);
  auto size = ifs.tellg();
  std::string content;
  content.resize(size);
  ifs.seekg(0, ifs.beg);
  ifs.read(&content[0], size);
  content.erase(std::remove(content.begin(), content.end(), '\n'), content.end());
  // upload
  int err = vt_upload_kernel_bytes(device, &content, content.length(), taskID);


  return err;
}
