#include <algorithm>
#include <iostream>
#include <numeric>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 21: Fractal Art ---
You find a program trying to generate some art. It uses a strange process that involves repeatedly enhancing the detail of an image through a set of
rules.

The image consists of a two-dimensional square grid of pixels that are either on (#) or off (.). The program always begins with this pattern:
.#.
..#
###

Because the pattern is both 3 pixels wide and 3 pixels tall, it is said to have a size of 3.

Then, the program repeats the following process:
    - If the size is evenly divisible by 2, break the pixels up into 2x2 squares, and convert each 2x2 square into a 3x3 square by following the
      corresponding enhancement rule.
    - Otherwise, the size is evenly divisible by 3; break the pixels up into 3x3 squares, and convert each 3x3 square into a 4x4 square by following
      the corresponding enhancement rule.

Because each square of pixels is replaced by a larger one, the image gains pixels and so its size increases.

The artist's book of enhancement rules is nearby (your puzzle input); however, it seems to be missing rules. The artist explains that sometimes, one
must rotate or flip the input pattern to find a match. (Never rotate or flip the output pattern, though.) Each pattern is written concisely: rows are
listed as single units, ordered top-down, and separated by slashes. For example, the following rules correspond to the adjacent patterns:
../.#  =  ..
          .#

                .#.
.#./..#/###  =  ..#
                ###

                        #..#
#..#/..../#..#/.##.  =  ....
                        #..#
                        .##.

When searching for a rule to use, rotate and flip the pattern as necessary. For example, all of the following patterns match the same rule:
.#.   .#.   #..   ###
..#   #..   #.#   ..#
###   ###   ##.   .#.

Suppose the book contained the following two rules:
../.# => ##./#../...
.#./..#/### => #..#/..../..../#..#

As before, the program begins with this pattern:
.#.
..#
###

The size of the grid (3) is not divisible by 2, but it is divisible by 3. It divides evenly into a single square; the square matches the second rule,
which produces:
#..#
....
....
#..#

The size of this enhanced grid (4) is evenly divisible by 2, so that rule is used. It divides evenly into four squares:
#.|.#
..|..
--+--
..|..
#.|.#

Each of these squares matches the same rule (../.# => ##./#../...), three of which require some flipping and rotation to line up with the rule. The
output for the rule is the same in all four cases:
##.|##.
#..|#..
...|...
---+---
##.|##.
#..|#..
...|...

Finally, the squares are joined into a new grid:
##.##.
#..#..
......
##.##.
#..#..
......

Thus, after 2 iterations, the grid contains 12 pixels that are on.

How many pixels stay on after 5 iterations?
*/

using Block = std::vector<std::string>;

std::string block_to_key(const Block& block) {
    const int size = block.size();
    std::string key;

    for (int i = 0; i < size; i++) {
        key += block[i];

        if (i != size - 1) {
            key += '/';
        }
    }
    return key;
}

Block rotate(const Block& block) {
    const int size = block.size();
    Block res(size, std::string(size, ' '));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            res[j][size - 1 - i] = block[i][j];
        }
    }
    return res;
}

Block get_rule_block(const std::unordered_map<std::string, Block>& hash, const Block& block) {
    Block temp = block;

    for (int i = 0; i < 4; i++) {
        std::string key = block_to_key(temp);

        if (hash.contains(key)) {
            return hash.at(key);
        }
        temp = rotate(temp);
    }
    temp = block;

    for (std::string& row : temp) {
        std::ranges::reverse(row);
    }
    for (int i = 0; i < 4; i++) {
        std::string key = block_to_key(temp);

        if (hash.contains(key)) {
            return hash.at(key);
        }
        temp = rotate(temp);
    }
    temp = block;
    std::ranges::reverse(temp);

    for (int i = 0; i < 4; i++) {
        std::string key = block_to_key(temp);

        if (hash.contains(key)) {
            return hash.at(key);
        }
        temp = rotate(temp);
    }
    return {};
}

Block parse_block(const std::string& str) {
    Block block;
    std::string line;
    std::stringstream ss(str);

    while (getline(ss, line, '/')) {
        block.push_back(line);
    }
    return block;
}

int part1(const int iterations = 5) {
    const std::string art_s = ".#./..#/###";
    std::unordered_map<std::string, Block> hash;
    std::string line;
    std::stringstream file(input21);
    Block art = parse_block(art_s);

    while (getline(file, line)) {
        std::string lhs, rhs;
        (std::stringstream(line) >> lhs).ignore(4) >> rhs;
        hash[lhs] = parse_block(rhs);
    }
    for (int it = 0; it < iterations; it++) {
        const int size = art.size(), block_size = size % 2 == 0 ? 2 : 3, blocks = size / block_size;
        std::vector parts(blocks, std::vector<Block>(blocks));

        for (int i = 0; i < blocks; i++) {
            for (int j = 0; j < blocks; j++) {
                Block block(block_size);

                for (int r = 0; r < block_size; r++) {
                    block[r] = art[i * block_size + r].substr(j * block_size, block_size);
                }
                parts[i][j] = get_rule_block(hash, block);
            }
        }
        int new_block_size = parts[0][0].size();
        Block new_art(blocks * new_block_size, std::string(blocks * new_block_size, ' '));

        for (int bi = 0; bi < blocks; bi++) {
            for (int bj = 0; bj < blocks; bj++) {
                for (int r = 0; r < new_block_size; r++) {
                    for (int c = 0; c < new_block_size; c++) {
                        new_art[bi * new_block_size + r][bj * new_block_size + c] = parts[bi][bj][r][c];
                    }
                }
            }
        }
        art = std::move(new_art);
    }
    return std::transform_reduce(art.begin(), art.end(), 0, std::plus(), [](const std::string& str) -> int { return std::ranges::count(str, '#'); });
}

/*
--- Part Two ---
How many pixels stay on after 18 iterations?
*/

int part2() { return part1(18); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
