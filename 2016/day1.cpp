#include <iostream>
#include <sstream>
#include <unordered_set>
#include "inputs.hpp"

/*
--- Day 1: No Time for a Taxicab ---
Santa's sleigh uses a very high-precision clock to guide its movements, and the clock's oscillator is regulated by stars. Unfortunately, the stars
have been stolen... by the Easter Bunny. To save Christmas, Santa needs you to retrieve all fifty stars by December 25th.

Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar; the second puzzle is unlocked when you
complete the first. Each puzzle grants one star. Good luck!

You're airdropped near Easter Bunny Headquarters in a city somewhere. "Near", unfortunately, is as close as you can get - the instructions on the
Easter Bunny Recruiting Document the Elves intercepted start here, and nobody had time to work them out further.

The Document indicates that you should start at the given coordinates (where you just landed) and face North. Then, follow the provided sequence:
either turn left (L) or right (R) 90 degrees, then walk forward the given number of blocks, ending at a new intersection.

There's no time to follow such ridiculous instructions on foot, though, so you take a moment and work out the destination. Given that you can only
walk on the street grid of the city, how far is the shortest path to the destination?

For example:
    - Following R2, L3 leaves you 2 blocks East and 3 blocks North, or 5 blocks away.
    - R2, R2, R2 leaves you 2 blocks due South of your starting position, which is 2 blocks away.
    - R5, L5, R5, R3 leaves you 12 blocks away.

How many blocks away is Easter Bunny HQ?
*/

template <>
struct std::hash<std::pair<int, int>> {
    size_t operator()(const std::pair<int, int>& pair) const noexcept {
        size_t hash = 31;
        hash = hash * 31 + std::hash<int>()(pair.first);
        hash = hash * 31 + std::hash<int>()(pair.second);
        return hash;
    }
};

bool update(std::unordered_set<std::pair<int, int>>& seen, int& i, int& j, const int destination_i, const int destination_j, const bool twice) {
    if (twice) {
        while (i != destination_i) {
            if (!seen.emplace(i, j).second) {
                return true;
            }
            i += destination_i > i ? 1 : -1;
        }
        while (j != destination_j) {
            if (!seen.emplace(i, j).second) {
                return true;
            }
            j += destination_j > j ? 1 : -1;
        }
    } else {
        i = destination_i;
        j = destination_j;
    }
    return false;
}

int part1(const bool twice = false) {
    enum Face { N, E, S, W } facing = N;
    int i = 0, j = 0;
    std::unordered_set<std::pair<int, int>> seen;
    std::stringstream ss(input1);

    while (!ss.eof()) {
        bool state = false;
        char direction;
        int distance;
        std::string delimiter;
        (ss >> direction >> distance).ignore(2);

        if (direction == 'R') {
            facing = static_cast<Face>((facing + 1) % 4);
        } else {
            facing = static_cast<Face>((facing + 3) % 4);
        }
        switch (facing) {
        case N:
            state = update(seen, i, j, i + distance, j, twice);
            break;

        case E:
            state = update(seen, i, j, i, j + distance, twice);
            break;

        case S:
            state = update(seen, i, j, i - distance, j, twice);
            break;

        case W:
            state = update(seen, i, j, i, j - distance, twice);
            break;
        }
        if (twice && state) {
            return std::abs(i) + std::abs(j);
        }
    }
    return std::abs(i) + std::abs(j);
}

/*
--- Part Two ---
Then, you notice the instructions continue on the back of the Recruiting Document. Easter Bunny HQ is actually at the first location you visit twice.

For example, if your instructions are R8, R4, R4, R8, the first location you visit twice is 4 blocks away, due East.

How many blocks away is the first location you visit twice?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
