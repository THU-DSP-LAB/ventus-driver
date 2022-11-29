#include "vt_device.h"
#include <stdlib.h>
#include "vt_utils.h"



int vt_device::alloc_local_mem(inst_len size, inst_len *dev_addr){
    return ram_.allocate(size, dev_addr);
}
int vt_device::free_local_mem(inst_len *dev_addr){
    return ram_.release(dev_addr);
}
int vt_device::upload(const void *src_data_addr, inst_len dest_addr, uint64_t size, inst_len src_offset){
    uint64_t asize = aligned_size(size, BLOCK_SIZE);
    // 大于要写入的部分大于一个块的大小
    if(dest_addr + asize > -1){
        
    }
    ram_.write(src_data_addr + src_offset, dest_addr, asize);

}

int vt_device::download(void *dest_data_addr, inst_len src_addr, uint64_t size, inst_len dest_offset){
    uint64_t asize = aligned_size(size, BLOCK_SIZE);

    ram_.read(dest_data_addr + dest_offset, src_addr, asize);
}
/**
 * @brief   发送任务，每个任务由多个block组成，每次调用run发送一个任务
 * 传入到硬件的wg_id由processor.run()决定，函数执行完成后会返回实际的wg_id
 * 每次发送一个任务会在list中增加一个向量，向量的长度为该任务所分成的block的数量，
 * 每个向量的元素为一个map，map的key为block ID，value表示该block是否执行完成。
 * @param input_sig 输入到GPGPU的信号，与硬件接口对应
 * @param num_block 这个任务由多少个块组成
 * @return int 0
 */
int vt_device::start(host_port_t* input_sig, int num_block){
    // host_port_t* input_per_block;
    // *input_per_block = *input_sig;
    task_by_block_l.push_back(unordered_map<int, bool>());
    for(int i = 0; i < num_block; i++) {
        if(last_task_.valid()){
            task_by_block_l.back().emplace(last_task_.get(), 0);
        }
        last_task_ = std::async (std::launch::async, [&]() -> int {
            processor_.run(input_sig);
        });
    }
    return 0;
}
/**
 * @brief 等待一定时间，
 * @param  time              
 * @return int 
 */
int vt_device::wait(uint64_t time){
    // 如果所有已经启动的run()任务都完成
    if(!last_task_.valid());
    else {
        // 如果没有则等待到所有run()都完成
        uint64_t timeout = time / 1000;
        std::chrono::seconds wait_time(1);
        for(;;){
            auto status = last_task_.wait_for(wait_time);
            if (status == std::future_status::ready || timeout-- == 0)
                break;
        }
    }
    std::queue<int> finished_block = processor_.wait(time);
    while(!finished_block.empty()) {
        for(auto& it : task_by_block_l) {
                if(it.find(finished_block.front()) == it.end())
                task_by_block_l.front().back()[finished_block.front()] = true;
        finished_block.pop();
        }
    }
    bool task_finished = true;
    for(auto& it : task_by_block_l.front().back()) {
        if(it.second == false) {
            task_finished = false;
            break;
        }
    }
    if(task_finished == true)
        task_by_block_l.pop();
    return 0;
}

//Implementation of class vt_buffer
void* vt_buffer::data() const{
    return data_;
}
uint64_t vt_buffer::size() const{
    return size_;
}
vt_device* vt_buffer::device() const{
    return device_;
}
