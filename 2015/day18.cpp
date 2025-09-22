#include <algorithm>
#include <bitset>
#include <iostream>
#include <numeric>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 18: Like a GIF For Your Yard ---
After the million lights incident, the fire code has gotten stricter: now, at most ten thousand lights are allowed. You arrange them in a 100x100
grid.

Never one to let you down, Santa again mails you instructions on the ideal lighting configuration. With so few lights, he says, you'll have to resort
to animation.

Start by setting your lights to the included initial configuration (your puzzle input). A # means "on", and a . means "off".

Then, animate your grid in steps, where each step decides the next configuration based on the current one. Each light's next state (either on or off)
depends on its current state and the current states of the eight lights adjacent to it (including diagonals). Lights on the edge of the grid might
have fewer than eight neighbors; the missing ones always count as "off".

For example, in a simplified 6x6 grid, the light marked A has the neighbors numbered 1 through 8, and the light marked B, which is on an edge, only
has the neighbors marked 1 through 5:
1B5...
234...
......
..123.
..8A4.
..765.

The state a light should have next is based on its current state (on or off) plus the number of neighbors that are on:
    - A light which is on stays on when 2 or 3 neighbors are on, and turns off otherwise.
    - A light which is off turns on if exactly 3 neighbors are on, and stays off otherwise.
All of the lights update simultaneously; they all consider the same current state before moving to the next.

Here's a few steps from an example configuration of another 6x6 grid:
Initial state:
.#.#.#
...##.
#....#
..#...
#.#..#
####..

After 1 step:
..##..
..##.#
...##.
......
#.....
#.##..

After 2 steps:
..###.
......
..###.
......
.#....
.#....

After 3 steps:
...#..
......
...#..
..##..
......
......

After 4 steps:
......
......
..##..
..##..
......
......

After 4 steps, this example has four lights on.

In your grid of 100x100 lights, given your initial configuration, how many lights are on after 100 steps?
*/

constexpr int grid_size = 100, steps = 100;

int part1(const bool conner_condition = false) {
    std::string line;
    std::stringstream file(input18);
    std::array<std::bitset<grid_size>, grid_size> actual_state, temp_state;
    int i = 0;

    while (std::getline(file, line)) {
        for (int j = 0; j < grid_size; j++) {
            actual_state[i][j] = line[j] == '#';
        }
        i++;
    }
    for (int t = 0; t < steps; t++) {
        for (i = 0; i < grid_size; i++) {
            for (int j = 0; j < grid_size; j++) {
                if (conner_condition &&
                    (i == 0 && j == 0 || i == 0 && j == grid_size - 1 || i == grid_size - 1 && j == 0 || i == grid_size - 1 && j == grid_size - 1)) {
                    continue;
                }
                int on = 0;

                if (i - 1 >= 0) {
                    if (j - 1 >= 0) {
                        on += actual_state[i - 1][j - 1];
                    }
                    if (j + 1 < grid_size) {
                        on += actual_state[i - 1][j + 1];
                    }
                    on += actual_state[i - 1][j];
                }
                if (i + 1 < grid_size) {
                    if (j - 1 >= 0) {
                        on += actual_state[i + 1][j - 1];
                    }
                    if (j + 1 < grid_size) {
                        on += actual_state[i + 1][j + 1];
                    }
                    on += actual_state[i + 1][j];
                }
                if (j - 1 >= 0) {
                    on += actual_state[i][j - 1];
                }
                if (j + 1 < grid_size) {
                    on += actual_state[i][j + 1];
                }
                if (actual_state[i][j]) {
                    temp_state[i][j] = on == 2 || on == 3;
                } else {
                    temp_state[i][j] = on == 3;
                }
            }
        }
        std::swap(actual_state, temp_state);
    }
    return std::transform_reduce(actual_state.begin(), actual_state.end(), 0, std::plus<int>(),
                                 [](const std::bitset<grid_size>& row) -> int { return row.count(); });
}

/*
--- Part Two ---
You flip the instructions over; Santa goes on to point out that this is all just an implementation of Conway's Game of Life. At least, it was, until
you notice that something's wrong with the grid of lights you bought: four lights, one in each corner, are stuck on and can't be turned off. The
example above will actually run like this:
Initial state:
##.#.#
...##.
#....#
..#...
#.#..#
####.#

After 1 step:
#.##.#
####.#
...##.
......
#...#.
#.####

After 2 steps:
#..#.#
#....#
.#.##.
...##.
.#..##
##.###

After 3 steps:
#...##
####.#
..##.#
......
##....
####.#

After 4 steps:
#.####
#....#
...#..
.##...
#.....
#.#..#

After 5 steps:
##.###
.##..#
.##...
.##...
#.#...
##...#
After 5 steps, this example now has 17 lights on.

In your grid of 100x100 lights, given your initial configuration, but with the four corners always in the on state, how many lights are on after 100
steps?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
