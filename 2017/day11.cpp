#include <iostream>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 11: Hex Ed ---
Crossing the bridge, you've barely reached the other side of the stream when a program comes up to you, clearly in distress. "It's my child process,"
she says, "he's gotten lost in an infinite grid!"

Fortunately for her, you have plenty of experience with infinite grids.

Unfortunately for you, it's a hex grid.

The hexagons ("hexes") in this grid are aligned such that adjacent hexes can be found to the north, northeast, southeast, south, southwest, and
northwest:
  \ n  /
nw +--+ ne
  /    \
-+      +-
  \    /
sw +--+ se
  / s  \

You have the path the child process took. Starting where he started, you need to determine the fewest number of steps required to reach him. (A "step"
means to move from the hex you are in to any adjacent hex.)

For example:
    - ne,ne,ne is 3 steps away.
    - ne,ne,sw,sw is 0 steps away (back where you started).
    - ne,ne,s,s is 2 steps away (se,se).
    - se,sw,se,sw,sw is 3 steps away (s,s,sw).
*/

int part1(const bool furthest = false) {
    int x = 0, y = 0, z = 0, max = 0;
    std::string direction;
    std::stringstream file(input11);

    while (std::getline(file, direction, ',')) {
        if (direction == "n") {
            y++;
            z--;
        } else if (direction == "ne") {
            x++;
            z--;
        } else if (direction == "se") {
            x++;
            y--;
        } else if (direction == "s") {
            y--;
            z++;
        } else if (direction == "sw") {
            x--;
            z++;
        } else if (direction == "nw") {
            x--;
            y++;
        }
        max = std::max({max, std::abs(x), std::abs(y), std::abs(z)});
    }
    return furthest ? max : std::max({std::abs(x), std::abs(y), std::abs(z)});
}

/*
--- Part Two ---
How many steps away is the furthest he ever got from his starting position?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
