#include "processor.h"
#include "vt_memory.h"
#include <future>

using namespace ventus;

#define INSTSIZE64
#ifdef INSTSIZE64
    typedef uint64_t inst_len;
#else
    typedef uint32_t inst_len;
#endif

class vt_device {
public:
    vt_device(RAM *ram);
    ~vt_device();
    int alloc_local_mem(inst_len size, inst_len *dev_maddr);
    int free_local_mem(inst_len *dev_maddr);
    int upload(const void *src_data_addr, inst_len dest_addr, uint64_t size, inst_len src_offset);
    int download(void *dest_data_addr, inst_len src_addr, uint64_t size, inst_len dest_offset);
    int start();
    int wait(uint64_t time);


private:
    Processor processor_;
    RAM ram_;
    std::future<void> last_task_;
};

class vt_buffer{
public:
    vt_buffer(uint64_t size, vt_device* device)
      : size_(size),
        device_(device) {
        auto aligned_asize = aligned_size(size, BLOCK_SIZE); //返回一个CACHE_BLOCK_SIZE的大小
        data_ = malloc(aligned_asize);
    }
    ~vt_buffer();
    void* data() const;
    uint64_t size() const;
    vt_device* device() const;
private:
    vt_device* device_;
    void *data_;
    uint64_t size_;
}