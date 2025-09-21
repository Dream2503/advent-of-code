#include <iomanip>
#include <iostream>
#include <openssl/evp.h>
#include <openssl/md5.h>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 4: The Ideal Stocking Stuffer ---
Santa needs help mining some AdventCoins (very similar to bitcoins) to use as gifts for all the economically forward-thinking little girls and boys.

To do this, he needs to find MD5 hashes which, in hexadecimal, start with at least five zeroes. The input to the MD5 hash is some secret key (your
puzzle input, given below) followed by a number in decimal. To mine AdventCoins, you must find Santa the lowest positive number (no leading zeroes: 1,
2, 3, ...) that produces such a hash.

For example:
    - If your secret key is abcdef, the answer is 609043, because the MD5 hash of abcdef609043 starts with five zeroes (000001dbbfa...), and it is the
      lowest such number to do so.
    - If your secret key is pqrstuv, the lowest number it combines with to make an MD5 hash starting with five zeroes is 1048970; that is, the MD5
      hash of pqrstuv1048970 looks like 000006136ef....
*/

// Compute MD5 hash of a string and return hex representation
std::string md5(const std::string& input) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), nullptr);
    EVP_DigestUpdate(ctx, input.c_str(), input.size());
    EVP_DigestFinal_ex(ctx, digest, nullptr);
    EVP_MD_CTX_free(ctx);
    std::ostringstream oss;

    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(digest[i]);
    }
    return oss.str();
}

int part1() {
    int i = 1;

    while (true) {
        std::string hash = md5(input4 + std::to_string(i));

        if (hash.rfind("00000", 0) == 0) {
            return i;
        }
        i++;
    }
}

/*
--- Part Two ---
Now find one that starts with six zeroes.
*/

int part2() {
    int i = 1;

    while (true) {
        std::string hash = md5(input4 + std::to_string(i));

        if (hash.rfind("000000", 0) == 0) {
            return i;
        }
        i++;
    }
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
