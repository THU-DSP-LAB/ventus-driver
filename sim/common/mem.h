#pragma once

#include <cstdint>
namespace ventus {
class RAM {
public:
    RAM(uint32_t page_size);
    ~RAM();

    void clear();

    uint64_t size() const;
    void read(void *data, uint64_t addr, uint64_t size);
    void write(const void *data, uint64_t addr, uint64_t size);
}
}