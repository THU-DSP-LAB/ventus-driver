
#pragma once
#include <cstdint>

uint64_t aligned_size(uint64_t size, uint64_t align_block);
bool is_aligned(uint64_t addr, uint64_t align_block);

#define BLOCK_SIZE 4096
