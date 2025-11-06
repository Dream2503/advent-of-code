#include "inputs.hpp"

/*
--- Day 17: Reservoir Research ---
You arrive in the year 18. If it weren't for the coat you got in 1018, you would be very cold: the North Pole base hasn't even been constructed.

Rather, it hasn't been constructed yet. The Elves are making a little progress, but there's not a lot of liquid water in this climate, so they're
getting very dehydrated. Maybe there's more underground?

You scan a two-dimensional vertical slice of the ground nearby and discover that it is mostly sand with veins of clay. The scan only provides data
with a granularity of square meters, but it should be good enough to determine how much water is trapped there. In the scan, x represents the distance
to the right, and y represents the distance down. There is also a spring of water near the surface at x=500, y=0. The scan identifies which square
meters are clay (your puzzle input).

For example, suppose your scan shows the following veins of clay:
x=495, y=2..7
y=7, x=495..501
x=501, y=3..7
x=498, y=2..4
x=506, y=1..2
x=498, y=10..13
x=504, y=10..13
y=13, x=498..504

Rendering clay as #, sand as ., and the water spring as +, and with x increasing to the right and y increasing downward, this becomes:
   44444455555555
   99999900000000
   45678901234567
 0 ......+.......
 1 ............#.
 2 .#..#.......#.
 3 .#..#..#......
 4 .#..#..#......
 5 .#.....#......
 6 .#.....#......
 7 .#######......
 8 ..............
 9 ..............
10 ....#.....#...
11 ....#.....#...
12 ....#.....#...
13 ....#######...

The spring of water will produce water forever. Water can move through sand, but is blocked by clay. Water always moves down when possible, and
spreads to the left and right otherwise, filling space that has clay on both sides and falling out otherwise.

For example, if five squares of water are created, they will flow downward until they reach the clay and settle there. Water that has come to rest is
shown here as ~, while sand through which water has passed (but which is now dry again) is shown as |:
......+.......
......|.....#.
.#..#.|.....#.
.#..#.|#......
.#..#.|#......
.#....|#......
.#~~~~~#......
.#######......
..............
..............
....#.....#...
....#.....#...
....#.....#...
....#######...

Two squares of water can't occupy the same location. If another five squares of water are created, they will settle on the first five, filling the
clay reservoir a little more:
......+.......
......|.....#.
.#..#.|.....#.
.#..#.|#......
.#..#.|#......
.#~~~~~#......
.#~~~~~#......
.#######......
..............
..............
....#.....#...
....#.....#...
....#.....#...
....#######...

Water pressure does not apply in this scenario. If another four squares of water are created, they will stay on the right side of the barrier, and no
water will reach the left side:
......+.......
......|.....#.
.#..#.|.....#.
.#..#~~#......
.#..#~~#......
.#~~~~~#......
.#~~~~~#......
.#######......
..............
..............
....#.....#...
....#.....#...
....#.....#...
....#######...

At this point, the top reservoir overflows. While water can reach the tiles above the surface of the water, it cannot settle there, and so the next
five squares of water settle like this:
......+.......
......|.....#.
.#..#||||...#.
.#..#~~#|.....
.#..#~~#|.....
.#~~~~~#|.....
.#~~~~~#|.....
.#######|.....
........|.....
........|.....
....#...|.#...
....#...|.#...
....#~~~~~#...
....#######...

Note especially the leftmost |: the new squares of water can reach this tile, but cannot stop there. Instead, eventually, they all fall to the right
and settle in the reservoir below.

After 10 more squares of water, the bottom reservoir is also full:
......+.......
......|.....#.
.#..#||||...#.
.#..#~~#|.....
.#..#~~#|.....
.#~~~~~#|.....
.#~~~~~#|.....
.#######|.....
........|.....
........|.....
....#~~~~~#...
....#~~~~~#...
....#~~~~~#...
....#######...

Finally, while there is nowhere left for the water to settle, it can reach a few more tiles before overflowing beyond the bottom of the scanned data:
......+.......    (line not counted: above minimum y value)
......|.....#.
.#..#||||...#.
.#..#~~#|.....
.#..#~~#|.....
.#~~~~~#|.....
.#~~~~~#|.....
.#######|.....
........|.....
...|||||||||..
...|#~~~~~#|..
...|#~~~~~#|..
...|#~~~~~#|..
...|#######|..
...|.......|..    (line not counted: below maximum y value)
...|.......|..    (line not counted: below maximum y value)
...|.......|..    (line not counted: below maximum y value)

How many tiles can be reached by the water? To prevent counting forever, ignore tiles with a y coordinate smaller than the smallest y coordinate in
your scan data or larger than the largest one. Any x coordinate is valid. In this example, the lowest y coordinate given is 1, and the highest is 13,
causing the water spring (in row 0) and the water falling off the bottom of the render (in rows 14 through infinity) to be ignored.

So, in the example above, counting both water at rest (~) and other sand tiles the water can hypothetically reach (|), the total number of tiles the
water can reach is 57.

How many tiles can the water reach within the range of y values in your scan?
*/

int part1(const bool dry = false) {
    enum Tile { SAND = '.', CLAY = '#', FLOW = '|', STILL = '~' };
    Vec2 min(INT32_MAX, INT32_MAX), max(0, 0);
    std::string line;
    std::vector<Vec2<Vec2<int>>> data;
    std::stringstream file(input17);

    while (std::getline(file, line)) {
        char coord;
        int first, second_begin, second_end;
        (((std::stringstream(line) >> coord).ignore(1) >> first).ignore(4) >> second_begin).ignore(2) >> second_end;

        if (coord == 'x') {
            data.emplace_back(Vec2(first, first + 1), Vec2(second_begin, second_end + 1));
        } else {
            data.emplace_back(Vec2(second_begin, second_end + 1), Vec2(first, first + 1));
        }
        min.x = std::min(min.x, data.back().x.x);
        max.x = std::max(max.x, data.back().x.y);
        min.y = std::min(min.y, data.back().y.x);
        max.y = std::max(max.y, data.back().y.y);
    }
    min.x--;
    max.x++;
    const auto [size_x, size_y] = max - min;
    std::vector graph(size_y, std::vector(size_x, SAND));
    std::vector pending(size_y, std::vector(size_x, false));

    for (const auto& [wide, high] : data) {
        for (int i = high.x; i < high.y; i++) {
            for (int j = wide.x; j < wide.y; j++) {
                graph[i - min.y][j - min.x] = CLAY;
            }
        }
    }
    std::stack<Vec2<int>> sources;
    sources.emplace(500 - min.x, 0);
    pending[0][500 - min.x] = true;

    while (!sources.empty()) {
        auto [x, y] = sources.top();
        sources.pop();
        pending[y][x] = false;

        while (y + 1 < size_y && (graph[y][x] == SAND || graph[y][x] == FLOW) && (graph[y + 1][x] == SAND || graph[y + 1][x] == FLOW)) {
            graph[y][x] = FLOW;
            y++;
        }
        if (y >= size_y) {
            continue;
        }
        if (graph[y][x] == SAND) {
            graph[y][x] = FLOW;
        }
        if (y + 1 >= size_y) {
            continue;
        }
        if (graph[y + 1][x] == SAND || graph[y + 1][x] == FLOW) {
            if (y + 1 < size_y && !pending[y + 1][x]) {
                sources.emplace(x, y + 1);
                pending[y + 1][x] = true;
            }
            continue;
        }
        bool left_wall = false, left_spill = false;
        int left = x;

        while (true) {
            if (left - 1 < 0) {
                left_spill = true;
                break;
            }
            if (graph[y][left - 1] == CLAY) {
                left_wall = true;
                break;
            }
            if (graph[y + 1][left - 1] == SAND || graph[y + 1][left - 1] == FLOW) {
                left_spill = true;
                left -= 1;
                break;
            }
            left -= 1;
        }
        bool right_wall = false, right_spill = false;
        int right = x;

        while (true) {
            if (right + 1 >= size_x) {
                right_spill = true;
                break;
            }
            if (graph[y][right + 1] == CLAY) {
                right_wall = true;
                break;
            }
            if (graph[y + 1][right + 1] == SAND || graph[y + 1][right + 1] == FLOW) {
                right_spill = true;
                right += 1;
                break;
            }
            right += 1;
        }

        if (left_wall && right_wall) {
            for (int i = left; i <= right; i++) {
                graph[y][i] = STILL;
            }
            if (y - 1 >= 0 && !pending[y - 1][x]) {
                sources.emplace(x, y - 1);
                pending[y - 1][x] = true;
            }
        } else {
            for (int i = left; i <= right; i++) {
                graph[y][i] = FLOW;
            }
            if (left_spill && left >= 0 && y >= 0 && left < size_x && y + 1 < size_y && !pending[y][left]) {
                sources.emplace(left, y);
                pending[y][left] = true;
            }
            if (right_spill && right >= 0 && y >= 0 && right < size_x && y + 1 < size_y && !pending[y][right]) {
                sources.emplace(right, y);
                pending[y][right] = true;
            }
        }
    }
    return std::ranges::count_if(graph | std::views::join, [dry](const Tile tile) -> bool { return (!dry && tile == FLOW) || tile == STILL; });
}

/*
--- Part Two ---
After a very long time, the water spring will run dry. How much water will be retained?

In the example above, water that won't eventually drain out is shown as ~, a total of 29 tiles.

How many water tiles are left after the water spring stops producing water and all remaining water not at rest has drained?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
