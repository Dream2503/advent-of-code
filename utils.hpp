#pragma once
#include <algorithm>
#include <array>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstring>
#include <format>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <openssl/evp.h>
#include <print>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

inline std::string md5_hash(const std::string& input) noexcept {
    std::array<uint8_t, 0x10> digest;
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), nullptr);
    EVP_DigestUpdate(ctx, input.c_str(), input.size());
    EVP_DigestFinal_ex(ctx, digest.begin(), nullptr);
    EVP_MD_CTX_free(ctx);
    std::stringstream ss;

    for (const int value : digest) {
        ss << std::hex << std::setw(2) << std::setfill('0') << value;
    }
    return ss.str();
}

// MD5 hash function algo - https://en.wikipedia.org/wiki/MD5
inline std::string md5_hash(const std::string& input, [[maybe_unused]] const bool enable) noexcept {
    constexpr std::array<uint32_t, 0x40> s = {0x07, 0x0c, 0x11, 0x16, 0x07, 0x0c, 0x11, 0x16, 0x07, 0x0c, 0x11, 0x16, 0x07, 0x0c, 0x11, 0x16,
                                              0x05, 0x09, 0x0e, 0x14, 0x05, 0x09, 0x0e, 0x14, 0x05, 0x09, 0x0e, 0x14, 0x05, 0x09, 0x0e, 0x14,
                                              0x04, 0x0b, 0x10, 0x17, 0x04, 0x0b, 0x10, 0x17, 0x04, 0x0b, 0x10, 0x17, 0x04, 0x0b, 0x10, 0x17,
                                              0x06, 0x0a, 0x0f, 0x15, 0x06, 0x0a, 0x0f, 0x15, 0x06, 0x0a, 0x0f, 0x15, 0x06, 0x0a, 0x0f, 0x15};
    constexpr std::array<uint32_t, 0x40> K = {
        0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee, 0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501, 0x698098d8, 0x8b44f7af, 0xffff5bb1,
        0x895cd7be, 0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821, 0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa, 0xd62f105d, 0x02441453,
        0xd8a1e681, 0xe7d3fbc8, 0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed, 0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a, 0xfffa3942,
        0x8771f681, 0x6d9d6122, 0xfde5380c, 0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70, 0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
        0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665, 0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039, 0x655b59c3, 0x8f0ccc92, 0xffeff47d,
        0x85845dd1, 0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1, 0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391};
    uint32_t a0 = 0x67452301, b0 = 0xefcdab89, c0 = 0x98badcfe, d0 = 0x10325476;
    const uint64_t bit_len = input.size() * 0x8;
    std::array<uint8_t, 0x10> digest = {};
    std::vector<uint8_t> message(input.begin(), input.end());
    std::stringstream ss;
    message.push_back(0x80);

    while (message.size() % 0x40 != 0x38) {
        message.push_back(0x00);
    }
    for (int i = 0x0; i < 0x8; i++) {
        message.push_back(bit_len >> (0x8 * i) & 0xff);
    }
    const uint64_t size = message.size();

    for (size_t offset = 0x0; offset < size; offset += 0x40) {
        uint32_t A = a0, B = b0, C = c0, D = d0;
        std::array<uint32_t, 0x10> M;

        for (int j = 0; j < 0x10; j++) {
            M[j] = static_cast<uint32_t>(message[offset + j * 0x4 + 0x0]) | static_cast<uint32_t>(message[offset + j * 0x4 + 0x1]) << 0x8 |
                static_cast<uint32_t>(message[offset + j * 0x4 + 0x2]) << 0x10 | static_cast<uint32_t>(message[offset + j * 0x4 + 0x3]) << 0x18;
        }
        for (uint32_t i = 0x0; i < 0x40; i++) {
            uint32_t F, g;

            if (i < 0x10) {
                F = (B & C) | (~B & D);
                g = i;
            } else if (i < 0x20) {
                F = (D & B) | (~D & C);
                g = (0x5 * i + 1) % 0x10;
            } else if (i < 0x30) {
                F = B ^ C ^ D;
                g = (0x3 * i + 0x5) % 0x10;
            } else {
                F = C ^ (B | ~D);
                g = 0x7 * i % 0x10;
            }
            F += A + K[i] + M[g];
            A = D;
            D = C;
            C = B;
            B += F << s[i] | F >> (0x20 - s[i]);
        }
        a0 += A;
        b0 += B;
        c0 += C;
        d0 += D;
    }
    std::memcpy(&digest[0x0], &a0, 0x4);
    std::memcpy(&digest[0x4], &b0, 0x4);
    std::memcpy(&digest[0x8], &c0, 0x4);
    std::memcpy(&digest[0xc], &d0, 0x4);

    for (const int value : digest) {
        ss << std::hex << std::setw(0x2) << std::setfill('0') << value;
    }
    return ss.str();
}

inline std::string knot_hash(const std::string& input) noexcept {
    int i = 0x0, skip = 0x0, k = 0x0;
    std::array<uint8_t, 0x100> list, temp;
    std::array<uint8_t, 0x10> dense_hash;
    std::vector<uint8_t> jumps;
    std::stringstream ss;
    std::iota(list.begin(), list.end(), 0x0);
    jumps.reserve(input.length() + 0x5);

    for (const uint8_t ch : input) {
        jumps.push_back(ch);
    }
    for (const uint8_t element : {0x11, 0x1f, 0x49, 0x2f, 0x17}) {
        jumps.push_back(element);
    }
    for (int j = 0x0; j < 0x40; j++) {
        for (const int jump : jumps) {
            for (k = 0x0; k < jump; k++) {
                temp[k] = list[(i + k) % 0x100];
            }
            std::reverse(temp.begin(), temp.begin() + jump);

            for (k = 0x0; k < jump; k++) {
                list[(i + k) % 0x100] = temp[k];
            }
            i = (i + jump + skip++) % 0x100;
        }
    }
    for (int j = 0; j < 0x10; j++) {
        dense_hash[j] = list[k++];

        for (int _ = 1; _ < 0x10; _++) {
            dense_hash[j] ^= list[k++];
        }
    }
    for (const int value : dense_hash) {
        ss << std::hex << std::setw(0x2) << std::setfill('0') << value;
    }
    return ss.str();
}

// FNV-1a hash function algo - https://en.wikipedia.org/wiki/Fowler–Noll–Vo_hash_function
constexpr size_t fnv1a_hash_bytes(const uint8_t* data, const size_t size) noexcept {
    size_t hash = 0xcbf29ce484222325;

    for (size_t i = 0; i < size; i++) {
        hash = (hash ^ static_cast<size_t>(data[i])) * 0x100000001b3;
    }
    return hash;
}

// Boost Hash Combine algo - https://www.boost.org/doc/libs/1_89_0/libs/container_hash/doc/html/hash.html#notes_hash_combine
template <typename T, typename U>
struct std::hash<std::pair<T, U>> {
    size_t operator()(const std::pair<T, U>& pair) const noexcept {
        const size_t hash1 = std::hash<T>()(pair.first), hash2 = std::hash<U>()(pair.second);
        return hash1 ^ ((hash2 + 0x9e3779b97f4a7c15) + (hash1 << 6) + (hash1 >> 2));
    }
};

template <typename T>
struct std::hash<std::vector<T>> {
    size_t operator()(const std::vector<T>& vec) const noexcept {
        return fnv1a_hash_bytes(reinterpret_cast<const uint8_t*>(vec.data()), vec.size() * sizeof(T));
    }
};

template <typename Enum, int size>
requires std::is_enum_v<Enum>
constexpr std::array<Enum, size> enum_to_array() {
    std::array<Enum, size> values;

    for (int i = 0; i < size; i++) {
        values[i] = static_cast<Enum>(i);
    }
    return values;
}

template <typename T>
struct Vec2 {
    T x, y;

    struct lexicographical_comparator {
        constexpr bool operator()(const Vec2& lhs, const Vec2& rhs) const noexcept { return lhs.lexicographically_less(rhs); }
    };

    constexpr Vec2() = default;
    constexpr Vec2(const T& value) : x(value), y(value) {}
    constexpr Vec2(const T& x, const T& y) : x(x), y(y) {}

    constexpr bool operator==(const Vec2& vec2) const noexcept { return x == vec2.x && y == vec2.y; }
    constexpr bool operator==(const T& value) const noexcept { return x == value && y == value; }
    constexpr bool operator>=(const T& value) const noexcept { return x >= value && y >= value; }

    template <typename U>
    constexpr auto operator+(const Vec2<U>& vec2) const noexcept -> Vec2<decltype(x + vec2.x)> {
        return {x + vec2.x, y + vec2.y};
    }

    template <typename U>
    constexpr auto operator-(const Vec2<U>& vec2) const noexcept -> Vec2<decltype(x - vec2.x)> {
        return {x - vec2.x, y - vec2.y};
    }


    template <typename U>
    constexpr auto operator/(const U& value) const noexcept -> Vec2<decltype(x / value)> {
        return {x / value, y / value};
    }

    constexpr Vec2& operator+=(const Vec2& vec2) noexcept {
        x += vec2.x;
        y += vec2.y;
        return *this;
    }

    constexpr Vec2& operator+=(const T& value) noexcept {
        x += value;
        y += value;
        return *this;
    }

    constexpr Vec2& operator-=(const T& value) noexcept {
        x -= value;
        y -= value;
        return *this;
    }

    template <typename U>
    constexpr bool operator<(const Vec2<U>& vec2) const noexcept {
        return x < vec2.x && y < vec2.y;
    }

    friend std::ostream& operator<<(std::ostream& out, const Vec2& vec2) { return out << vec2.x << ',' << vec2.y; }

    bool lexicographically_less(const Vec2& vec2) const noexcept { return x < vec2.x || (x == vec2.x && y < vec2.y); }

    template <typename U>
    constexpr auto manhattan_distance(const Vec2<U> vec2) const noexcept {
        auto difference = *this - vec2;
        return std::abs(difference.x) + std::abs(difference.y);
    }

    template <typename U>
    constexpr double euclidean_distance(const Vec2<U> vec2) const noexcept {
        return std::sqrt(std::pow(x - vec2.x, 2) + std::pow(y - vec2.y, 2));
    }
};

template <typename T>
struct std::hash<Vec2<T>> {
    size_t operator()(const Vec2<T>& vec2) const noexcept { return std::hash<std::pair<T, T>>()({vec2.x, vec2.y}); }
};

template <typename T>
struct std::formatter<Vec2<T>> {
    constexpr auto parse(std::format_parse_context& ctx) { return ctx.begin(); }
    auto format(const Vec2<T>& vec2, std::format_context& ctx) const { return std::format_to(ctx.out(), "{},{}", vec2.x, vec2.y); }
};


constexpr std::initializer_list<Vec2<int>> directions_basic = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
constexpr std::initializer_list<Vec2<int>> directions_complete = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

template <typename T>
struct Vec3 {
    T x, y, z;

    constexpr Vec3() = default;
    constexpr Vec3(const T& value) : x(value), y(value), z(value) {}
    constexpr Vec3(const T& x, const T& y, const T& z) : x(x), y(y), z(z) {}

    constexpr bool operator==(const Vec3& vec3) const noexcept { return x == vec3.x && y == vec3.y && z == vec3.z; }
    constexpr bool operator==(const T& value) const noexcept { return x == value && y == value && z == value; }
    constexpr bool operator>=(const T& value) const noexcept { return x >= value && y >= value && z >= value; }

    template <typename U>
    constexpr auto operator+(const Vec3<U>& vec3) const noexcept -> Vec3<decltype(x + vec3.x)> {
        return Vec3(x + vec3.x, y + vec3.y, z + vec3.z);
    }

    template <typename U>
    constexpr auto operator-(const Vec3<U>& vec3) const noexcept -> Vec3<decltype(x - vec3.x)> {
        return Vec3(x - vec3.x, y - vec3.y, z - vec3.z);
    }

    template <typename U>
    constexpr auto operator*(const U value) const noexcept -> Vec3<decltype(x * value)> {
        return Vec3(x * value, y * value, z * value);
    }

    constexpr Vec3& operator+=(const Vec3& vec3) noexcept {
        x += vec3.x;
        y += vec3.y;
        z += vec3.z;
        return *this;
    }

    template <typename U>
    constexpr bool operator<(const Vec3<U>& vec3) const noexcept {
        return x < vec3.x && y < vec3.y && z < vec3.z;
    }

    template <typename U>
    constexpr auto manhattan_distance(const Vec3<U> vec3) const noexcept -> decltype(x - vec3.x) {
        auto difference = *this - vec3;
        return std::abs(difference.x) + std::abs(difference.y) + std::abs(difference.z);
    }
};

template <typename T>
struct std::hash<Vec3<T>> {
    size_t operator()(const Vec3<T>& vec3) const noexcept {
        return std::hash<std::pair<size_t, T>>()({std::hash<std::pair<T, T>>()({vec3.x, vec3.y}), vec3.z});
    }
};

template <typename T>
struct Vec4 {
    T x, y, z, t;

    template <typename U>
    constexpr auto operator-(const Vec4<U>& vec4) const noexcept -> Vec4<decltype(x - vec4.x)> {
        return Vec4(x - vec4.x, y - vec4.y, z - vec4.z, t - vec4.t);
    }

    template <typename U>
    constexpr auto manhattan_distance(const Vec4<U> vec4) const noexcept -> decltype(x - vec4.x) {
        auto difference = *this - vec4;
        return std::abs(difference.x) + std::abs(difference.y) + std::abs(difference.z) + std::abs(difference.t);
    }
};

template <typename T>
struct std::hash<Vec4<T>> {
    size_t operator()(const Vec4<T>& vec4) const noexcept {
        return std::hash<std::pair<Vec2<T>, Vec2<T>>>()({Vec2(vec4.x, vec4.y), Vec2(vec4.z, vec4.t)});
    }
};

class DSU {
    int components;
    std::vector<int> parent, rank, size;

public:
    explicit DSU(const int n) : components(n), parent(n), rank(n, 0), size(n, 1) { std::iota(parent.begin(), parent.end(), 0); }

    constexpr int find(const int x) noexcept {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) {
            return false;
        }
        if (rank[a] < rank[b]) {
            parent[a] = b;
            size[b] += size[a];
        } else if (rank[a] > rank[b]) {
            parent[b] = a;
            size[a] += size[b];
        } else {
            parent[b] = a;
            ++rank[a];
            size[a] += size[b];
        }
        components--;
        return true;
    }

    int size_of(const int x) { return size[find(x)]; }

    int get_components() const { return components; }
};

namespace std {
    template <typename T>
    constexpr Vec2<T> min(const Vec2<T>& lhs, const Vec2<T>& rhs) noexcept {
        return {std::min(lhs.x, rhs.x), std::min(lhs.y, rhs.y)};
    }

    template <typename T>
    constexpr Vec2<T> max(const Vec2<T>& lhs, const Vec2<T>& rhs) noexcept {
        return {std::max(lhs.x, rhs.x), std::max(lhs.y, rhs.y)};
    }

    template <typename T>
    constexpr Vec3<T> abs(const Vec3<T>& vec3) noexcept {
        return {std::abs(vec3.x), std::abs(vec3.y), std::abs(vec3.z)};
    }

    template <typename T>
    constexpr T min(const Vec3<T>& vec3) noexcept {
        return std::min({vec3.x, vec3.y, vec3.z});
    }

    template <typename T>
    constexpr Vec3<T> min(const Vec3<T>& lhs, const Vec3<T>& rhs) noexcept {
        return {std::min(lhs.x, rhs.x), std::min(lhs.y, rhs.y), std::min(lhs.z, rhs.z)};
    }

    template <typename T>
    constexpr T max(const Vec3<T>& vec3) noexcept {
        return std::max({vec3.x, vec3.y, vec3.z});
    }

    template <typename T>
    constexpr Vec3<T> max(const Vec3<T>& lhs, const Vec3<T>& rhs) noexcept {
        return {std::max(lhs.x, rhs.x), std::max(lhs.y, rhs.y), std::max(lhs.z, rhs.z)};
    }
} // namespace std
