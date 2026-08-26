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

void update(std::unordered_set<std::string>& seen, const char ch, int& x, int& y) {
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
    seen.emplace(std::to_string(x) + ',' + std::to_string(y));
}

int part1(const char* input) {
    int x = 0, y = 0, i = 0;
    std::unordered_set<std::string> seen;
    seen.emplace("0,0");

    while (input[i]) {
        update(seen, input[i++], x, y);
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

int part2(const char* input) {
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, i = 0;
    std::unordered_set<std::string> seen;
    seen.emplace("0,0");

    while (input[i]) {
        int& x = i % 2 ? x1 : x2;
        int& y = i % 2 ? y1 : y2;
        update(seen, input[i++], x, y);
    }
    return seen.size();
}

int main() {
    std::println("Part 1:");
    Executor::test(part1, ">", 2);
    Executor::test(part1, "^>v<", 4);
    Executor::test(part1, "^v^v^v^v^v", 2);
    Executor::run(part1, input3);

    std::println("Part 2:");
    Executor::test(part2, "^v", 3);
    Executor::test(part2, "^>v<", 3);
    Executor::test(part2, "^v^v^v^v^v", 11);
    Executor::run(part2, input3);

    return 0;
}
