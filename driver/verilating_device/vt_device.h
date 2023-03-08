/**
 * @file vt_device.h
 * @brief 与驱动提供的API对接的类的声明
 * 这一版没有实现多任务（每个任务具有一个独立的根页表的情况，后续再跟进）
 * @author yangzexia (yang-zx17@qq.com)
 * @version 1.0
 * @date 2022-11-24
 * 
 * @copyright Copyright (c) {2022}  DSPLAB@Tsinghua University
 * 
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2022-11-24 <td>1.0     <td>wangh     <td>首次创建
 * <tr><td>2022-12-14 <td>1.1
 * </table>
 */
#include "processor.h"
#include "controller.cpp"
#include "vt_utils.h"
#include "verilating_device/vt_config.h"
#include <future>
#include <list>
#include <map>
#include <utility>
#include <vector>
#include <unordered_map>

using namespace ventus;
using namespace std;
//These macro is defined as test

enum kernel_state{
    IDLE, START, RUN, FINISH
};
enum context_state{

};

struct meta_data{
    uint64_t kernel_id;
    uint64_t kernel_size[3];
    uint64_t wf_size;
    uint64_t metaDataBaseAddr;
    uint64_t ldsSize;
    uint64_t pdsSize;
    uint64_t sgprUsage;
    uint64_t vgprUsage;
    uint64_t pdsBaseAddr;
};

struct kernel_info{
    map<int, bool> blk_list;
    int kernel_id;
    kernel_state state;
    kernel_info(int input_kernel_id, map<int, bool> input_blk_list):
                blk_list(std::move(input_blk_list)),
                kernel_id(input_kernel_id){}
};

struct context_info{
    uint64_t contextID;
    vector<kernel_info> kernelList;
    uint64_t root;
    Memory ram;
    context_info(uint64_t taskID)
                :contextID(taskID),ram(RAM_RANGE)
    {
        root = 0;
    }
};

struct addrItem{
    addrItem *prevContextItem;
    addrItem *succContextItem;
    addrItem *prevKernelItem;
    addrItem *succKernelItem;
    uint64_t kernelID;
    uint64_t taskID;
    uint64_t vaddr;
    uint64_t size;
    addrItem(uint64_t in_kernelID,uint64_t in_taskID,uint64_t in_vaddr,uint64_t in_size)
            :prevContextItem(nullptr),
             succContextItem(nullptr),
             prevKernelItem(nullptr),
             succKernelItem(nullptr),
             kernelID(in_kernelID),
             taskID(in_taskID),
             vaddr(in_vaddr),
             size(in_size)
    {}
};

/**
 * 地址管理，能够以device为单位管理内存地址空间，可能包含多个context的根页表，以及每个kernel使用的
 * 地址，
 * 分配地址时判断地址段是否可用，
 * 管理分配的内存空间的类型（只读段，读写段），
 * 地址段的释放。
 */
class addr_manager{
public:
    addr_manager(){};
    ~addr_manager();

    void attatch_ram(Memory* ram);
    int createNewContext(uint64_t contextID);
    int allocMemory(uint64_t contextID, uint64_t kernelID, uint64_t *vaddr, uint64_t size, int BUF_TYPE);
    int releaseMemory(uint64_t contextID, uint64_t kernelID, uint64_t *vaddr, uint64_t size);

    bool findContextID(uint64_t contextID);
    bool findKernelID(uint64_t kernelID);
private:

    void findVaddr(addrItem** rootItem, uint64_t *vaddr, uint64_t size, int BUF_TYPE);
    void insertNewItem(addrItem* currentItem, uint64_t contextID, uint64_t kernelID,uint64_t *vaddr, uint64_t size);

//    list<uint64_t> contextList_;
    map<uint64_t, addrItem*> contextMemory_;
    list<uint64_t> kernelList_;


};

class vt_device {
public:
    vt_device()
        :ram_(RAM_RANGE){
            processor_.attach_ram(&ram_);
            addrManager_.attatch_ram(&ram_);
            test_proc();
            // list<unordered_map<int, bool>> task_by_block_l;
            // vector<uint64_t> roots;
        }
    ~vt_device(){
        if(last_task_.valid())
            last_task_.wait();
    }

    int create_device_mem(int taskID);

    /**
     * @brief 释放分配的空间，释放根页表所指向的空间
     * @param  taskID    要释放的内存空间对应的任务ID
     * @return int
     */
    int delete_device_mem(int taskID);


    /**
     * @brief 为GPU分配按照虚拟地址分配内存空间，返回指向根页表的指针
     * @param  size         要分配的空间大小
     * @param  dev_maddr    要分配的空间起始虚拟地址
     * @param  root         指向根页表的指针        
     * @return int 
     */
    int alloc_local_mem(uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID, uint64_t kernelID);

    int free_local_mem(uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID);

    /**
     * @brief 将buffer写入到分配给GPU的memory中，只读区间
     * @param  taskID            任务ID    
     * @param  dest_addr         GPU的memory，虚拟地址
     * @param  size              大小
     * @return int 
     */
    int upload(uint64_t dev_vaddr, void *src_addr, uint64_t size, uint64_t taskID, uint64_t kernelID);
    /**
     * @brief 
     * @param  root              根页表
     * @param  dest_data_addr    要读取的数据地址，虚拟地址
     * @param  src_addr          读出后要放置的位置
     * @param  size              大小
     * @return int 
     */
    int download(uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID, uint64_t kernelID);
    int start(int taskID, void* metaData, int kernelID);
    int wait(uint64_t time);
    queue<int> get_finished_kernel();
    queue<int> execute_all_kernel();

    int parse_metaData(void *metaData);

private:

    int push_kernel(uint64_t taskID, uint64_t kernelID, map<int, bool>input_blk_list);


    Processor processor_;
    Memory ram_;
    future<int> last_task_;
    queue<int> finished_kernel_l; ///< 已经执行完成的任务ID
    list<kernel_info> kernel_list; ///< 发送到设备执行的任务，list每个元素对应一个任务，每个任务由多个block组成
    addr_manager addrManager_;
    map<int, context_info> contextList_;
};




