/**
 * @file processor.h
 * @brief GPGPU设备的声明
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

#ifndef PROCESSOR_H_
#define PROCESSOR_H_

#include <cstdint>
#include <queue>
#include "vt_memory.h"
#include "vt_config.h"
#include "vt_utils.h"


#pragma once
namespace ventus {


// class Memory;

class Processor{
public:
    Processor();
    ~Processor();

    void attach_ram(Memory* ram);
    int start(const host_port_t* input_sig );
    int run(host_port_t* input_sig, int kernel_id);
    std::queue<int> wait(uint64_t cycle);
private:

    class Impl;
    Impl* impl_;
};

//    void test_proc() {
//        std::cout << "hello world from processor.cpp, function test_proc()" << std::endl;
//    }
////
 void test_proc();
}

#endif