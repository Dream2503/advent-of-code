#pragma once
#include <iomanip>
#include <openssl/evp.h>
#include <openssl/md5.h>

inline std::string md5(const std::string& input) noexcept {
    uint8_t digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), nullptr);
    EVP_DigestUpdate(ctx, input.c_str(), input.size());
    EVP_DigestFinal_ex(ctx, digest, nullptr);
    EVP_MD_CTX_free(ctx);
    std::stringstream ss;

    for (uint8_t i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(digest[i]);
    }
    return ss.str();
}

constexpr size_t FNV_offset_basic = 0xcbf29ce484222325;
constexpr size_t FNV_prime = 0x00000100000001b3;

// FNV-1a hash function algo & impl - https://en.wikipedia.org/wiki/Fowler–Noll–Vo_hash_function
constexpr size_t fnv1a_hash_bytes(const uint8_t* data, const size_t size) noexcept {
    size_t hash = FNV_offset_basic;

    for (size_t i = 0; i < size; i++) {
        hash ^= static_cast<size_t>(data[i]);
        hash *= FNV_prime;
    }
    return hash;
}

template <typename T, typename U>
struct std::hash<std::pair<T, U>> {
    size_t operator()(const std::pair<T, U>& pair) const noexcept {
        size_t hash = FNV_offset_basic ^ std::hash<T>()(pair.first);
        hash = hash * FNV_prime ^ std::hash<U>()(pair.second);
        return hash * FNV_prime;
    }
};

template <typename T>
struct std::hash<std::vector<T>> {
    size_t operator()(const std::vector<int>& vec) const noexcept {
        return fnv1a_hash_bytes(reinterpret_cast<const uint8_t*>(vec.data()), vec.size() * sizeof(T));
    }
};
