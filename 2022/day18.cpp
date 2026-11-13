#include "inputs.hpp"

/*
--- Day 18: Boiling Boulders ---
You and the elephants finally reach fresh air. You've emerged near the base of a large volcano that seems to be actively erupting! Fortunately, the
lava seems to be flowing away from you and toward the ocean.

Bits of lava are still being ejected toward you, so you're sheltering in the cavern exit a little longer. Outside the cave, you can see the lava
landing in a pond and hear it loudly hissing as it solidifies.

Depending on the specific compounds in the lava and speed at which it cools, it might be forming obsidian! The cooling rate should be based on the
surface area of the lava droplets, so you take a quick scan of a droplet as it flies past you (your puzzle input).

Because of how quickly the lava is moving, the scan isn't very good; its resolution is quite low and, as a result, it approximates the shape of the
lava droplet with 1x1x1 cubes on a 3D grid, each given as its x,y,z position.

To approximate the surface area, count the number of sides of each cube that are not immediately connected to another cube. So, if your scan were only
two adjacent cubes like 1,1,1 and 2,1,1, each cube would have a single side covered and five sides exposed, a total surface area of 10 sides.

Here's a larger example:
2,2,2
1,2,2
3,2,2
2,1,2
2,3,2
2,2,1
2,2,3
2,2,4
2,2,6
1,2,5
3,2,5
2,1,5
2,3,5

In the above example, after counting up all the sides that aren't connected to another cube, the total surface area is 64.

What is the surface area of your scanned lava droplet?
*/

constexpr std::array<Vec3<int>, 6> directions = {Vec3{0, 0, -1}, {0, 0, 1}, {0, -1, 0}, {0, 1, 0}, {-1, 0, 0}, {1, 0, 0}};

int part1(const char* input) {
    std::array<std::array<std::bitset<20>, 20>, 20> grid;
    std::string line;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        Vec3<int> coord;
        std::sscanf(line.c_str(), "%d,%d,%d", &coord.x, &coord.y, &coord.z);
        grid[coord.x][coord.y][coord.z] = true;
    }
    return std::ranges::fold_left(std::views::cartesian_product(std::views::iota(0, 20), std::views::iota(0, 20), std::views::iota(0, 20)), 0,
                                  [&](const int total, const std::tuple<int, int, int>& position) -> int {
                                      const auto [x, y, z] = position;

                                      if (!grid[x][y][z]) {
                                          return total;
                                      }
                                      return total + std::ranges::fold_left(directions, 0, [&](const int faces, const Vec3<int>& delta) -> int {
                                                 const auto [nx, ny, nz] = Vec3(x, y, z) + delta;
                                                 return faces + (nx < 0 || nx >= 20 || ny < 0 || ny >= 20 || nz < 0 || nz >= 20 || !grid[nx][ny][nz]);
                                             });
                                  });
}

/*
--- Part Two ---
Something seems off about your calculation. The cooling rate depends on exterior surface area, but your calculation also included the surface area of
air pockets trapped in the lava droplet.

Instead, consider only cube sides that could be reached by the water and steam as the lava droplet tumbles into the pond. The steam will expand to
reach as much as possible, completely displacing any air on the outside of the lava droplet but never expanding diagonally.

In the larger example above, exactly one cube of air is trapped within the lava droplet (at 2,2,5), so the exterior surface area of the lava droplet
is 58.

What is the exterior surface area of your scanned lava droplet?
*/

int part2(const char* input) {
    std::array<std::array<std::bitset<20>, 20>, 20> grid, outside;
    std::string line;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        Vec3<int> coord;
        std::sscanf(line.c_str(), "%d,%d,%d", &coord.x, &coord.y, &coord.z);
        grid[coord.x][coord.y][coord.z] = true;
    }
    std::queue<Vec3<int>> queue;

    for (const auto& [x, y, z] : std::views::cartesian_product(std::views::iota(0, 20), std::views::iota(0, 20), std::views::iota(0, 20))) {
        if (x != 0 && x != 19 && y != 0 && y != 19 && z != 0 && z != 19 || grid[x][y][z]) {
            continue;
        }
        outside[x][y][z] = true;
        queue.emplace(x, y, z);
    }
    while (!queue.empty()) {
        for (const Vec3<int>& delta : directions) {
            const Vec3 next = queue.front() + delta;

            if (next.x >= 0 && next.x < 20 && next.y >= 0 && next.y < 20 && next.z >= 0 && next.z < 20 && !grid[next.x][next.y][next.z] &&
                !outside[next.x][next.y][next.z]) {
                outside[next.x][next.y][next.z] = true;
                queue.push(next);
            }
        }
        queue.pop();
    }
    return std::ranges::fold_left(std::views::cartesian_product(std::views::iota(0, 20), std::views::iota(0, 20), std::views::iota(0, 20)), 0,
                                  [&](const int total, const std::tuple<int, int, int>& position) -> int {
                                      const auto [x, y, z] = position;

                                      if (!grid[x][y][z]) {
                                          return total;
                                      }
                                      return total + std::ranges::fold_left(directions, 0, [&](const int faces, const Vec3<int>& delta) -> int {
                                                 const Vec3 next = Vec3(x, y, z) + delta;

                                                 if (next.x < 0 || next.x >= 20 || next.y < 0 || next.y >= 20 || next.z < 0 || next.z >= 20) {
                                                     return faces + 1;
                                                 }
                                                 return faces + outside[next.x][next.y][next.z];
                                             });
                                  });
}

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(2,2,2
1,2,2
3,2,2
2,1,2
2,3,2
2,2,1
2,2,3
2,2,4
2,2,6
1,2,5
3,2,5
2,1,5
2,3,5)",
                   64);
    Executor::run(part1, input18);

    std::println("Part 2:");
    Executor::test(part2, R"(2,2,2
1,2,2
3,2,2
2,1,2
2,3,2
2,2,1
2,2,3
2,2,4
2,2,6
1,2,5
3,2,5
2,1,5
2,3,5)",
                   58);
    Executor::run(part2, input18);

    return 0;
}
