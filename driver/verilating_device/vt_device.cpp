#include "vt_device.h"
#include <cstdlib>
#include "vt_utils.h"
#include "MemConfig.h"
//#include "processor.h"

int vt_device::alloc_local_mem(inst_len size, const inst_len *dev_addr, int taskID){
    if(size <= 0 || dev_addr == nullptr || taskID > roots.size())
        return -1;
    if(roots.size() == taskID) {
        uint64_t rootPage = ram_.createRootPageTable();
        roots.push_back(rootPage);
    }
    // 为device申请物理空间
    int err = ram_.allocateMemory(roots[taskID], *dev_addr, size);
    if(!err) {
        cout << "device allocate physical memory failed!" << endl;
        return -1;
    }
    return 0;
}

int vt_device::alloc_local_mem( int taskID){
    if(taskID > roots.size())
        return -1;
    if(roots.size() == taskID) {
        uint64_t rootPage = ram_.createRootPageTable();
        roots.push_back(rootPage);
    }
    return 0;
}

int vt_device::free_local_mem(int taskID){ 
    if(taskID >= roots.size() || roots[taskID] == 0)
        return -1;
    ram_.cleanTask(roots[taskID]);
    roots[taskID] = 0;
    return 0;
}

int vt_device::upload(int taskID, inst_len dest_addr, uint64_t size, void *data){
    if(taskID >= roots.size() || roots[taskID] == 0)
        return -1;
    uint64_t vaddr = dest_addr;
    int tmp = vAddrAllocated(vaddr, size);
    switch (tmp) {
        case -1:
            std::cout << "vAddr was not allocated and can't allocate for lack of memory size" << std::endl;
            return -1;
        case 0:
            break;
        case 1:
            alloc_local_mem(size, &vaddr, taskID);
            break;
        default:
            break;
    }
    return ram_.writeDataVirtual(roots[taskID], vaddr, size, data);
    
}

int vt_device::download(int taskID, uint64_t dest_data_addr, void *src_addr, uint64_t size){
    if(taskID >= roots.size()|| roots[taskID] == 0)
        return -1;    
    return ram_.readDataVirtual(roots[taskID], dest_data_addr+GLOBALMEM_BASE, size, src_addr);

}
/**
 * @brief   发送任务，每个任务由多个block组成，每次调用start发送一个任务
 * 传入到硬件的wg_id由processor.run()决定，函数执行完成后会返回实际的wg_id,
 * 任务队列的数据结构为一个元素为unordered_map的list，list的每个元素代表一个任务，
 * 每次发送一个任务会在list中增加一个元素
 * unordered_map的每个key代表block ID，value表示该block是否执行完成。
 * @param input_sig 输入到GPGPU的信号，与硬件接口对应
 * @param num_block 这个任务由多少个block组成
 * @return int 0
 */
int vt_device::start(int kernel_id,  host_port_t* input_port, int num_block){
    // host_port_t* input_per_block;
    // *input_per_block = *input_sig;
    for (const auto& it : kernel_list) {
        if(it.kernel_id == kernel_id) {
            cout << "this kernel has been excuted and not finished yet" << endl;
            return -1;
        }
    }
    unordered_map<int, bool> blk_list_tmp;
    // 发送block
    for(int i = 0; i < num_block; i++) {
        int tmp = processor_.run(input_port, kernel_id);
        blk_list_tmp.emplace(tmp, false);
//        if(last_task_.valid()){
//            kernel_list.back().blk_list.emplace(last_task_.get(), 0);
//        }
//        last_task_ = std::async (std::launch::async, [&]() -> int {
//            return processor_.run(input_sig, kernel_id);
//        });
    }
    kernel_list.emplace_back(kernel_info(kernel_id, blk_list_tmp));
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
    }            // 如果正在遍历的任务的所有block都完成，则将该任务记录下来并删除，
    // 根据GPGPU返回的block完成情况更新任务队列，将已完成的block ID与保存的list中的block ID比较

    std::queue<int> finished_block = processor_.wait(time);
    while(!finished_block.empty()) {
        bool block_legal = false;
        for(auto it=kernel_list.begin();it != kernel_list.end(); it++) {
            if(it->blk_list.find(finished_block.front()) != it->blk_list.end()) {
                (*it).blk_list[finished_block.front()] = true;
                finished_block.pop();
                block_legal = true;

                bool task_all_block_finished = true;
                for(auto& it_map : it->blk_list) {
                    if(!it_map.second) {
                        task_all_block_finished = false;
                        break;
                    }
                }
                if(task_all_block_finished) {
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
queue<int> vt_device::execute_all_kernel() {
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
/**
 *
 * @param vaddr
 * @param size
 * @return 0:   vAddr has been allocated
 * @return -1:  vAddr was not allocated and can't allocate
 * @return 1:   vAddr need to allocate
 */
int vt_device::vAddrAllocated(uint64_t vaddr, uint64_t size) {
    int high = allocAddr_l.empty() ? 0 : allocAddr_l.size() - 1;
    int low = 0;
    int mid = (high + low ) / 2;
    uint64_t value;
    if(allocAddr_l.empty()) {
        allocAddr_l.emplace_back(vaddr, size);
        return 1;
    }
    if(vaddr > allocAddr_l[high].vAddr ) {
        if(vaddr >= (allocAddr_l[high].vAddr + allocAddr_l[high].size)) {
            allocAddr_l.emplace_back(vaddr, size);
            return 1;
        } else {
            return -1;
        }
    }
    if(vaddr < allocAddr_l[low].vAddr) {
        if((vaddr + size) <= allocAddr_l[low].vAddr) {
            allocAddr_l.emplace(allocAddr_l.begin(), vAddr_info(vaddr, size));
            return 1;
        } else {
            return  -1;
        }
    }
    while(low <= high) {
        if(allocAddr_l[mid].vAddr == vaddr && allocAddr_l[mid].size >= size) {
            return 0;
        }
        else if(vaddr < allocAddr_l[mid].vAddr)
            high = mid-1;
        else
            low = mid+1;
        mid=(low+high) / 2;
    }
    value=high;

    if((allocAddr_l[value].vAddr + allocAddr_l[value].size) >= vaddr ||
            (((vaddr+size) >= allocAddr_l[value+1].vAddr) && (value != allocAddr_l.size() - 1))
            )
        return -1;
    else {
        auto iter = allocAddr_l.begin();
        for(int i=0; i < value; i++)
            iter++;
        allocAddr_l.emplace(iter, vAddr_info(vaddr, size));
        return 1;
    }
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
