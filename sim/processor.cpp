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

#include <verilated.h>
#include <VVentus.h>

#include <vt_memory.h>

#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>

using namespace ventus;



/**
 * @brief Processor中定义的嵌套类的实现
 * @todo 各函数的具体实现
 */
class Processor::Impl{
public:
    Impl() {
        device_ = new VVentus();
        ram_ = nullptr;
        for(int i = 0; i < MAX_BLOCK; i++) { 
            block_finish_list[i] = 0;
            block_busy_list[i] = 0;
        }
        this->reset();
    }
    ~Impl(){
        delete device_;

    }

    void attach_ram(RAM* ram) {
        ram_ = ram;
    }
     /**
      * @brief GPGPU启动任务，传入任务需配置的参数
      * 每个任务由多个block组成，driver按block发送配置信息，在接收到一个block的信息之后，
      * GPGPU即开始执行，执行完毕之后返回相应block的ID
      * @return int 
      */
    int run(host_port_t* input_sig) {
        int delay = 0;

        while(delay < RUN_DELAY) {
            if(all_block_busy()) {
                this->tick();
                delay++;
            } else 
                break;
        }
        // 经过最大等待时间仍然没有空闲block
        if(delay == RUN_DELAY)
            return -1;

        for(int i = 0; i < MAX_BLOCK; i++) {
            if(block_busy_list[i] == 0) {
                
                device_->io_host_req_bits_host_wg_id = (inst_len)(i);
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
                
                device_->eval();
                block_busy_list[i] = 1;
                return i;// 返回该block在GPGPU中运行实际对应的标号
            }
        }
    }
    /// @todo 打印ram访问请求的函数
    void cout_flush(){

    }

    // /**
    //  * @brief   GPGPU启动前复位  
    //  * @return int 
    //  */
    // void start(const host_port_t* input_sig) {
    //     int exitcode = 0;
    //     this->reset();
    //     ///配置寄存器的操作
        
    // }

private:
    void reset(){
        device_->reset = 1;
        for(int i = 0; i < RESET_DELAY; i++){
            device_->clock = 0;
            device_->eval();
            device_->clock = 1;
            device_->eval();
        }
        device_->reset = 0;
        
        //this->cout_flush();
    }
    /**
     * @brief verilator运行一个周期并评估模型，更新busy和finish两个数组
     */
    void tick(){
        device_->clock = 0;
        this->eval();

        device_->clock = 1;
        this->eval();
        // 每个周期读取GPGPU的输出
        if(device_->io_host_rsp_valid)
            block_finish_list[device_->io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id] = 1;
        for(int i = 0; i < MAX_BLOCK; i++) {
            // 如果任务已经完成，则释放该block
            if(block_finish_list[i] == 1 && block_busy_list[i] == 1) {
                block_busy_list[i] = 0;
                block_finish_list[i] = 0;
                finished_block_queue.push(block_finish_list[i]);
            }
        }
        /// @todo ram的tick实现
    }

    void eval(){
        device_->eval();
    }
    /**
     * @brief 等待cycle个周期，如果所有任务提前完成，则提前返回
     * @param  cycle    等待的周期数
     */
public:
    std::queue<int> wait(uint64_t cycle){
        for(int i = 0; i < cycle; i++){
            int all_idle = 1;
            for(int j = 0; j < MAX_BLOCK; j++) {
                if(block_busy_list[j] == 1) {
                    all_idle = 0;
                    break;
                }
            }
            if(all_idle) 
                break;
            this->tick();
        }
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
            if(block_busy_list[i] = 0)
                all_busy_flag = 0;
        }
        return all_busy_flag;
    }
    /**
     * @brief 返回已完成的block的ID
     * @return int 
     */
    int finished_block(){
        if(!finished_block_queue.empty())
            finished_block_queue.pop();
    }
    

private:
    VVentus *device_; ///< GPGPU
    RAM* ram_; ///< GPGPU的ram

    int block_busy_list [MAX_BLOCK];
    int block_finish_list [MAX_BLOCK];
    std::vector<int> block_one_task [MAX_BLOCK];
    std::queue<int> finished_block_queue;
    typedef struct {

    } mem_port_t; ///< GPGPU和ram之间的接口信号

};


Processor::Processor()
    :impl_(new Impl())
{}

Processor::~Processor(){
    delete impl_;
}
void Processor::attach_ram(RAM* mem) {
    impl_->attach_ram(mem);
}

int Processor::run(host_port_t* input_sig) {
    return impl_->run(input_sig);
}
std::queue<int> Processor::wait(uint64_t cycle) {
    return impl_->wait(cycle);
}