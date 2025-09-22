#include <iostream>
#include <unordered_set>
#include "inputs.hpp"

/*
--- Day 3: Perfectly Spherical Houses in a Vacuum ---
Santa is delivering presents to an infinite two-dimensional grid of houses.

He begins by delivering a present to the house at his starting location, and then an elf at the North Pole calls him via radio and tells him where to
move next. Moves are always exactly one house to the north (^), south (v), east (>), or west (<). After each move, he delivers another present to the
house at his new location.

However, the elf back at the north pole has had a little too much eggnog, and so his directions are a little off, and Santa ends up visiting some
houses more than once. How many houses receive at least one present?

For example:
    - > delivers presents to 2 houses: one at the starting location, and one to the east.
    - ^>v< delivers presents to 4 houses in a square, including twice to the house at his starting/ending location.
    - ^v^v^v^v^v delivers a bunch of presents to some very lucky children at only 2 houses.
*/

constexpr auto hash = [](const std::pair<int, int>& p) -> int { return p.first ^ p.second << 1; };
constexpr auto eq = [](const std::pair<int, int>& a, const std::pair<int, int>& b) -> bool { return a.first == b.first && a.second == b.second; };

void update(std::unordered_set<std::pair<int, int>, decltype(hash), decltype(eq)>& seen, const char ch, int& x, int& y) {
    switch (ch) {
    case '^':
        y++;
        break;

    case 'v':
        y--;
        break;

    case '>':
        x++;
        break;

    case '<':
        x--;
        break;

    default:
        break;
    }
    seen.emplace(x, y);
}

int part1() {
    int x = 0, y = 0, i = 0;
    std::unordered_set<std::pair<int, int>, decltype(hash), decltype(eq)> seen(32, hash, eq);
    seen.emplace(x, y);

    while (input3[i]) {
        update(seen, input3[i++], x, y);
    }
    return seen.size();
}

/*
--- Part Two ---
The next year, to speed up the process, Santa creates a robot version of himself, Robo-Santa, to deliver presents with him.

Santa and Robo-Santa start at the same location (delivering two presents to the same starting house), then take turns moving based on instructions
from the elf, who is eggnoggedly reading from the same script as the previous year.

This year, how many houses receive at least one present?

For example:
    - ^v delivers presents to 3 houses, because Santa goes north, and then Robo-Santa goes south.
    - ^>v< now delivers presents to 3 houses, and Santa and Robo-Santa end up back where they started.
    - ^v^v^v^v^v now delivers presents to 11 houses, with Santa going one direction and Robo-Santa going the other.
*/

int part2() {
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, i = 0;
    std::unordered_set<std::pair<int, int>, decltype(hash), decltype(eq)> seen(32, hash, eq);
    seen.emplace(0, 0);

    while (input3[i]) {
        int& x = i % 2 ? x1 : x2;
        int& y = i % 2 ? y1 : y2;
        update(seen, input3[i++], x, y);
    }
    return seen.size();
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
