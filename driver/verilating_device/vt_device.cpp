#include "vt_device.h"
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include "vt_utils.h"
#include "MemConfig.h"
//#include "processor.h"

int vt_device::create_device_mem(uint64_t taskID) {
    if(contextList_.find(taskID) != contextList_.end()) {
        PCOUT_ERROR << "the taskID of " << taskID <<"has been created, check your input!" <<endl;
        return -1;
    }
    int ret0 = addrManager_.createNewContext(taskID);
    context_info tmp = context_info(taskID);
    contextList_.emplace(taskID,tmp);
    auto it = contextList_.find(taskID);
    uint64_t ret1 = it->second.ram.createRootPageTable();
    it->second.root = ret1;
    return ret0 || !ret1;
}

int vt_device::delete_device_mem(int taskID){
    if(contextList_.find(taskID) != contextList_.end()) {
        PCOUT_ERROR << "the taskID of " << taskID <<"has not been created, check your input!" <<endl;
        return -1;
    }
    contextList_.erase(taskID);
    return 0;
}

//int vt_device::push_kernel(uint64_t taskID, uint64_t kernelID, map<int, bool> input_blk_list) {
//    if(contextList_.find(taskID) == contextList_.end()) {
//        PCOUT_ERROR << "the taskID of " << taskID <<"has not been created, check your input!" <<endl;
//        return -1;
//    }
//    auto it = contextList_.find(taskID);
//    it->second.kernelList.push_back(kernel_info(kernelID, input_blk_list));
//    return 0;
//}

int vt_device::alloc_local_mem(uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0 || vaddr == nullptr || contextList_.find(taskID) == contextList_.end())
        return -1;
    int ret0 = addrManager_.allocMemory(taskID, kernelID, vaddr, size, BUF_TYPE);
    auto it = contextList_.find(taskID);
    int ret1 = it->second.ram.allocateMemory(it->second.root, *vaddr, size);
    return ret0 || !ret1;
}


int vt_device::free_local_mem(uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID){
    if(size <= 0 || vaddr == nullptr || !addrManager_.findContextID(taskID))
        return -1;
    int ret0 = addrManager_.releaseMemory(taskID, kernelID, vaddr, size);
    auto it = contextList_.find(taskID);
    int ret1 = it->second.ram.releaseMemory(it->second.root, *vaddr);
    return ret0 || ret1;
}

int vt_device::upload(uint64_t dev_vaddr, void *src_addr, uint64_t size, uint64_t taskID, uint64_t kernelID){
    if(size <= 0 || src_addr == nullptr || contextList_.find(taskID) == contextList_.end())
        return -1;
    auto it = contextList_.find(taskID);
    return it->second.ram.writeDataVirtual(it->second.root, dev_vaddr, size, src_addr);
    
}

int vt_device::download(uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID, uint64_t kernelID){
    if(size <= 0 || dst_addr == nullptr || contextList_.find(taskID) == contextList_.end())
        return -1;
    auto it = contextList_.find(taskID);
    return it->second.ram.readDataVirtual(it->second.root, dev_vaddr, size, dst_addr);
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
 *
 * @todo start中调用parse_metaData, 然后push_kernel， 然后为硬件接口赋值，启动GPU
 */
int vt_device::start(int taskID, void* metaData){
    //parse metaData
    host_port_t *devicePort = new host_port_t;
    auto inputData = (meta_data *)metaData;
    uint64_t wgNum = inputData->kernel_size[0] * inputData->kernel_size[1]*inputData->kernel_size[2];
    devicePort->host_req_gds_baseaddr = 128;
    devicePort->host_req_gds_size_total = 0;
    devicePort->host_req_lds_size_total = inputData->ldsSize * wgNum;
    devicePort->host_req_num_wf = inputData->wg_size;
    devicePort->host_req_sgpr_size_per_wf = inputData->sgprUsage;
    devicePort->host_req_sgpr_size_total = inputData->sgprUsage;
    devicePort->host_req_vgpr_size_total = inputData->vgprUsage;
    devicePort->host_req_vgpr_size_per_wf = inputData->vgprUsage;
    devicePort->host_req_start_pc = 0;
    devicePort->host_req_wf_size = inputData->wf_size;
    devicePort->host_req_wg_id = 0;

    if(contextList_.find(taskID) == contextList_.end()) {
        PCOUT_ERROR << "the context of ID "<< taskID << " not exists, check your input!" << endl;
        return -1;
    }
    processor_.attach_ram(&contextList_.find(taskID)->second.ram);
    //each function call send one block of a kernel
    for (int i = 0; i < wgNum; ++i) {
        uint64_t kernelID = inputData->kernel_id;
        devicePort->host_req_wg_id = (inst_len)(((
                    kernelID<<(int)ceil(log2(MAX_CONTEXT)) | taskID)
                    <<((int)ceil(log2(MAX_KERNEL)) | kernelID))
                    <<((int)ceil(log2(NUM_SM*MAX_BLOCK_PER_SM)) | i))
                    <<((int)ceil(log2(NUM_SM)));
        processor_.run(devicePort);
        //更新contextList_
        map<int, _state>firedBlk;
        firedBlk.emplace((int)(devicePort->host_req_wg_id), UNFINISH);
        contextList_.find(taskID)->second.kernelList.emplace(inputData->kernel_id, kernel_info(firedBlk, UNFINISH));

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
    }            // 如果正在遍历的任务的所有block都完成，则将该任务记录下来并删除，
    // 根据GPGPU返回的block完成情况更新任务队列，将已完成的block ID与保存的list中的block ID比较

    std::queue<int> finished_block = processor_.wait(time);
    while(!finished_block.empty()) {
        bool block_legal = true;
        //根据硬件返回的已完成blkID，解码出所属的context, kernel和原本的block
        uint64_t blkID = (finished_block.front() >> (int)ceil(log2(NUM_SM))) & (1 << (int)ceil(log2(NUM_SM*MAX_BLOCK_PER_SM)));
        uint64_t kernelID = (finished_block.front() >> (int)ceil(log2(NUM_SM*MAX_BLOCK_PER_SM*NUM_SM))) & (1 << (int)ceil(log2(MAX_KERNEL)));
        uint64_t contextID = (finished_block.front() >> (int)ceil(log2(NUM_SM*MAX_BLOCK_PER_SM*NUM_SM*MAX_KERNEL))) & (1 << (int)ceil(log2(MAX_CONTEXT)));
        auto contextItem = contextList_.find(contextID);
        //判断contextID是否存在
        if(contextItem == contextList_.end())
            block_legal = false;
        else{
            auto it = contextItem->second.kernelList.find(kernelID);
                //判断kernelID是否存在
                if(it == contextItem->second.kernelList.end()) {
                    block_legal = false;
                }
                else {
                    //判断blkID是否存在
                    if(it->second.blk_list.find(blkID) == it->second.blk_list.end())
                        block_legal = false;
                    else {
                        //将相应kernel的block设置为已完成
                        it->second.blk_list[blkID] = FINISH;
                        finished_block.pop();

                        //当某一个kernel的block完成之后，判断是否该block的所有kernel都完成，
                        // 判断该kernel所属的context的所有kernel是否都完成
                        bool kernel_all_block_finished = true;
                        for(auto& it_map : it->second.blk_list) {
                            if(!it_map.second) {
                                kernel_all_block_finished = false;
                                break;
                            }
                        }
                        if(kernel_all_block_finished) {
                            finished_kernel_l.push(contextID << (int)ceil(log2(MAX_CONTEXT)) | kernelID);
                            it->second.state = FINISH;
                        }
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
    while(!finished_kernel_l.empty()) {
        tmp.push(finished_kernel_l.front());
        finished_kernel_l.pop();
    }
    return tmp;
}
/**
 * 执行所有context下的所有kernel，并返回已完成kernel ID的队列
 * @return
 */
queue<int> vt_device::execute_all_kernel() {
    queue<int> tmp;
    while(!get_finished_context().empty()) {
        while(!finished_kernel_l.empty()) {
            tmp.push(finished_kernel_l.front());
            finished_kernel_l.pop();
        }
        wait(RUN_DELAY);
    }
    return tmp;
}


queue<int> vt_device::get_finished_context() {
    queue<int> tmp;
    auto it = contextList_.begin();
    while(it != contextList_.end()) {
        if(it->second.context_finished()){
            tmp.push(it->second.contextID);
            it = contextList_.erase(it);
        }
        else ++it;
    }
    return tmp;
}

///@deprecated

uint64_t vt_device::parse_metaData(uint64_t taskID, void *metaData, host_port_t* devicePort) {
    meta_data* inputData = (meta_data *)metaData;
    uint64_t wgNum = inputData->kernel_size[0] * inputData->kernel_size[1]*inputData->kernel_size[2];
    devicePort->host_req_gds_baseaddr = 128;
    devicePort->host_req_gds_size_total = 0;
    devicePort->host_req_lds_size_total = inputData->ldsSize * wgNum;
    devicePort->host_req_num_wf = inputData->wg_size;
    devicePort->host_req_sgpr_size_per_wf = inputData->sgprUsage;
    devicePort->host_req_sgpr_size_total = inputData->sgprUsage;
    devicePort->host_req_vgpr_size_total = inputData->vgprUsage;
    devicePort->host_req_vgpr_size_per_wf = inputData->vgprUsage;
    devicePort->host_req_start_pc = 0;
    devicePort->host_req_wf_size = inputData->wf_size;
    devicePort->host_req_wg_id = 0;

    if(contextList_.find(taskID) == contextList_.end()) {
        PCOUT_ERROR << "the context of ID "<< taskID << " not exists, check your input!" << endl;
        return -1;
    }
    return wgNum;
}


addr_manager::~addr_manager() {
    for(auto it : contextMemory_) {
        addrItem *curItem = it.second;
        while(curItem != nullptr) {
            auto tmp = curItem;
            curItem = curItem->succContextItem;
            delete tmp;
        }
    }
}


int addr_manager::allocMemory(uint64_t contextID, uint64_t kernelID, uint64_t *vaddr, uint64_t size, int BUF_TYPE) {
    if(size == 0 || vaddr == nullptr) {
        PCOUT_ERROR << "vaddr needs to allocate memory is nullptr! error!" << endl;
        return -1;
    }

    size = aligned_size(size, BLOCK_SIZE);
    addrItem* currentItem = nullptr;
//    auto curContextIt = contextList_.begin();
//    while(curContextIt != contextList_.end()) {
//        if(*curContextIt == contextID) {
    if(contextMemory_.find(contextID) == contextMemory_.end()) {
        PCOUT_ERROR << "Context of ID" << contextID <<" has not created, can't allocate memory!" << endl;
        return -1;
    }
            if(contextMemory_[contextID] == nullptr) {
                switch (BUF_TYPE) {
                    case READ_ONLY:
                        if(size < RWDATA_BASE - RODATA_BASE) {
                            *vaddr = RODATA_BASE;
                            break;
                        } else {
                            PCOUT_ERROR << "buffer size too large, error!" << endl;
                            return -1;
                        }
                    case READ_WRITE: if(size < RWDATA_BASE - RODATA_BASE) {
                            *vaddr = RWDATA_BASE;
                            break;
                        } else {
                            PCOUT_ERROR << "buffer size too large, error!" << endl;
                            return -1;
                        }
                    default: break;
                }
                currentItem = new addrItem(kernelID, contextID, *vaddr, size);
                contextMemory_[contextID] = currentItem;
            }
            else {
                currentItem = contextMemory_[contextID];
                findVaddr(&currentItem, vaddr, size, BUF_TYPE);
                insertNewItem(currentItem, contextID, kernelID, vaddr, size);
            }
//            break;
//        }
//        ++curContextIt;
//    }
//    if(curContextIt == contextList_.end()){
//        PCOUT_ERROR << "Context of ID" << contextID <<" has not created, can't allocate memory!" << endl;
//        return -1;
//    }
    return 0;
}

int addr_manager::createNewContext(uint64_t contextID) {

    for(auto it : contextMemory_) {
        if(it.first == contextID) {
            PCOUT_ERROR << "A context of ID" << contextID <<" exists, error!" << endl;
            return -1;
        }
    }
//    contextList_.emplace_back(contextID);
    contextMemory_.emplace(contextID, nullptr);
    return 0;
}

void addr_manager::insertNewItem(addrItem *currentItem, uint64_t contextID, uint64_t kernelID, uint64_t *vaddr,
                                 uint64_t size) {
    auto tmp = new addrItem(kernelID, contextID, *vaddr, size);
    tmp->succContextItem = (currentItem)->succContextItem;
    (currentItem)->succContextItem = tmp;
    tmp->prevContextItem = currentItem;
    (currentItem)->succContextItem->prevContextItem = tmp;

}

void addr_manager::findVaddr(addrItem **rootItem, uint64_t *vaddr, uint64_t size, int BUF_TYPE) {

    while(*rootItem != nullptr) {
        uint64_t curAddrFrame = (*rootItem)->vaddr + (*rootItem)->size;
        uint64_t newVaddr;
        if(curAddrFrame < *vaddr) {
            if((*rootItem)->succContextItem == nullptr){
                newVaddr = curAddrFrame;
            }else
                if((*vaddr + size < (*rootItem)->succContextItem->vaddr))
                    newVaddr = curAddrFrame;
            //地址已确定，检查范围是否符合BUF_TYPE
            switch (BUF_TYPE) {
                case READ_ONLY: if((newVaddr > RODATA_BASE) && (newVaddr < RWDATA_BASE)) {
                        *vaddr = newVaddr;
                        break;
                    } else {
                        PCOUT_ERROR << "vaddr range" << *vaddr <<" not match with BUF_TYPE!" << endl;
                        break;
                    }
                case READ_WRITE: if((newVaddr > RWDATA_BASE)) {
                        *vaddr = newVaddr;
                        break;
                    } else {
                        PCOUT_ERROR << "vaddr range" << *vaddr <<" not match with BUF_TYPE!" << endl;
                        break;
                    }
                default: {
                    PCOUT_ERROR << "unknown BUF_TYPE!" << BUF_TYPE<<" check your input!" <<endl;
                    break;
                }
            }
            //跳出while循环
            break;

        }else {
            (*rootItem) = (*rootItem)->succContextItem;
            continue;
        }

    }
}

int addr_manager::releaseMemory(uint64_t contextID, uint64_t kernelID, uint64_t *vaddr, uint64_t size) {
//    auto tmp = new addrItem(kernelID, contextID, *vaddr, size);
    bool b_contextExist = false;
    bool b_vaddrExist = false;
//    for(auto it : contextList_) {
//        if(it == contextID) {
            b_contextExist = true;
            auto tmp = contextMemory_[contextID];
            while(tmp != nullptr) {
                if(tmp->vaddr == *vaddr) {
                    tmp->prevContextItem->succContextItem = tmp->succContextItem;
                    tmp->succContextItem->prevContextItem = tmp->prevContextItem;
                    delete tmp;
                    b_vaddrExist = true;
                    break;
                }
                tmp = tmp->succContextItem;
//            }
//            break;
//        }
    }
    if(!b_contextExist) {
        PCOUT_ERROR << "context ID of " << contextID << " check your input! " << endl;
        return -1;
    }
    if(!b_vaddrExist) {
        PCOUT_ERROR << "invalid vaddr of " << *vaddr << " check your input! " << endl;
        return -1;
    }
    return 0;
}

bool addr_manager::findContextID(uint64_t contextID) {
    for(auto it : contextMemory_) {
        if(it.first == contextID)
            return true;
    }
    return false;
}

bool addr_manager::findKernelID(uint64_t kernelID) {
    for(auto it : kernelList_) {
        if(it == kernelID)
            return true;
    }
    return false;
}

