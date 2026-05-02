#pragma once

#include <algorithm>
#include <cctype>
#include <cerrno>
#include <cstdint>
#include <cstdlib>
#include <optional>
#include <string>

inline std::optional<bool> parse_bool(std::string str) {
    // transform to lowercase safely (unsigned char cast to avoid UB)
    std::transform(str.begin(), str.end(), str.begin(), [](char c) {
        return static_cast<char>(std::tolower(c));
    });
    if (str == "true" || str == "1" || str == "yes" || str == "on") return true;
    if (str == "false" || str == "0" || str == "no" || str == "off") return false;
    return std::nullopt;
}
inline std::optional<bool> parse_bool(const char *str) {
    if (str == nullptr) return std::nullopt;
    return parse_bool(std::string(str));
}

inline std::optional<uint64_t> parse_u64(const char *s) {
    if (!s || *s == '\0') return std::nullopt;

    // 手动处理二进制 0b/0B
    if (s[0] == '0' && (s[1] == 'b' || s[1] == 'B')) {
        const char *p = s + 2;
        if (*p == '\0') return std::nullopt;
        uint64_t v = 0;
        while (*p == '0' || *p == '1') {
            v = (v << 1) | (*p - '0');
            ++p;
        }
        if (*p != '\0') return std::nullopt;
        return v;
    }

    errno = 0;
    char *endp = nullptr;
    // base = 0 自动识别: 0x/0X -> 16, 前导0 -> 8, 否则 -> 10
    unsigned long long v = std::strtoull(s, &endp, 0);
    if (errno != 0 || endp == s || *endp != '\0') return std::nullopt;
    return static_cast<uint64_t>(v);
};
