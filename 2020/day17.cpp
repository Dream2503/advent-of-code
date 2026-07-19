#include "inputs.hpp"

/*
--- Day 17: Conway Cubes ---
As your flight slowly drifts through the sky, the Elves at the Mythical Information Bureau at the North Pole contact you. They'd like some help
debugging a malfunctioning experimental energy source aboard one of their super-secret imaging satellites.

The experimental energy source is based on cutting-edge technology: a set of Conway Cubes contained in a pocket dimension! When you hear it's having
problems, you can't help but agree to take a look.

The pocket dimension contains an infinite 3-dimensional grid. At every integer 3-dimensional coordinate (x,y,z), there exists a single cube which is
either active or inactive.

In the initial state of the pocket dimension, almost all cubes start inactive. The only exception to this is a small flat region of cubes (your puzzle
input); the cubes in this region start in the specified active (#) or inactive (.) state.

The energy source then proceeds to boot up by executing six cycles.

Each cube only ever considers its neighbors: any of the 26 other cubes where any of their coordinates differ by at most 1. For example, given the cube
at x=1,y=2,z=3, its neighbors include the cube at x=2,y=2,z=2, the cube at x=0,y=2,z=3, and so on.

During a cycle, all cubes simultaneously change their state according to the following rules:
    - If a cube is active and exactly 2 or 3 of its neighbors are also active, the cube remains active. Otherwise, the cube becomes inactive.
    - If a cube is inactive but exactly 3 of its neighbors are active, the cube becomes active. Otherwise, the cube remains inactive.

The engineers responsible for this experimental energy source would like you to simulate the pocket dimension and determine what the configuration of
cubes should be at the end of the six-cycle boot process.

For example, consider the following initial state:
.#.
..#
###

Even though the pocket dimension is 3-dimensional, this initial state represents a small 2-dimensional slice of it. (In particular, this initial state
defines a 3x3x1 region of the 3-dimensional space.)

Simulating a few cycles from this initial state produces the following configurations, where the result of each cycle is shown layer-by-layer at each
given z coordinate (and the frame of view follows the active cells in each cycle):
Before any cycles:

z=0
.#.
..#
###


After 1 cycle:

z=-1
#..
..#
.#.

z=0
#.#
.##
.#.

z=1
#..
..#
.#.


After 2 cycles:

z=-2
.....
.....
..#..
.....
.....

z=-1
..#..
.#..#
....#
.#...
.....

z=0
##...
##...
#....
....#
.###.

z=1
..#..
.#..#
....#
.#...
.....

z=2
.....
.....
..#..
.....
.....


After 3 cycles:

z=-2
.......
.......
..##...
..###..
.......
.......
.......

z=-1
..#....
...#...
#......
.....##
.#...#.
..#.#..
...#...

z=0
...#...
.......
#......
.......
.....##
.##.#..
...#...

z=1
..#....
...#...
#......
.....##
.#...#.
..#.#..
...#...

z=2
.......
.......
..##...
..###..
.......
.......
.......

After the full six-cycle boot process completes, 112 cubes are left in the active state.

Starting with your given initial configuration, simulate six cycles. How many cubes are left in the active state after the sixth cycle?
*/

bool resolve(const std::vector<std::vector<std::vector<uint8_t>>>& grid, const int layers, const int size, const Vec3<int>& position) {
    int active = 0;
    Vec3<int> current;

    for (current.x = position.x - 1; current.x <= position.x + 1; current.x++) {
        if (current.x >= 0 && current.x < layers) {
            for (current.y = position.y - 1; current.y <= position.y + 1; current.y++) {
                if (current.y >= 0 && current.y < size) {
                    for (current.z = position.z - 1; current.z <= position.z + 1; current.z++) {
                        active += current.z >= 0 && current.z < size && current != position && grid[current.x][current.y][current.z];
                    }
                }
            }
        }
    }
    return grid[position.x][position.y][position.z] ? active == 2 || active == 3 : active == 3;
}

int part1(const int cycles = 6) {
    int layers = 1;
    std::vector<std::vector<std::vector<uint8_t>>> grid(1);
    std::string line;
    std::stringstream file(input17);

    while (std::getline(file, line)) {
        const int size = line.size();
        grid.front().push_back(std::vector<uint8_t>());
        grid.back().reserve(size);

        for (int i = 0; i < size; i++) {
            grid.front().back().push_back(line[i] == '#');
        }
    }
    int size = grid.front().size();

    for (int _ = 0; _ < cycles; _++) {
        size += 2;
        layers += 2;
        grid.push_back(std::vector(size, std::vector<uint8_t>(size, false)));
        grid.insert(grid.begin(), grid.back());

        for (int i = 1; i < layers - 1; i++) {
            for (int j = 0; j < size - 2; j++) {
                grid[i][j].push_back(false);
                grid[i][j].insert(grid[i][j].begin(), grid[i][j].back());
            }
            grid[i].push_back(std::vector<uint8_t>(size, false));
            grid[i].insert(grid[i].begin(), grid[i].back());
        }
        std::vector<std::vector<std::vector<uint8_t>>> next = grid;

        for (int level = 0; level < layers; level++) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    next[level][i][j] = resolve(grid, layers, size, {level, i, j});
                }
            }
        }
        grid = std::move(next);
    }
    return std::ranges::count(grid | std::views::join | std::views::join, true);
}

/*
--- Part Two ---
For some reason, your simulated results don't match what the experimental energy source engineers expected. Apparently, the pocket dimension actually
has four spatial dimensions, not three.

The pocket dimension contains an infinite 4-dimensional grid. At every integer 4-dimensional coordinate (x,y,z,w), there exists a single cube (really,
a hypercube) which is still either active or inactive.

Each cube only ever considers its neighbors: any of the 80 other cubes where any of their coordinates differ by at most 1. For example, given the cube
at x=1,y=2,z=3,w=4, its neighbors include the cube at x=2,y=2,z=3,w=3, the cube at x=0,y=2,z=3,w=4, and so on.

The initial state of the pocket dimension still consists of a small flat region of cubes. Furthermore, the same rules for cycle updating still apply:
during each cycle, consider the number of active neighbors of each cube.

For example, consider the same initial state as in the example above. Even though the pocket dimension is 4-dimensional, this initial state represents
a small 2-dimensional slice of it. (In particular, this initial state defines a 3x3x1x1 region of the 4-dimensional space.)

Simulating a few cycles from this initial state produces the following configurations, where the result of each cycle is shown layer-by-layer at each
given z and w coordinate:
Before any cycles:

z=0, w=0
.#.
..#
###


After 1 cycle:

z=-1, w=-1
#..
..#
.#.

z=0, w=-1
#..
..#
.#.

z=1, w=-1
#..
..#
.#.

z=-1, w=0
#..
..#
.#.

z=0, w=0
#.#
.##
.#.

z=1, w=0
#..
..#
.#.

z=-1, w=1
#..
..#
.#.

z=0, w=1
#..
..#
.#.

z=1, w=1
#..
..#
.#.


After 2 cycles:

z=-2, w=-2
.....
.....
..#..
.....
.....

z=-1, w=-2
.....
.....
.....
.....
.....

z=0, w=-2
###..
##.##
#...#
.#..#
.###.

z=1, w=-2
.....
.....
.....
.....
.....

z=2, w=-2
.....
.....
..#..
.....
.....

z=-2, w=-1
.....
.....
.....
.....
.....

z=-1, w=-1
.....
.....
.....
.....
.....

z=0, w=-1
.....
.....
.....
.....
.....

z=1, w=-1
.....
.....
.....
.....
.....

z=2, w=-1
.....
.....
.....
.....
.....

z=-2, w=0
###..
##.##
#...#
.#..#
.###.

z=-1, w=0
.....
.....
.....
.....
.....

z=0, w=0
.....
.....
.....
.....
.....

z=1, w=0
.....
.....
.....
.....
.....

z=2, w=0
###..
##.##
#...#
.#..#
.###.

z=-2, w=1
.....
.....
.....
.....
.....

z=-1, w=1
.....
.....
.....
.....
.....

z=0, w=1
.....
.....
.....
.....
.....

z=1, w=1
.....
.....
.....
.....
.....

z=2, w=1
.....
.....
.....
.....
.....

z=-2, w=2
.....
.....
..#..
.....
.....

z=-1, w=2
.....
.....
.....
.....
.....

z=0, w=2
###..
##.##
#...#
.#..#
.###.

z=1, w=2
.....
.....
.....
.....
.....

z=2, w=2
.....
.....
..#..
.....
.....

After the full six-cycle boot process completes, 848 cubes are left in the active state.

Starting with your given initial configuration, simulate six cycles in a 4-dimensional space. How many cubes are left in the active state after the
sixth cycle?
*/

bool resolve(const std::vector<std::vector<std::vector<std::vector<uint8_t>>>>& grid, const int depth, const int size, const Vec4<int>& position) {
    int active = 0;
    Vec4<int> current;

    for (current.x = position.x - 1; current.x <= position.x + 1; ++current.x) {
        if (current.x >= 0 && current.x < depth) {
            for (current.y = position.y - 1; current.y <= position.y + 1; ++current.y) {
                if (current.y >= 0 && current.y < depth) {
                    for (current.z = position.z - 1; current.z <= position.z + 1; ++current.z) {
                        if (current.z >= 0 && current.z < size) {
                            for (current.t = position.t - 1; current.t <= position.t + 1; ++current.t) {
                                active +=
                                    current.t >= 0 && current.t < size && current != position && grid[current.x][current.y][current.z][current.t];
                            }
                        }
                    }
                }
            }
        }
    }
    return grid[position.x][position.y][position.z][position.t] ? active == 2 || active == 3 : active == 3;
}

int part2(const int cycles = 6) {
    int depth = 1;
    std::vector grid(1, std::vector<std::vector<std::vector<uint8_t>>>(1));
    std::string line;
    std::stringstream file(input17);

    while (std::getline(file, line)) {
        const int width = line.size();
        grid.front().front().push_back({});
        grid.front().front().back().reserve(width);

        for (const char ch : line) {
            grid.front().front().back().push_back(ch == '#');
        }
    }
    int size = grid.front().front().size();

    for (int _ = 0; _ < cycles; _++) {
        size += 2;
        depth += 2;
        grid.push_back(std::vector(depth, std::vector(size, std::vector<uint8_t>(size, false))));
        grid.insert(grid.begin(), grid.back());

        for (int i = 1; i < depth - 1; i++) {
            grid[i].push_back(std::vector(size, std::vector<uint8_t>(size, false)));
            grid[i].insert(grid[i].begin(), grid[i].back());

            for (int j = 1; j < depth - 1; j++) {
                for (int k = 0; k < size - 2; k++) {
                    grid[i][j][k].push_back(false);
                    grid[i][j][k].insert(grid[i][j][k].begin(), grid[i][j][k].back());
                }
                grid[i][j].push_back(std::vector<uint8_t>(size, false));
                grid[i][j].insert(grid[i][j].begin(), grid[i][j].back());
            }
        }
        std::vector<std::vector<std::vector<std::vector<uint8_t>>>> next = grid;

        for (int i = 0; i < depth; i++) {
            for (int j = 0; j < depth; j++) {
                for (int k = 0; k < size; k++) {
                    for (int l = 0; l < size; l++) {
                        next[i][j][k][l] = resolve(grid, depth, size, {.x = i, .y = j, .z = k, .t = l});
                    }
                }
            }
        }
        grid = std::move(next);
    }
    return std::ranges::count(grid | std::views::join | std::views::join | std::views::join, true);
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
