#include "inputs.hpp"

/*
--- Day 12: Hill Climbing Algorithm ---
You try contacting the Elves using your handheld device, but the river you're following must be too low to get a decent signal.

You ask the device for a heightmap of the surrounding area (your puzzle input). The heightmap shows the local area from above broken into a grid; the
elevation of each square of the grid is given by a single lowercase letter, where a is the lowest elevation, b is the next-lowest, and so on up to the
highest elevation, z.

Also included on the heightmap are marks for your current position (S) and the location that should get the best signal (E). Your current position
(S) has elevation a, and the location that should get the best signal (E) has elevation z.

You'd like to reach E, but to save energy, you should do it in as few steps as possible. During each step, you can move exactly one square up, down,
left, or right. To avoid needing to get out your climbing gear, the elevation of the destination square can be at most one higher than the elevation
of your current square; that is, if your current elevation is m, you could step to elevation n, but not to elevation o. (This also means that the
elevation of the destination square can be much lower than the elevation of your current square.)

For example:
Sabqponm
abcryxxl
accszExk
acctuvwj
abdefghi

Here, you start in the top-left corner; your goal is near the middle. You could start by moving down or right, but eventually you'll need to head
toward the e at the bottom. From there, you can spiral around to the goal:
v..v<<<<
>v.vv<<^
.>vv>E^^
..v>>>^^
..>>>>>^

In the above diagram, the symbols indicate whether the path exits each square moving up (^), down (v), left (<), or right (>). The location that
should get the best signal is still E, and . marks unvisited squares.

This path reaches the goal in 31 steps, the fewest possible.

What is the fewest steps required to move from your current position to the location that should get the best signal?
*/

int part1(const char* input, const bool multiple) {
    int res = INT32_MAX;
    std::vector<Vec2<int>> sources;
    Vec2<int> destination;
    std::string line;
    std::vector<std::string> grid;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        size_t start = line.find('S'), end = line.find('E');

        if (start != std::string::npos) {
            sources.emplace_back(static_cast<int>(grid.size()), static_cast<int>(start));
            line[start] = 'a';
        }
        if (multiple && (start = line.find('a')) != std::string::npos) {
            sources.emplace_back(static_cast<int>(grid.size()), static_cast<int>(start));
        }
        if (end != std::string::npos) {
            destination = {static_cast<int>(grid.size()), static_cast<int>(end)};
            line[end] = 'z';
        }
        grid.push_back(line);
    }
    const int row = grid.size(), col = grid.front().size();

    for (const Vec2<int>& source : sources) {
        std::unordered_set<Vec2<int>> seen;
        std::queue<std::pair<Vec2<int>, int>> queue;
        queue.emplace(source, 0);

        while (!queue.empty()) {
            const auto [position, step] = queue.front();
            queue.pop();

            if (!seen.insert(position).second) {
                continue;
            }
            if (position == destination) {
                res = std::min(res, step);
                break;
            }
            for (const Vec2<int>& delta : directions_basic) {
                Vec2<int> next = position + delta;

                if (next.x >= 0 && next.x < row && next.y >= 0 && next.y < col && grid[next.x][next.y] - grid[position.x][position.y] <= 1) {
                    queue.emplace(next, step + 1);
                }
            }
        }
    }
    return res;
}

/*
--- Part Two ---
As you walk up the hill, you suspect that the Elves will want to turn this into a hiking trail. The beginning isn't very scenic, though; perhaps you
can find a better starting point.

To maximize exercise while hiking, the trail should start as low as possible: elevation a. The goal is still the square marked E. However, the trail
should still be direct, taking the fewest steps to reach its goal. So, you'll need to find the shortest path from any square at elevation a to the
square marked E.

Again consider the example from above:
Sabqponm
abcryxxl
accszExk
acctuvwj
abdefghi

Now, there are six choices for starting position (five marked a, plus the square marked S that counts as being at elevation a). If you start at the
bottom-left square, you can reach the goal most quickly:
...v<<<<
...vv<<^
...v>E^^
.>v>>>^^
>^>>>>>^

This path reaches the goal in only 29 steps, the fewest possible.

What is the fewest steps required to move starting from any square with elevation a to the location that should get the best signal?
*/

int part2(const char* input) { return part1(input, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(Sabqponm
abcryxxl
accszExk
acctuvwj
abdefghi)",
                   false, 31);
    Executor::run(part1, input12, false);

    std::println("Part 2:");
    Executor::test(part2, R"(Sabqponm
abcryxxl
accszExk
acctuvwj
abdefghi)",
                   29);
    Executor::run(part2, input12);

    return 0;
}
