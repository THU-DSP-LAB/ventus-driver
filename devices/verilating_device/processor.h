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

#pragma once

#ifndef PROCESSOR_H_
#define PROCESSOR_H_

#include <cstdint>
#include <queue>
#include "vt_memory.h"
#include "vt_config.h"
#include "vt_utils.h"

#include "controller.cpp"
#include "VMMUtest.h"


namespace ventus {

class Processor{
public:
    Processor();
    ~Processor();

    void attach_ram(Memory* ram);
    int start(const host_port_t* input_sig);
    int run(host_port_t* input_sig);
    std::queue<int> wait(uint64_t cycle);
private:

    class Impl;
    Impl* impl_;
};



class Processor::Impl{
public:
    Impl();
    ~Impl();
    void attach_ram(Memory* ram);
    int run(host_port_t* input_sig);
    std::queue<int> wait(uint64_t cycle);
    std::queue<int> finished_block();

    ///@deprecated
    void cout_flush();

private:
    void reset();
    void tick();
    void get_ram_bits_port();
    void eval(int clk);

#ifdef DEBUG_GPGPU
        VVentus *device_; ///< GPGPU
#endif
#ifdef DEBUG_MMU
        VMMUtest *device_;
#endif
        Memory *ram_; ///< GPGPU的ram

        std::queue<int> finished_block_queue;

        Controller mem_ctrl;

    };
 void test_proc();


}

#endif