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


#ifdef  DEBUG_GPGPU
    #include "VGPGPU_top.h"
#endif
#ifdef DEBUG_VIRTUAL_ADDR
    #include "VGPGPU_top.h"
#endif



#include "vt_memory.h"

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

Processor::Impl::Impl(): mem_ctrl_(NUM_THREAD) {
	Verilated::mkdir("logs");

	// Construct a VerilatedContext to hold simulation time, etc.
	// Multiple modules (made later below with Vtop) may share the same
	// context to share time, or modules may have different contexts if
	// they should be independent from each other.

	// Using unique_ptr is similar to
	// "VerilatedContext* contextp_ = new VerilatedContext" then deleting at end.
	contextp_ = new VerilatedContext;
	// Do not instead make Vtop as a file-scope static variable, as the
	// "C++ static initialization order fiasco" may cause a crash

	// Set debug level, 0 is off, 9 is highest presently used
	// May be overridden by commandArgs argument parsing
	contextp_->debug(0);

	// Randomization reset policy
	// May be overridden by commandArgs argument parsing
	contextp_->randReset(2);

	// Verilator must compute traced signals

	contextp_->assertOn(false);

#ifdef DEBUG_GPGPU
	device_ = new VVentus();
#endif
#ifdef DEBUG_VIRTUAL_ADDR
	device_ = new VGPGPU_top();
#endif
#ifdef DEBUG_TRACE
	contextp_->traceEverOn(true);
	tfp_ = new VerilatedVcdC;
	device_->trace(tfp_, 99);
	tfp_->open("logs/gpgpu_top_dump.vcd");
#endif
	ram_ = nullptr;
	device_->clock = 0;
	this->reset();

	PCOUT_INFO << "Impl() construct function : finished." << std::endl;
}
Processor::Impl::~Impl(){
#ifdef DEBUG_TRACE
	tfp_->close();
	delete tfp_;
#endif
	device_->final();
    delete device_;
}

void Processor::Impl::attach_ram(Memory* ram) {ram_ = ram;}
     /**
      * @brief GPGPU启动任务，传入任务需配置的参数，每次调用一次该函数执行一个kernel的一个block，
      * 每个kernel由多个block组成，在接收到一个block的信息之后，
      * GPGPU即开始执行，执行完毕之后device返回相应block的ID
      * @param input_sig host request signals
      * @return int 
      */
int Processor::Impl::run(host_port_t* input_sig) {
	if(!device_->clock)///< 保证输入信号在时钟下降沿变化
		this->eval();
	device_->io_host_req_bits_host_wg_id = input_sig->host_req_wg_id;
	device_->io_host_req_bits_host_num_wf = input_sig->host_req_num_wf;
	device_->io_host_req_bits_host_wf_size = input_sig->host_req_wf_size;
	device_->io_host_req_bits_host_kernel_size_3d_0 = input_sig->host_req_kernel_size_3d_0;
	device_->io_host_req_bits_host_kernel_size_3d_1 = input_sig->host_req_kernel_size_3d_1;
	device_->io_host_req_bits_host_kernel_size_3d_2 = input_sig->host_req_kernel_size_3d_2;
	device_->io_host_req_bits_host_vgpr_size_total = input_sig->host_req_vgpr_size_total;
	device_->io_host_req_bits_host_sgpr_size_total = input_sig->host_req_sgpr_size_total;
	device_->io_host_req_bits_host_gds_size_total = input_sig->host_req_gds_size_total;
	device_->io_host_req_bits_host_vgpr_size_per_wf = input_sig->host_req_vgpr_size_per_wf;
	device_->io_host_req_bits_host_sgpr_size_per_wf = input_sig->host_req_sgpr_size_per_wf;
	device_->io_host_req_bits_host_start_pc = input_sig->host_req_start_pc;
	device_->io_host_req_bits_host_pds_baseaddr = input_sig->host_req_pds_baseaddr;
	device_->io_host_req_bits_host_csr_knl = input_sig->host_req_csr_knl;
	device_->io_host_req_bits_host_lds_size_total = input_sig->host_req_lds_size_total;
	device_->io_host_req_bits_host_gds_baseaddr = input_sig->host_req_gds_baseaddr;
	device_->io_host_req_valid = 1;
	device_->io_host_rsp_ready = 1;
	while(true) {
		this->tick();
		if (device_->io_host_req_ready == 1) {
			this->tick();
			device_->io_host_req_valid = 0;
			break;
		}
	}
	if(contextp_->time() > 1000) {
	 return 0;
	}
return 0;
}


std::queue<int> Processor::Impl::wait(uint64_t cycle){
        for(int i = 0; i < cycle; i++){
            this->tick();
        }
        return finished_block();
    }


std::queue<int> Processor::Impl::finished_block(){
        auto tmp = finished_block_queue_;
        while(!finished_block_queue_.empty())
            finished_block_queue_.pop();
        return tmp;
    }

void Processor::Impl::reset(){
	device_->reset = 1;
	mem_ctrl_.controller_reset();
	for(int i = 0; i < RESET_DELAY; i++){
		mem_ctrl_.controller_reset();
		this->eval();
		if(i == RESET_DELAY - 1)
			device_->reset = 0;
		mem_ctrl_.controller_reset();
		this->eval();
	}


	contextp_->assertOn(true);
	//this->cout_flush();
	PCOUT_INFO << "Impl::reset() : reset all parts." << std::endl;
}
    /**
     * @brief verilator运行一个周期并评估模型
     */
void Processor::Impl::tick(){

	/// 给GPGPU和内存控制器的时钟赋值并实例化。
	this->eval();
	this->eval();
	// 每个周期读取GPGPU的输出
	if(device_->io_host_rsp_valid) {
		finished_block_queue_.push(device_->io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id);
	}

}

void Processor::Impl::get_ram_bits_port() {
	/// out_a signals, update at high voltage
	if(device_->clock) {
		mem_ctrl_.req->address = device_->io_out_a_bits_address;
		mem_ctrl_.req->opcode = device_->io_out_a_bits_opcode;
		mem_ctrl_.req->size = device_->io_out_a_bits_opcode;
		mem_ctrl_.req->source = device_->io_out_a_bits_source;
		mem_ctrl_.req->mask = device_->io_out_a_bits_mask;
//		if(mem_ctrl_.req->data == nullptr)
//			mem_ctrl_.req->data = new uint64_t;
		for (int i = 0; i < NUM_THREAD/2; ++i) {
			mem_ctrl_.req->data[i] = device_->io_out_a_bits_data[i];
		}
		mem_ctrl_.req->valid = device_->io_out_a_valid;
		mem_ctrl_.rsp->ready = device_->io_out_d_ready;

	/// out_d signals, update at falling edge
		device_->io_out_a_ready = mem_ctrl_.req->ready;
		device_->io_out_d_bits_opcode = mem_ctrl_.rsp->opcode;
		device_->io_out_d_bits_size = mem_ctrl_.rsp->size;
		device_->io_out_d_bits_source = mem_ctrl_.rsp->source;
//		if(mem_ctrl_.rsp->data == nullptr) {
//			mem_ctrl_.rsp->data = new uint64_t;
//		}
		for (int i = 0; i < NUM_THREAD/2; ++i) {
			device_->io_out_d_bits_data[i] = mem_ctrl_.rsp->data[i];
		}
		device_->io_out_d_valid = mem_ctrl_.rsp->valid;
	}

}

void Processor::Impl::eval(){
	contextp_->timeInc(1);
	get_ram_bits_port();
	device_->clock = !device_->clock;
	device_->eval();
	/// 读取TLB_A和TLB_D的值并接到GPGPU,
	mem_ctrl_.controller_eval(device_->clock, ram_);

#ifdef DEBUG_TRACE
	tfp_->dump(contextp_->time());
#endif

}




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
int Processor::run(host_port_t* input_sig) {
    return impl_->run(input_sig);
}
std::queue<int> Processor::wait(uint64_t cycle) {
    return impl_->wait(cycle);
}

void ventus::test_proc() {
    std::cout << "hello world from processor.cpp, function test_proc()" << std::endl;
}

