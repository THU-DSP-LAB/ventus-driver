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

#include <verilated.h>
#include <verilated_vcd_c.h>

#include "VGPGPU_top.h"


namespace ventus {

class Processor{
public:
    Processor();
    ~Processor();

    void attach_ram(Memory* ram);
    int start(const host_port_t* input_sig);
    int run(uint64_t root, host_port_t* input_sig);
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
	/// 根据输入的GPGPU硬件接口信号，为verilator对象的接口赋值
	/// \param input_sig 硬件接口的结构体
	/// \return 执行完成则返回0
    int run(uint64_t root, host_port_t* input_sig);
	/// 等待特定个周期
	/// \param cycle 输入
	/// \return 以 queue 形式返回已经执行完成的block id
    std::queue<int> wait(uint64_t cycle);
	/// 查询已经执行完成的block id
	/// \return 以 queue 形式返回已经执行完成的block id
    std::queue<int> finished_block();


private:
    void reset();
    void tick();
    void get_ram_bits_port();
    void eval();

#ifdef DEBUG_GPGPU
        VGPGPU_top *device_; ///< GPGPU
#endif
#ifdef DEBUG_VIRTUAL_ADDR
		VGPGPU_top *device_;
        uint64_t root_;
#endif

#ifdef DEBUG_TRACE
		VerilatedVcdC* tfp_;
#endif
		VerilatedContext *contextp_;

        Memory *ram_; ///< GPGPU的ram
        std::queue<int> finished_block_queue_;
        Controller mem_ctrl_;

    };
 void test_proc();


}

#endif