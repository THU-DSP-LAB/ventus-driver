
#pragma once
#include <cstdint>

uint64_t aligned_size(uint64_t size, uint64_t align_block);
bool is_aligned(uint64_t addr, uint64_t align_block);

#define BLOCK_SIZE  4096
#define MAX_BLOCK   8
#define RAM_RANGE   (4096ull * 1024*1024) ///< 物理地址空间，4G bytes