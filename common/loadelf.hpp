#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <spdlog/spdlog.h>
#include <vector>

// 解析ELF后返回的需要分配的内存块信息
typedef struct MemBlock {
    uint64_t vaddr;            // 内存块的起始地址
    size_t memsz;              // 内存块所需分配大小
    std::vector<uint8_t> data; // 此内存块的初始化数据
    // 若(filesz=)data.size < memsz则需要补0到memsz大小
} MemBlock;

// ELF section data extracted by name (e.g. ".text").
//
// Notes:
// - vaddr is the section VMA (sh_addr), in bytes.
// - data contains the raw section bytes exactly as stored in the ELF file
//   (i.e. data.size() should equal sh_size for PROGBITS sections).
// - This helper is intended for tooling (e.g. decoder/SBT front-end). It does
//   not perform any relocation processing.
typedef struct ElfSection {
    uint64_t vaddr;
    std::vector<uint8_t> data;
} ElfSection;

std::vector<MemBlock> get_data_from_elf(const char *filename, std::shared_ptr<spdlog::logger> logger);

std::optional<ElfSection>
get_section_from_elf(const char *filename, const char *section_name, std::shared_ptr<spdlog::logger> logger);
