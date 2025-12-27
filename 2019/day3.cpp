#include "inputs.hpp"

/*
--- Day 1: The Tyranny of the Rocket Equation ---
Santa has become stranded at the edge of the Solar System while delivering presents to other planets! To accurately calculate his position in space,
safely align his warp drive, and return to Earth in time to save Christmas, he needs you to bring him measurements from fifty stars.

Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar; the second puzzle is unlocked when you
complete the first. Each puzzle grants one star. Good luck!

The Elves quickly load you into a spacecraft and prepare to launch.

At the first Go / No Go poll, every Elf is Go until the Fuel Counter-Upper. They haven't determined the amount of fuel required yet.

Fuel required to launch a given module is based on its mass. Specifically, to find the fuel required for a module, take its mass, divide by three,
round down, and subtract 2.

For example:
    - For a mass of 12, divide by 3 and round down to get 4, then subtract 2 to get 2.
    - For a mass of 14, dividing by 3 and rounding down still yields 4, so the fuel required is also 2.
    - For a mass of 1969, the fuel required is 654.
    - For a mass of 100756, the fuel required is 33583.

The Fuel Counter-Upper needs to know the total fuel requirement. To find it, individually calculate the fuel needed for the mass of each module (your
puzzle input), then add together all the fuel values.

What is the sum of the fuel requirements for all of the modules on your spacecraft?
*/

std::vector<Vec2<int>> trace_path(const std::string& wire) {
    Vec2 position = 0;
    std::string direction;
    std::vector<Vec2<int>> path;
    std::stringstream ss(wire);

    while (std::getline(ss, direction, ',')) {
        const int distance = std::stoi(direction.substr(1));

        switch (direction[0]) {
        case 'U':
            for (int i = 0; i < distance; i++) {
                position.y++;
                path.push_back(position);
            }
            break;

        case 'L':
            for (int i = 0; i < distance; i++) {
                position.x--;
                path.push_back(position);
            }
            break;

        case 'R':
            for (int i = 0; i < distance; i++) {
                position.x++;
                path.push_back(position);
            }
            break;

        case 'D':
            for (int i = 0; i < distance; i++) {
                position.y--;
                path.push_back(position);
            }
            break;

        default:
            break;
        }
    }
    std::ranges::sort(path, {}, [](const Vec2<int>& vec2) -> std::pair<int, int> { return {vec2.x, vec2.y}; });
    path.erase(std::ranges::unique(path).begin(), path.end());
    return path;
}

int trace_until(const std::string& wire, const Vec2<int>& target) {
    int total_distance = 0;
    Vec2 position = 0;
    std::string direction;
    std::vector<Vec2<int>> path;
    std::stringstream ss(wire);

    while (std::getline(ss, direction, ',')) {
        const int distance = std::stoi(direction.substr(1));

        switch (direction[0]) {
        case 'U':
            for (int i = 0; i < distance; i++) {
                position.y++;
                total_distance++;

                if (target == position) {
                    return total_distance;
                }
            }
            break;

        case 'L':
            for (int i = 0; i < distance; i++) {
                position.x--;
                total_distance++;

                if (target == position) {
                    return total_distance;
                }
            }
            break;

        case 'R':
            for (int i = 0; i < distance; i++) {
                position.x++;
                total_distance++;

                if (target == position) {
                    return total_distance;
                }
            }
            break;

        case 'D':
            for (int i = 0; i < distance; i++) {
                position.y--;
                total_distance++;

                if (target == position) {
                    return total_distance;
                }
            }
            break;

        default:
            break;
        }
    }
    return -1;
}

int part1(const bool fastest = false) {
    std::string wire1, wire2;
    std::stringstream file(input3);
    std::getline(file, wire1);
    std::getline(file, wire2);
    std::vector<Vec2<int>> path1 = trace_path(wire1), path2 = trace_path(wire2), intersection;
    std::ranges::set_intersection(path1, path2, std::back_inserter(intersection),
                                  [](const Vec2<int>& lhs, const Vec2<int>& rhs) -> bool { return lhs.lexicographically_less(rhs); });
    if (fastest) {
        std::vector<int> steps;
        steps.reserve(intersection.size());

        for (const Vec2<int>& position : intersection) {
            steps.push_back(trace_until(wire1, position) + trace_until(wire2, position));
        }
        return *std::ranges::min_element(steps);
    }
    return std::ranges::min_element(intersection, {}, [](const Vec2<int>& vec2) -> int { return vec2.manhattan_distance(Vec2(0)); })
        ->manhattan_distance(Vec2(0));
}

/*
--- Part Two ---
It turns out that this circuit is very timing-sensitive; you actually need to minimize the signal delay.

To do this, calculate the number of steps each wire takes to reach each intersection; choose the intersection where the sum of both wires' steps is
lowest. If a wire visits a position on the grid multiple times, use the steps value from the first time it visits that position when calculating the
total value of a specific intersection.

The number of steps a wire takes is the total number of grid squares the wire has entered to get to that location, including the intersection being
considered. Again consider the example from above:

...........
.+-----+...
.|.....|...
.|..+--X-+.
.|..|..|.|.
.|.-X--+.|.
.|..|....|.
.|.......|.
.o-------+.
...........
In the above example, the intersection closest to the central port is reached after 8+5+5+2 = 20 steps by the first wire and 7+6+4+3 = 20 steps by the
second wire for a total of 20+20 = 40 steps.

However, the top-right intersection is better: the first wire takes only 8+5+2 = 15 and the second wire takes only 7+6+2 = 15, a total of 15+15 = 30
steps.

Here are the best steps for the extra examples from above:

R75,D30,R83,U83,L12,D49,R71,U7,L72
U62,R66,U55,R34,D71,R55,D58,R83 = 610 steps
R98,U47,R26,D63,R33,U87,L62,D20,R33,U53,R51
U98,R91,D20,R16,D67,R40,U7,R15,U6,R7 = 410 steps
What is the fewest combined steps the wires must take to reach an intersection?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
