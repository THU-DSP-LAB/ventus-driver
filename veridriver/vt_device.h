#include <processor.h>
#include <mem.h>

using namespace ventus;

// #define INSTSIZE64
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
    int free_local_mem(inst_len dev_maddr);
    int upload(const void *src, inst_len dest_addr, inst_len size, inst_len src_offset);
    int download(void *dest, inst_len src_addr, inst_len size, inst_len dest_offset);
    int start();
    int wait(uint64_t time);


private:
    Processor processor_;
    RAM ram_;
};

class vt_buffer{
public:

private:
    vt_device* device_;
    void *data;
}