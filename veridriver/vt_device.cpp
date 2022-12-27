#include "vt_device.h"
#include <stdlib.h>
#include "vt_utils.h"
#include "MemConfig.h"

host_port_t* input_sig;

int vt_device::alloc_local_mem(inst_len size, inst_len *dev_addr, int taskID){
    if(size <= 0 || dev_addr == nullptr || taskID > roots.size()) 
        return -1;
    if(roots.size() == taskID) {
        uint64_t rootPage = ram_.createRootPageTable();
        roots.push_back(rootPage);
    }
    // 为device申请物理空间
    return ram_.allocateMemory(roots[taskID], *dev_addr, size) == 0 ? 0 : -1;

}

int vt_device::free_local_mem(int taskID){ 
    if(taskID >= roots.size() || roots[taskID] == 0)
        return -1;
    ram_.cleanTask(roots[taskID]);
    roots[taskID] = 0;
    return 0;
}

int vt_device::upload(int taskID, inst_len dest_addr, uint64_t size, void *data){
    if(taskID >= roots.size()|| roots[taskID] == 0)
        return -1;
    return ram_.writeDataVirtual(roots[taskID], dest_addr+RODATA_BASE, size, data);
    
}

int vt_device::download(int taskID, uint64_t dest_data_addr, void *src_addr, uint64_t size){
    if(taskID >= roots.size()|| roots[taskID] == 0)
        return -1;    
    return ram_.readDataVirtual(roots[taskID], dest_data_addr+GLOBALMEM_BASE, size, src_addr);

}
/**
 * @brief   发送任务，每个任务由多个block组成，每次调用run发送一个任务
 * 传入到硬件的wg_id由processor.run()决定，函数执行完成后会返回实际的wg_id,
 * 任务队列的数据结构为一个元素为unordered_map的list，list的每个元素代表一个任务，
 * 每次发送一个任务会在list中增加一个元素
 * unordered_map的每个key代表block ID，value表示该block是否执行完成。
 * @param input_sig 输入到GPGPU的信号，与硬件接口对应
 * @param num_block 这个任务由多少个block组成
 * @return int 0
 */
int vt_device::start(int kernel_id, int num_block){
    // host_port_t* input_per_block;
    // *input_per_block = *input_sig;
    for (auto it : kernel_list) {
        if(it.kernel_id == kernel_id) {
            cout << "this kernel has been excuted and not finished yet" << endl;
            return -1;
        }
    }
    // if(kernel_id > kernel_list.size()) {
    //     #ifdef DEBUG_DEV
    //         cout <<"Please assign kernel_id progressive increase." << endl;
    //     #endif
    //     return -1;
    // }
    // // 如果当前kernel_id对应的vector元素不存在，则创建一个新的元素
    // else if(kernel_id == kernel_list.size()) {
    //     kernel_list.push_back(kernel_info(kernel_id, unordered_map<int, bool>()));
    // }
    // // 如果存在，则重置
    // else 
    //     kernel_list[kernel_id].clear();
    
    for(int i = 0; i < num_block; i++) {
        if(last_task_.valid()){
            kernel_list.back().blk_list.emplace(last_task_.get(), 0);
        }
        last_task_ = std::async (std::launch::async, [&]() -> int {
            return processor_.run(input_sig, kernel_id);
        });
    }
    return 0;
}
/**
 * @brief 等待一定时间，更新kernel执行完成的信息
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
    // 根据GPGPU返回的block完成情况更新任务队列，将已完成的block ID与保存的list中的block ID比较
    while(!finished_block.empty()) {
        bool block_legal = false;
        for(auto it=kernel_list.begin();it != kernel_list.end(); it++) {
            if(it->blk_list.find(finished_block.front()) != it->blk_list.end()) {
                (*it).blk_list[finished_block.front()] = true;
                finished_block.pop();
                block_legal = true;

            // 如果正在遍历的任务的所有block都完成，则将该任务记录下来并删除，
                bool task_all_block_finished = true;
                for(auto& it_map : it->blk_list) {
                    if(it_map.second == false) {
                        task_all_block_finished = false;
                        break;
                    }
                }
                if(task_all_block_finished == true) {
                    finished_kernel_l.push(it->kernel_id);
                    it = kernel_list.erase(it);
                }
            }
        }
        if(!block_legal) {
            cout << "return Wrong finished block ID, something error" << endl;
            return -1;
        }
    }
    return 0;
}
/**
 * @brief 返回已经完成的kernel
 * @return queue<int> 
 */
queue<int> vt_device::get_finished_kernel() {
    queue<int> tmp;
    // while(!finished_kernel_l.empty()) {
        while(!finished_kernel_l.empty()) {
            tmp.push(finished_kernel_l.front());
            finished_kernel_l.pop();
        }
    //     wait(RUN_DELAY);
    // }
    return tmp;
}
queue<int> vt_device::excute_all_kernel() {
    queue<int> tmp;
    while(!finished_kernel_l.empty()) {
        while(!finished_kernel_l.empty()) {
            tmp.push(finished_kernel_l.front());
            finished_kernel_l.pop();
        }
        wait(RUN_DELAY);
    }
    return tmp;
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
