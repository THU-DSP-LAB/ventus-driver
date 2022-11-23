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
#include <mem.h>
// #include <util.h>
#include <processor.h>

#define RAM_PAGE_SIZE 4096



/// open the device and connect to it
int vt_dev_open(vt_device_h* hdevice){
    
}

/// Close the device when all the operations are done
int vt_dev_close(vt_device_h hdevice);