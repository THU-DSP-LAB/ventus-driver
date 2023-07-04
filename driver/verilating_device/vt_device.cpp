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
    contextList_.emplace(taskID,context_info(taskID));
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

int vt_device::alloc_local_mem(uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0 || vaddr == nullptr || contextList_.find(taskID) == contextList_.end())
        return -1;
#ifdef DEBUG_VIRTUAL_ADDR
    int ret0 = addrManager_.allocMemory(taskID, kernelID, vaddr, size, BUF_TYPE);
    auto it = contextList_.find(taskID);
    int ret1 = it->second.ram.allocateMemory(it->second.root, *vaddr, size);
	PCOUT_INFO << "allocating memory at vaddr of 0x" <<hex << *vaddr << ", associated paddr of 0x" << ret1
			   <<", size of "<<dec<<size << "bytes"<< endl;
    return ret0 || !ret1;
#else
	/// 这里addrManager会分配一个虚拟地址addr,ram根据这个虚拟地址分配一个物理地址vaddr，
	/// 这个物理地址作为buf_alloc的返回值

    uint64_t  *addr = new uint64_t;
    int ret0 = addrManager_.allocMemory(taskID, kernelID, addr, size, BUF_TYPE);
    auto it = contextList_.find(taskID);
    *vaddr = it->second.ram.allocateMemory(it->second.root, *addr, size);
	/// 将ram分配的物理地址和addrManager分配的物理地址关联起来
	addrManager_.attachPaddr(taskID, kernelID, addr, vaddr);
	PCOUT_INFO << "allocating memory at vaddr of 0x" <<hex << *addr << ", associated paddr of 0x" << *vaddr
	<<", size of "<<dec<<size << "bytes"<< endl;
    delete addr;
    return ret0 || !*vaddr;
#endif
}


int vt_device::free_local_mem(uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID){
    if(size <= 0 || vaddr == nullptr || !addrManager_.findContextID(taskID))
        return -1;
    auto it = contextList_.find(taskID);
	uint64_t *paddr = new uint64_t;
	*paddr = *vaddr;
#ifndef DEBUG_VIRTUAL_ADDR
	addrManager_.findVaByPa(kernelID,taskID,paddr,vaddr);
#endif
    int ret1 = it->second.ram.releaseMemory(it->second.root, *paddr);
	delete paddr;
#ifdef DEBUG_VIRTUAL_ADDR
    int ret0 = addrManager_.releaseMemory(taskID, kernelID, vaddr, size);
    return ret0 || ret1;
#else
    return ret1;
#endif
}

int vt_device::upload(uint64_t dev_vaddr,const void *src_addr, uint64_t size, uint64_t taskID, uint64_t kernelID){
    if(size <= 0 || src_addr == nullptr || contextList_.find(taskID) == contextList_.end())
        return -1;
    auto it = contextList_.find(taskID);
#ifdef DEBUG_VIRTUAL_ADDR
    return it->second.ram.writeDataVirtual(it->second.root, dev_vaddr, size, src_addr);
#else
    return it->second.ram.writeDataPhysical(dev_vaddr, size, src_addr);
#endif


}

int vt_device::download(uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID, uint64_t kernelID){
    if(size <= 0 || dst_addr == nullptr || contextList_.find(taskID) == contextList_.end())
        return -1;
    auto it = contextList_.find(taskID);
#ifdef DEBUG_VIRTUAL_ADDR
    return it->second.ram.readDataVirtual(it->second.root, dev_vaddr, size, dst_addr);
#else
    return it->second.ram.readDataPhysical(dev_vaddr, size, dst_addr);
#endif
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
#ifdef DEBUG_VIRTUAL_ADDR
    uint64_t wgNum = inputData->kernel_size[0] * inputData->kernel_size[1]*inputData->kernel_size[2];
    uint64_t pdsParam = inputData->pdsSize * inputData->wf_size * inputData->wg_size;
    devicePort->host_req_num_wf = inputData->wg_size;
    devicePort->host_req_wf_size = inputData->wf_size;
    devicePort->host_req_kernel_size_3d_0 = inputData->kernel_size[0];
    devicePort->host_req_kernel_size_3d_1 = inputData->kernel_size[1];
    devicePort->host_req_kernel_size_3d_2 = inputData->kernel_size[2];
    devicePort->host_req_vgpr_size_total = inputData->wg_size * inputData->vgprUsage;
    devicePort->host_req_sgpr_size_total = inputData->wg_size * inputData->sgprUsage;
    devicePort->host_req_gds_size_total = 0;
    devicePort->host_req_vgpr_size_per_wf = inputData->vgprUsage;
    devicePort->host_req_sgpr_size_per_wf = inputData->sgprUsage;
    devicePort->host_req_start_pc = 0x80000000;
    devicePort->host_req_pds_baseaddr = inputData->pdsBaseAddr;
    devicePort->host_req_csr_knl = inputData->metaDataBaseAddr;
    devicePort->host_req_lds_size_total = inputData->ldsSize;
    devicePort->host_req_gds_baseaddr = 0;
#endif

    if(contextList_.find(taskID) == contextList_.end()) {
        PCOUT_ERROR << "the context of ID "<< taskID << " not exists, check your input!" << endl;
        return -1;
    }
    processor_.attach_ram(&contextList_.find(taskID)->second.ram);
    //each function call send one block of a kernel
    for (int i = 0; i < wgNum; ++i) {
	#ifdef DEBUG_VIRTUAL_ADDR
			uint64_t kernelID = inputData->kernel_id;
			devicePort->host_req_pds_baseaddr = inputData->pdsBaseAddr + i * pdsParam;
	#else
			uint64_t kernelID = 0;
	#endif
        devicePort->host_req_wg_id = (inst_len)(((
                    kernelID<<(int)ceil(log2(MAX_CONTEXT)) | taskID)
                    <<((int)ceil(log2(MAX_KERNEL)) | kernelID))
                    <<((int)ceil(log2(NUM_SM*MAX_BLOCK_PER_SM)) | i))
                    <<((int)ceil(log2(NUM_SM)));
		#ifdef DEBUG_VERIFY_HW
				devicePort->host_req_wg_id = 0;
				devicePort->host_req_num_wf = 2;
				devicePort->host_req_wf_size = 0x8;
				devicePort->host_req_kernel_size_3d_0 = 0;
				devicePort->host_req_kernel_size_3d_1 = 0;
				devicePort->host_req_kernel_size_3d_2 = 0;
				devicePort->host_req_vgpr_size_total = 0x040;
				devicePort->host_req_sgpr_size_total = 0x040;
				devicePort->host_req_gds_size_total = 0;
				devicePort->host_req_vgpr_size_per_wf = 0x020;
				devicePort->host_req_sgpr_size_per_wf = 0x020;
				devicePort->host_req_start_pc = 0x80000000;
				devicePort->host_req_pds_baseaddr = 0x80001000;
				devicePort->host_req_csr_knl = 0x80023000;
				devicePort->host_req_lds_size_total = 0x80;
				devicePort->host_req_gds_baseaddr = 0x00000000;
		#endif

		processor_.run(contextList_.find(taskID)->second.root, devicePort);
        //更新contextList_
        map<int, _state>firedBlk;
        firedBlk.emplace((int)(devicePort->host_req_wg_id), UNFINISH);
        contextList_.find(taskID)->second.kernelList.emplace(kernelID, kernel_info(firedBlk, UNFINISH));

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
	int cnt = 0;
    while(!all_context_finished()) {
        while(!finished_kernel_l.empty()) {
            tmp.push(finished_kernel_l.front());
            finished_kernel_l.pop();
        }
        wait(RUN_DELAY);
		cnt++;
		if(cnt > 30) break;
    }
    return tmp;
}

/**
 * 返回已经完成的contextID,如果没有执行完成，硬件时钟并不会前进
 * @return <queue<int>> contextID的队列
 */
queue<int> vt_device::get_finished_context() {
    queue<int> tmp;
    auto it = contextList_.begin();
    while(it != contextList_.end()) {
        if(it->second.context_finished()){ ///< 这个context里的所有kernel都执行完成了
            tmp.push(it->second.contextID);
            it = contextList_.erase(it);
        }
        else ++it;
    }
    return tmp;
}

bool vt_device::all_context_finished() {
	auto it = contextList_.begin();
	while(it != contextList_.end()) {
		if(!it->second.context_finished())
			return false;
	}
	return true;
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
    if(contextMemory_.find(contextID) == contextMemory_.end()) {/// 检查这个context是否存在
        PCOUT_ERROR << "Context of ID" << contextID <<" has not created, can't allocate memory!" << endl;
        return -1;
    }

	switch (BUF_TYPE) {///
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
		case KERNEL_MEM: if(size < GLOBALMEM_SIZE/2) {
				*vaddr = BUF_PARA_BASE;
				break;
			} else {
				PCOUT_ERROR << "buffer size too large, error!" << endl;
				return -1;
			}
		default: break;
	}
    if(contextMemory_.at(contextID) == nullptr) {
                currentItem = new addrItem(kernelID, contextID, *vaddr, size);
                contextMemory_.at(contextID) = currentItem;
            }
            else {
                currentItem = contextMemory_.at(contextID);
                if(!allocVaddr(&currentItem, vaddr, size, BUF_TYPE))
                	insertNewItem(currentItem, contextID, kernelID, vaddr, size);
				else {
					PCOUT_ERROR << "allocating virtual addr failed !" << endl;
				}
            }
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
    auto t = contextMemory_.emplace(contextID, nullptr);
    auto p = t.first;
    return 0;
}
/// 插入一个地址元素,如果contextMemory_中已经存在读写类型的地址，并且需要插入只读类型的地址，则要插入的地址为开头,
/// 同时修改该context的地址链表的开头元素为要插入的元素
/// \param currentItem 在该元素的后面插入
/// \param contextID
/// \param kernelID
/// \param vaddr
/// \param size
void addr_manager::insertNewItem(addrItem *currentItem, uint64_t contextID, uint64_t kernelID, uint64_t *vaddr,
                                 uint64_t size) {
    auto tmp = new addrItem(kernelID, contextID, *vaddr, size);
	if(tmp->vaddr == RODATA_BASE && currentItem->vaddr == RWDATA_BASE) {
		tmp->succContextItem = currentItem;
		currentItem->prevContextItem = tmp;
		contextMemory_.at(contextID) = tmp;
		return;
	}
    tmp->succContextItem = (currentItem)->succContextItem;
    tmp->prevContextItem = currentItem;
    if(currentItem->succContextItem != nullptr)
        currentItem->succContextItem->prevContextItem = tmp;
    (currentItem)->succContextItem = tmp;

}
/// https://raw.githubusercontent.com/yangzexia/md-image/image/202305171429512.svg
int addr_manager::allocVaddr(addrItem **rootItem, uint64_t *vaddr, uint64_t size, int BUF_TYPE) {

	uint64_t curAddr;
	switch (BUF_TYPE) {/// 寻找下一个还没有分配的地址
		case READ_ONLY:
			if((*rootItem)->vaddr==RODATA_BASE) {
				*vaddr = aligned_size((*rootItem)->vaddr + (*rootItem)->size, PAGESIZE);
				while ((*rootItem)->vaddr < RWDATA_BASE && (*rootItem)->succContextItem != nullptr) {
//					*vaddr = (*rootItem)->vaddr + (*rootItem)->size;
					if (*vaddr + size <= (*rootItem)->succContextItem->vaddr) {
						break;/// 该地址符合条件，跳出循环
					}
					*rootItem = (*rootItem)->succContextItem;
					*vaddr = aligned_size((*rootItem)->vaddr + (*rootItem)->size, PAGESIZE);
				}

				if ((*rootItem)->succContextItem == nullptr || (*rootItem)->succContextItem->vaddr >= RWDATA_BASE) {
					if (*vaddr + size <= RWDATA_BASE)
						break;
					else {
						PCOUT_ERROR << "memory needs to allocate of size of 0x" << hex << size << dec
									<< "failed! No enough space!" << endl;
						return -1;
					}
				}
			} else {
				*vaddr = RODATA_BASE;
			}
			break;


		case READ_WRITE:
			if((*rootItem)->vaddr == RODATA_BASE) {/// 如果第一个元素是只读类型的地址，则遍历到RW_BASE,如果没有RW的地址，则要分配的地址为RW_BASE
				while((*rootItem)->vaddr < RWDATA_BASE ) {
					if ((*rootItem)->succContextItem == nullptr) {
						*vaddr = RWDATA_BASE;
						return 0;
					}
					*rootItem = (*rootItem)->succContextItem;
				}
			}
			*vaddr = aligned_size((*rootItem)->vaddr + (*rootItem)->size, PAGESIZE);
			while ((*rootItem)->vaddr < BUF_PARA_BASE && (*rootItem)->succContextItem != nullptr) {
//				*vaddr = (*rootItem)->vaddr + (*rootItem)->size;
				if (*vaddr + size <= (*rootItem)->succContextItem->vaddr) {
					break;/// 该地址符合条件，跳出循环
				}
				*rootItem = (*rootItem)->succContextItem;
//				if((*rootItem)->succContextItem == nullptr)
					*vaddr = aligned_size((*rootItem)->vaddr + (*rootItem)->size, PAGESIZE);
			}
			if ((*rootItem)->succContextItem == nullptr && (*vaddr + size > BUF_PARA_BASE)) {
				PCOUT_ERROR << "memory needs to allocate of size of 0x" << hex << size << dec
							<< "failed! No enough space!" << endl;
				return -1;
			}
			break;
		case KERNEL_MEM:
			if((*rootItem)->vaddr == RODATA_BASE || (*rootItem)->vaddr == RWDATA_BASE) {/// 如果第一个元素是只读类型的地址，则遍历到RW_BASE,如果没有RW的地址，则要分配的地址为RW_BASE
				while((*rootItem)->vaddr < BUF_PARA_BASE ) {
					if ((*rootItem)->succContextItem == nullptr) {
						*vaddr = BUF_PARA_BASE;
						return 0;
					}
					*rootItem = (*rootItem)->succContextItem;
				}
			}
			*vaddr = aligned_size((*rootItem)->vaddr + (*rootItem)->size, PAGESIZE);
			while ((*rootItem)->vaddr < BUF_PARA_BASE+GLOBALMEM_SIZE/2 && (*rootItem)->succContextItem != nullptr) {
//				*vaddr = (*rootItem)->vaddr + (*rootItem)->size;
				if (*vaddr + size <= (*rootItem)->succContextItem->vaddr) {
					break;/// 该地址符合条件，跳出循环
				}
				*rootItem = (*rootItem)->succContextItem;
//				if((*rootItem)->succContextItem == nullptr)
				*vaddr = aligned_size((*rootItem)->vaddr + (*rootItem)->size, PAGESIZE);
			}
			if ((*rootItem)->succContextItem == nullptr && (*vaddr + size > BUF_PARA_BASE+GLOBALMEM_SIZE/2)) {
				PCOUT_ERROR << "memory needs to allocate of size of 0x" << hex << size << dec
							<< "failed! No enough space!" << endl;
				return -1;
			}
			break;
	}

	return 0;
}


int addr_manager::attachPaddr(uint64_t kernelID, uint64_t contextID, uint64_t *vaddr, uint64_t *paddr) {
	bool b_contextExist = false;
	bool b_vaddrExist = false;
//    for(auto it : contextList_) {
//        if(it == contextID) {
	b_contextExist = true;
	auto tmp = contextMemory_.at(contextID);
	while(tmp != nullptr) {
		if(tmp->vaddr == *vaddr) {
			tmp->paddr = *paddr;
			break;
		}
		tmp = tmp->succContextItem;
//            }
//            break;
//        }
	}
	if(!tmp) {
		PCOUT_ERROR << "Attaching paddr created by ram and vaddr created by addrManager_ failed, vaddr not exists!" << endl;
		return -1;
	}
	return 0;
}

int addr_manager::findVaByPa(uint64_t kernelID, uint64_t contextID, uint64_t *vaddr, uint64_t *paddr) {
	if(contextMemory_.find(contextID) == contextMemory_.end()) {
		PCOUT_ERROR << "Context of ID" << contextID <<" has not created,check parameters!" << endl;
		return -1;
	}
	auto tmp = contextMemory_.at(contextID);
	while(tmp != nullptr) {
		if(tmp->paddr == *paddr) {
			*vaddr = tmp->vaddr;
			break;
		}
		tmp = tmp->succContextItem;
	}
	return 0;
}

int addr_manager::releaseMemory(uint64_t contextID, uint64_t kernelID, uint64_t *vaddr, uint64_t size) {
//    auto tmp = new addrItem(kernelID, contextID, *vaddr, size);
    bool b_contextExist = false;
    bool b_vaddrExist = false;
//    for(auto it : contextList_) {
//        if(it == contextID) {
            b_contextExist = true;
            auto tmp = contextMemory_.at(contextID);
            while(tmp != nullptr) {
                if(tmp->vaddr == *vaddr) {
                    if(tmp->prevContextItem == nullptr && tmp->succContextItem == nullptr);
                    else if(tmp->prevContextItem == nullptr)
                        tmp->succContextItem->prevContextItem = nullptr;
                    else if(tmp->succContextItem == nullptr)
                        tmp->prevContextItem->succContextItem = nullptr;
                    else {
                        tmp->prevContextItem->succContextItem = tmp->succContextItem;
                        tmp->succContextItem->prevContextItem = tmp->prevContextItem;
                    }
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

