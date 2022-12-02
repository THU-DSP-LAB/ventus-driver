/**
 * @file vt_device.h
 * @brief 与驱动提供的API对接的类的声明
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
 * </table>
 */
#include "processor.h"
#include "controller.cpp"
#include "vt_utils.h"
#include <future>
#include <list>
#include <queue>
#include <vector>
#include <unordered_map>

using namespace ventus;
using namespace std;
//These macro is defined as test

#define BLOCK_SIZE  64

class vt_device {
public:
    vt_device()
        :ram_(RAM_RANGE),
         processor_(){
            processor_.attach_ram(&ram_);
            list<unordered_map<int, bool>> task_by_block_l;
            rootPage = -1;
        }
    ~vt_device(){
        if(last_task_.valid())
            last_task_.wait();
    }
    /**
     * @brief 为GPU分配内存空间，返回指向根页表的指针
     * @param  size              
     * @param  dev_maddr         
     * @return int 
     */
    int alloc_local_mem(inst_len size, inst_len *dev_maddr);
    /**
     * @brief 释放分配的空间，释放根页表所指向的空间
     * @param  dev_maddr    指向根页表的指针   
     * @return int 
     */
    int free_local_mem(inst_len *dev_maddr);
    /**
     * @brief 将buffer写入到分配给GPU的memory中
     * @param  root              根页表     
     * @param  dest_addr         GPU的memory，虚拟地址
     * @param  size              大小
     * @param  src_offset        偏移量
     * @return int 
     */
    int upload( inst_len *root, 
                inst_len dest_addr, 
                uint64_t size, 
                inst_len src_offset,
                uint64_t *data
            );
    /**
     * @brief 
     * @param  root              根页表
     * @param  dest_data_addr    要读取的数据地址，虚拟地址
     * @param  src_addr          读出后要放置的位置
     * @param  size              大小
     * @param  dest_offset       偏移量
     * @return int 
     */
    int download(   uint64_t *root, 
                    uint64_t dest_data_addr,
                    void *src_addr, 
                    uint64_t size, 
                    uint64_t dest_offset
                );
    int start(host_port_t* input_sig, int num_block);
    int wait(uint64_t time);


private:
    Processor processor_;
    Memory ram_;
    future<int> last_task_;
    list<unordered_map<int, bool>> task_by_block_l; ///< list每个元素对应一个任务，每个任务由多个block组成
    // uint64_t rootPage; ///< 根页表
};

class vt_buffer{
public:
    vt_buffer(uint64_t size, vt_device* device)
      : size_(size),
        device_(device) {
        auto aligned_asize = aligned_size(size, BLOCK_SIZE); //返回一个CACHE_BLOCK_SIZE的大小
        data_ = malloc(aligned_asize);
    }
    ~vt_buffer(){
        if(data_){
            free(data_);
        }
    }
    void* data() const;
    uint64_t size() const;
    vt_device* device() const;
private:
    vt_device* device_;
    void *data_;
    uint64_t size_;
};