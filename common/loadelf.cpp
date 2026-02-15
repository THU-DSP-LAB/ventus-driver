#include "loadelf.hpp"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fcntl.h>
#include <gelf.h>
#include <libelf.h>
#include <memory>
#include <spdlog/spdlog.h>
#include <unistd.h>

// 分析 ELF 文件，返回所有加载到内存中的段信息
std::vector<MemBlock> get_data_from_elf(const char *filename, std::shared_ptr<spdlog::logger> logger) {
    std::vector<MemBlock> blocks;

    // 初始化 libelf 库
    if (elf_version(EV_CURRENT) == EV_NONE) {
        logger->error("ELF: cannot initialize libelf");
        return std::vector<MemBlock>();
    }

    // 打开 ELF 文件
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        const char *errstr = strerrordesc_np(errno);
        logger->error("ELF: cannot open file '{}': {}", filename, errstr);
        return std::vector<MemBlock>();
    }

    // 开始 ELF 处理
    Elf *e = elf_begin(fd, ELF_C_READ, nullptr);
    if (!e) {
        logger->error("ELF: elf_begin failed: {}", elf_errmsg(-1));
        close(fd);
        return std::vector<MemBlock>();
    }

    // 读取 ELF 头部
    GElf_Ehdr ehdr;
    if (gelf_getehdr(e, &ehdr) == nullptr) {
        logger->error("ELF: gelf_getehdr failed: {}", elf_errmsg(-1));
        elf_end(e);
        close(fd);
        return std::vector<MemBlock>();
    }

    // 获取程序头表中的段数量
    size_t phnum = 0;
    if (elf_getphdrnum(e, &phnum) != 0) {
        logger->error("ELF: elf_getphdrnum failed: {}", elf_errmsg(-1));
        elf_end(e);
        close(fd);
        return std::vector<MemBlock>();
    }

    // 遍历所有程序头
    for (size_t i = 0; i < phnum; ++i) {
        GElf_Phdr phdr;
        if (gelf_getphdr(e, i, &phdr) != &phdr) {
            logger->error("ELF: gelf_getphdr header {} failed: {}", i, elf_errmsg(-1));
            return std::vector<MemBlock>();
        }

        // 只考虑加载段
        if (phdr.p_type == PT_LOAD) {
            MemBlock block;
            block.vaddr = phdr.p_vaddr;
            block.memsz = phdr.p_memsz;

            // 如果段在文件中有初始化数据，则读取数据
            if (phdr.p_filesz > 0) {
                block.data.resize(phdr.p_filesz);
                if (lseek(fd, phdr.p_offset, SEEK_SET) == -1) {
                    const char *errstr = strerrordesc_np(errno);
                    logger->error("ELF: failed seeking to offset {}: {}", phdr.p_offset, errstr);
                    return std::vector<MemBlock>();
                } else {
                    ssize_t bytesRead = read(fd, block.data.data(), phdr.p_filesz);
                    if (bytesRead != (ssize_t)phdr.p_filesz) {
                        const char *errstr = strerrordesc_np(errno);
                        logger->error(
                            "ELF: failed reading {} bytes data: {}", phdr.p_filesz, errstr
                        );
                        return std::vector<MemBlock>();
                    }
                }
            }
            blocks.push_back(block);
        }
    }

    elf_end(e);
    close(fd);
    return blocks;
}

std::optional<ElfSection> get_section_from_elf(
    const char *filename, const char *section_name, std::shared_ptr<spdlog::logger> logger
) {
    if (filename == nullptr || section_name == nullptr) return std::nullopt;

    if (elf_version(EV_CURRENT) == EV_NONE) {
        logger->error("ELF: cannot initialize libelf");
        return std::nullopt;
    }

    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        const char *errstr = strerrordesc_np(errno);
        logger->error("ELF: cannot open file '{}': {}", filename, errstr);
        return std::nullopt;
    }

    Elf *e = elf_begin(fd, ELF_C_READ, nullptr);
    if (!e) {
        logger->error("ELF: elf_begin failed: {}", elf_errmsg(-1));
        close(fd);
        return std::nullopt;
    }

    size_t shstrndx = 0;
    if (elf_getshdrstrndx(e, &shstrndx) != 0) {
        logger->error("ELF: elf_getshdrstrndx failed: {}", elf_errmsg(-1));
        elf_end(e);
        close(fd);
        return std::nullopt;
    }

    for (Elf_Scn *scn = elf_nextscn(e, nullptr); scn != nullptr; scn = elf_nextscn(e, scn)) {
        GElf_Shdr shdr;
        if (gelf_getshdr(scn, &shdr) == nullptr) {
            logger->error("ELF: gelf_getshdr failed: {}", elf_errmsg(-1));
            elf_end(e);
            close(fd);
            return std::nullopt;
        }

        const char *name = elf_strptr(e, shstrndx, shdr.sh_name);
        if (name == nullptr) continue;

        if (std::strcmp(name, section_name) != 0) continue;

        ElfSection out;
        out.vaddr = shdr.sh_addr;
        out.data.reserve(shdr.sh_size);

        for (Elf_Data *data = elf_getdata(scn, nullptr); data != nullptr; data = elf_getdata(scn, data)) {
            if (data->d_buf == nullptr || data->d_size == 0) continue;
            const auto *buf = static_cast<const uint8_t *>(data->d_buf);
            out.data.insert(out.data.end(), buf, buf + data->d_size);
        }

        if (out.data.size() != shdr.sh_size) {
            logger->warn(
                "ELF: section '{}' size mismatch: sh_size={} collected={}",
                section_name,
                static_cast<uint64_t>(shdr.sh_size),
                static_cast<uint64_t>(out.data.size())
            );
        }

        elf_end(e);
        close(fd);
        return out;
    }

    logger->error("ELF: section '{}' not found in '{}'", section_name, filename);
    elf_end(e);
    close(fd);
    return std::nullopt;
}
