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

int vt_device::start(){
    if(last_task_.valid()){
        last_task_.wait();
    }
    last_task_ = std::async(std::launch::async, [this]{
        processor_.run();
    });
    return 0;

}
int vt_device::wait(uint64_t time){
    if(!last_task_.valid())
        return 0;
    uint64_t timeout = time / 1000;
    std::chrono::seconds wait_time(1);
    for(;;){
        auto status = last_task_.wait_for(wait_time);
        if (status == std::future_status::ready || timeout-- == 0)
            break;
    }
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
