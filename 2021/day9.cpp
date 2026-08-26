#include "inputs.hpp"

/*
--- Day 9: Smoke Basin ---
These caves seem to be lava tubes. Parts are even still volcanically active; small hydrothermal vents release smoke into the caves that slowly settles
like rain.

If you can model how the smoke flows through the caves, you might be able to avoid it and be that much safer. The submarine generates a heightmap of
the floor of the nearby caves for you (your puzzle input).

Smoke flows to the lowest point of the area it's in. For example, consider the following heightmap:
2199943210
3987894921
9856789892
8767896789
9899965678

Each number corresponds to the height of a particular location, where 9 is the highest and 0 is the lowest a location can be.

Your first goal is to find the low points - the locations that are lower than any of its adjacent locations. Most locations have four adjacent
locations (up, down, left, and right); locations on the edge or corner of the map have three or two adjacent locations, respectively. (Diagonal
locations do not count as adjacent.)

In the above example, there are four low points, all highlighted: two are in the first row (a 1 and a 0), one is in the third row (a 5), and one is in
the bottom row (also a 5). All other locations on the heightmap have some lower adjacent location, and so are not low points.

The risk level of a low point is 1 plus its height. In the above example, the risk levels of the low points are 2, 1, 6, and 6. The sum of the risk
levels of all low points in the heightmap is therefore 15.

Find all of the low points on your heightmap. What is the sum of the risk levels of all low points on your heightmap?
*/

int dfs(const std::vector<std::string>& grid, const Vec2<int>& position, std::unordered_set<Vec2<int>>& seen) {
    if (position.x < 0 || position.x >= grid.size() || position.y < 0 || position.y >= grid.front().size() || grid[position.x][position.y] == '9' ||
        seen.contains(position)) {
        return 0;
    }
    seen.insert(position);
    int res = 1;

    for (const Vec2<int>& delta : directions_basic) {
        res += dfs(grid, position + delta, seen);
    }
    return res;
}

int part1(const char* input, const bool floodfill) {
    int res = 0;
    std::string line;
    std::vector<std::string> grid;
    std::priority_queue<int, std::vector<int>, std::greater<>> ans;
    std::unordered_set<Vec2<int>> seen;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        grid.push_back(line);
    }
    const int row_size = grid.size(), col_size = grid.front().size();

    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            if (floodfill) {
                ans.push(dfs(grid, {i, j}, seen));

                if (ans.size() > 3) {
                    ans.pop();
                }
            } else if ((i == 0 || grid[i - 1][j] > grid[i][j]) && (i == row_size - 1 || grid[i + 1][j] > grid[i][j]) &&
                       (j == 0 || grid[i][j - 1] > grid[i][j]) && (j == col_size - 1 || grid[i][j + 1] > grid[i][j])) {
                res += grid[i][j] - '0' + 1;
            }
        }
    }
    if (floodfill) {
        res = 1;

        while (!ans.empty()) {
            res *= ans.top();
            ans.pop();
        }
    }
    return res;
}

/*
--- Part Two ---
Next, you need to find the largest basins so you know what areas are most important to avoid.

A basin is all locations that eventually flow downward to a single low point. Therefore, every low point has a basin, although some basins are very
small. Locations of height 9 do not count as being in any basin, and all other locations will always be part of exactly one basin.

The size of a basin is the number of locations within the basin, including the low point. The example above has four basins.

The top-left basin, size 3:
2199943210
3987894921
9856789892
8767896789
9899965678

The top-right basin, size 9:
2199943210
3987894921
9856789892
8767896789
9899965678

The middle basin, size 14:
2199943210
3987894921
9856789892
8767896789
9899965678

The bottom-right basin, size 9:
2199943210
3987894921
9856789892
8767896789
9899965678

Find the three largest basins and multiply their sizes together. In the above example, this is 9 * 14 * 9 = 1134.

What do you get if you multiply together the sizes of the three largest basins?
*/

int part2(const char* input) { return part1(input, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1,
                   R"(2199943210
3987894921
9856789892
8767896789
9899965678)",
                   false, 15);
    Executor::run(part1, input9, false);

    std::println("Part 2:");
    Executor::test(part2,
                   R"(2199943210
3987894921
9856789892
8767896789
9899965678)",
                   1134);
    Executor::run(part2, input9);

    return 0;
}
