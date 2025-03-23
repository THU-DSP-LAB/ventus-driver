#pragma once

#include <cstdint>
#include <memory>
#include <spdlog/spdlog.h>
#include <vector>

// 解析ELF后返回的需要分配的内存块信息
typedef struct MemBlock {
    uint64_t vaddr;            // 内存块的起始地址
    size_t memsz;              // 内存块所需分配大小
    std::vector<uint8_t> data; // 此内存块的初始化数据
    // 若(filesz=)data.size < memsz则需要补0到memsz大小
} MemBlock;

std::vector<MemBlock> get_data_from_elf(const char *filename, std::shared_ptr<spdlog::logger> logger);
