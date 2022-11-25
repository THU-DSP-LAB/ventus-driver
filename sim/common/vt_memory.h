#pragma once

#include <stdint.h>

namespace ventus {
class RAM {
public:
    RAM(uint32_t page_size);
    ~RAM();

    void clear();

    uint64_t size() const;
    void read(void *data, uint64_t addr, uint64_t size);
    void write(const void *data, uint64_t addr, uint64_t size);
    int allocate(uint64_t size, uint64_t *dev_addr);
    int release(uint64_t *dev_addr);

private:
    uint32_t page_size;
};
}