#include "vt_memory.h"
#include <iostream>
#include <list>

int main(){
    Memory mem(4096ull * 64);
    auto root = mem.createRootPageTable();
    printf("Root: 0x%016lx\n", root);
    mem.allocateMemory(root, 0x4000000000ull, 4096ull * 16);
    for(auto &block: * mem.pmm->blocks){
        printf("[0x%016lx - 0x%016lx)\n", block.addr, block.addr + block.size);
    }
    uint32_t x[4]{0x76543210, 0xfedcba98, 0xbbbbaaaa, 0xddddcccc};
    uint64_t y;
    mem.writeDataVirtual(root, 0x4000000000ull, 4*sizeof(uint64_t), x);
    mem.readDataVirtual(root, 0x4000000004ull, sizeof(uint64_t), &y);
    printf("%016lx\n", y);
    mem.allocateMemory(root, 0x2000000000ull, 4096ull * 8);
    mem.writeDataVirtual(root, 0x2000000000ull, 4*sizeof(uint64_t), x);
    mem.readDataVirtual(root, 0x2000000008ull, sizeof(uint64_t), &y);
    printf("%016lx\n", y);
    mem.releaseMemory(root, 0x4000000000ull);
    mem.cleanPageTable(root);
    for(auto &block: * mem.pmm->blocks){
        printf("[0x%016lx - 0x%016lx)\n", block.addr, block.addr + block.size);
    }
    mem.cleanTask(root);
    printf("after clean\n");
    for(auto &block: * mem.pmm->blocks){
        printf("[0x%016lx - 0x%016lx)\n", block.addr, block.addr + block.size);
    }
    return 0;
}