/**
 * @file processor.cpp
 * @brief processor类的实现
 * 
 * 主要功能：关联ram，启动，复位，执行（tick），通过总线和dram交互(如果有)，
 * 
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


#include "processor.h"
#include "vt_utils.h"
#include "vt_config.h"

#include <verilated.h>
#ifdef  DEBUG_GPGPU
    #include "VVentus.h"
#endif
#ifdef DEBUG_MMU
    #include "VMMUtest.h"
#endif



#include "vt_memory.h"
#include "controller.cpp"

#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>
#include <cmath>

using namespace ventus;



/**
 * @brief Processor中定义的嵌套类的实现
 * @todo 各函数的具体实现
 */
class Processor::Impl{
public:
    Impl():mem_ctrl(NUM_THREAD) {
        #ifdef DEBUG_GPGPU
            device_ = new VVentus();
        #endif
        #ifdef DEBUG_MMU
            device_ = new VMMUtest();
        #endif

        for(int i = 0; i < MAX_BLOCK_PER_SM; i++) {
            block_finish_list[i] = 0;
            block_busy_list[i] = 0;
        }
        ram_ = nullptr;
        this->reset();
        PCOUT_ERROR << "Impl() construct function : finished." << std::endl;
    }
    ~Impl(){
        delete device_;
        mem_ctrl.~Controller();
    }

    void attach_ram(Memory* ram) {ram_ = ram;}
     /**
      * @brief GPGPU启动任务，传入任务需配置的参数，每次调用一次该函数选择一个block分配任务
      * 每个任务由多个block组成，driver按block发送配置信息，在接收到一个block的信息之后，
      * GPGPU即开始执行，执行完毕之后返回相应block的ID
      * @param input_sig host request signals
      * @param kernel_id 要执行的任务的id
      * @return int 
      */
    int run(host_port_t* input_sig, int kernel_id) {
        int delay = 0;

        while(delay < RUN_DELAY) {
            if(all_block_busy()) {
                this->tick();
                delay++;
            } else 
                break;
        }

        // 经过最大等待时间仍然没有空闲block
        if(delay == RUN_DELAY) {
        #ifdef DEBUG_PROC
            std::cout << "no idle block" << std::endl;
        #endif
            return -1;
        }
        std::cout << MAX_BLOCK_PER_SM << std::endl;
        for(int i = 0; i < MAX_BLOCK_PER_SM; i++) {
            while(device_->io_host_req_ready != true) {
                this->tick();
            }
            if(block_busy_list[i] == 0) {
                std::cout << (inst_len)(kernel_id<<(int)ceil(log2(NUM_SM*MAX_BLOCK_PER_SM)) | i)<<(int)ceil(log2(NUM_SM)) << std::endl;
                device_->io_host_req_bits_host_wg_id = (inst_len)(kernel_id<<(int)ceil(log2(NUM_SM*MAX_BLOCK_PER_SM)) | i)<<(int)ceil(log2(NUM_SM));
                device_->io_host_req_bits_host_num_wf = input_sig->host_req_num_wf;
                device_->io_host_req_bits_host_wf_size = input_sig->host_req_wf_size; 
                device_->io_host_req_bits_host_start_pc = input_sig->host_req_start_pc;
                device_->io_host_req_bits_host_vgpr_size_total = input_sig->host_req_vgpr_size_total;
                device_->io_host_req_bits_host_sgpr_size_total = input_sig->host_req_sgpr_size_total;
                device_->io_host_req_bits_host_lds_size_total = input_sig->host_req_lds_size_total;
                device_->io_host_req_bits_host_gds_size_total = input_sig->host_req_gds_size_total;
                device_->io_host_req_bits_host_vgpr_size_per_wf = input_sig->host_req_vgpr_size_per_wf;
                device_->io_host_req_bits_host_sgpr_size_per_wf = input_sig->host_req_sgpr_size_per_wf;
                device_->io_host_req_bits_host_gds_baseaddr = input_sig->host_req_gds_baseaddr;
                device_->io_host_req_valid = 1;
                this->tick();
                block_busy_list[i] = 1;
                return i;// 返回该block在GPGPU中运行实际对应的标号
            }
        }
        return -1;
    }
    
    /// @todo 打印ram访问请求的函数
    void cout_flush(){

    }

    std::queue<int> wait(uint64_t cycle){
        for(int i = 0; i < cycle; i++){
            int all_idle = 1;
            for(int j = 0; j < MAX_BLOCK_PER_SM; j++) {
                if(block_busy_list[j] == 1) {
                    all_idle = 0;
                    break;
                }
            }
            if(all_idle)
                break;
            this->tick();
        }
        // 返回当前已完成的所有block的id
        std::queue<int> tmp = finished_block_queue;
        for(int i = 0; i < finished_block_queue.size(); i++)
            finished_block_queue.pop();
        return tmp;
    }
    /**
     * @brief 是否所有block都分配了任务
     * @return true 所有block都在忙
     * @return false 有block空闲
     */
    bool all_block_busy() {
        bool all_busy_flag = 1;
        for(int i = 0; i < MAX_BLOCK; i++) {
            if(block_busy_list[i] == 0)
                all_busy_flag = 0;
        }
        return all_busy_flag;
    }
    /**
     * @deprecated
     * @brief 返回已完成的block的ID
     * @return int
     */
    int finished_block(){
        if(!finished_block_queue.empty())
            finished_block_queue.pop();
        return -1;
    }


private:
    void reset(){
        device_->reset = 1;
        mem_ctrl.controller_reset();
        for(int i = 0; i < RESET_DELAY; i++){
            device_->clock = 0;
            device_->eval();
            device_->clock = 1;
            device_->eval();
        }
        device_->reset = 0;
        
        //this->cout_flush();
        PCOUT_ERROR << "Impl::reset() : reset all parts." << std::endl;
    }
    /**
     * @brief verilator运行一个周期并评估模型，更新busy和finish两个数组
     */
    void tick(){
        /// 读取TLB_A和TLB_D的值并接到GPGPU,
        /// @todo: 改成硬件对应的名称
        {
            get_ram_bits_port();
        }
        //给GPGPU和内存控制器的时钟赋值并实例化。
        device_->clock = 0;
        this->eval(device_->clock);
        device_->clock = 1;
        this->eval(device_->clock);
        // 每个周期读取GPGPU的输出
        if(device_->io_host_rsp_valid) {
            device_->io_host_rsp_ready = 1;
            this->tick();
            int finished_block = (device_->io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id >> (int)ceil(log2(NUM_SM))) & ((1 << (int)ceil(log2(NUM_SM))) - 1);
            finished_block_queue.push(finished_block);
            block_busy_list[finished_block] = 0;
        }

        /// @todo ram的tick实现
    }

    void get_ram_bits_port() {
        mem_ctrl.req->address = device_->io_out_a_bits_address;
        mem_ctrl.req->opcode = device_->io_out_a_bits_opcode;
        mem_ctrl.req->size = device_->io_out_a_bits_opcode;
        mem_ctrl.req->source = device_->io_out_a_bits_source;
        mem_ctrl.req->mask = device_->io_out_a_bits_mask;
        if(mem_ctrl.req->data == nullptr)
            mem_ctrl.req->data = new uint64_t;
        *(mem_ctrl.req->data) = device_->io_out_a_bits_data;
        mem_ctrl.req->valid = device_->io_out_a_valid;
        device_->io_out_a_ready = mem_ctrl.req->ready;

        device_->io_out_d_bits_opcode = mem_ctrl.rsp->opcode;
        device_->io_out_d_bits_size = mem_ctrl.rsp->size;
        device_->io_out_d_bits_source = mem_ctrl.rsp->source;
        if(mem_ctrl.rsp->data == nullptr) {
            std::cerr << "response from mem is nullptr" << std::endl;
            mem_ctrl.rsp->data = new uint64_t;
        }
        device_->io_out_d_bits_data = *(mem_ctrl.rsp->data);
        device_->io_out_d_valid = mem_ctrl.rsp->valid;
        mem_ctrl.rsp->ready = device_->io_out_d_ready;
    }
    void eval(int clk){
        device_->eval();
        mem_ctrl.controller_eval(clk, ram_);
    }
    /**
     * @brief 等待cycle个周期，如果所有任务提前完成，则提前返回
     * @param  cycle    等待的周期数
     */

#ifdef DEBUG_GPGPU
    VVentus *device_; ///< GPGPU
#endif
#ifdef DEBUG_MMU
    VMMUtest *device_;
#endif
    Memory *ram_; ///< GPGPU的ram

    int block_busy_list[MAX_BLOCK_PER_SM];
    int block_finish_list[MAX_BLOCK_PER_SM];
    std::queue<int> finished_block_queue;

    Controller mem_ctrl;

};


Processor::Processor()
    :impl_(new Impl())
{}

Processor::~Processor(){
    delete impl_;
}
void Processor::attach_ram(Memory* mem) {
    impl_->attach_ram(mem);
}
/**
 * 发送kernel_id的一个block
 * @param input_sig
 * @param kernel_id
 * @return
 */
int Processor::run(host_port_t* input_sig, int kernel_id) {
    return impl_->run(input_sig, kernel_id);
}
std::queue<int> Processor::wait(uint64_t cycle) {
    return impl_->wait(cycle);
}

void ventus::test_proc() {
    std::cout << "hello world from processor.cpp, function test_proc()" << std::endl;
}

