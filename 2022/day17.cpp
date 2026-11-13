#include "inputs.hpp"

/*
--- Day 17: Pyroclastic Flow ---
Your handheld device has located an alternative exit from the cave for you and the elephants. The ground is rumbling almost continuously now, but the
strange valves bought you some time. It's definitely getting warmer in here, though.

The tunnels eventually open into a very tall, narrow chamber. Large, oddly-shaped rocks are falling into the chamber from above, presumably due to all
the rumbling. If you can't work out where the rocks will fall next, you might be crushed!

The five types of rocks have the following peculiar shapes, where # is rock and . is empty space:
####

.#.
###
.#.

..#
..#
###

#
#
#
#

##
##

The rocks fall in the order shown above: first the - shape, then the + shape, and so on. Once the end of the list is reached, the same order repeats:
the - shape falls first, sixth, 11th, 16th, etc.

The rocks don't spin, but they do get pushed around by jets of hot gas coming out of the walls themselves. A quick scan reveals the effect the jets of
hot gas will have on the rocks as they fall (your puzzle input).

For example, suppose this was the jet pattern in your cave:
>>><<><>><<<>><>>><<<>>><<<><<<>><>><<>>

In jet patterns, < means a push to the left, while > means a push to the right. The pattern above means that the jets will push a falling rock right,
then right, then right, then left, then left, then right, and so on. If the end of the list is reached, it repeats.

The tall, vertical chamber is exactly seven units wide. Each rock appears so that its left edge is two units away from the left wall and its bottom
edge is three units above the highest rock in the room (or the floor, if there isn't one).

After a rock appears, it alternates between being pushed by a jet of hot gas one unit (in the direction indicated by the next symbol in the jet
pattern) and then falling one unit down. If any movement would cause any part of the rock to move into the walls, floor, or a stopped rock, the
movement instead does not occur. If a downward movement would have caused a falling rock to move into the floor or an already-fallen rock, the falling
rock stops where it is (having landed on something) and a new rock immediately begins falling.

Drawing falling rocks with @ and stopped rocks with #, the jet pattern in the example above manifests as follows:
The first rock begins falling:
|..@@@@.|
|.......|
|.......|
|.......|
+-------+

Jet of gas pushes rock right:
|...@@@@|
|.......|
|.......|
|.......|
+-------+

Rock falls 1 unit:
|...@@@@|
|.......|
|.......|
+-------+

Jet of gas pushes rock right, but nothing happens:
|...@@@@|
|.......|
|.......|
+-------+

Rock falls 1 unit:
|...@@@@|
|.......|
+-------+

Jet of gas pushes rock right, but nothing happens:
|...@@@@|
|.......|
+-------+

Rock falls 1 unit:
|...@@@@|
+-------+

Jet of gas pushes rock left:
|..@@@@.|
+-------+

Rock falls 1 unit, causing it to come to rest:
|..####.|
+-------+

A new rock begins falling:
|...@...|
|..@@@..|
|...@...|
|.......|
|.......|
|.......|
|..####.|
+-------+

Jet of gas pushes rock left:
|..@....|
|.@@@...|
|..@....|
|.......|
|.......|
|.......|
|..####.|
+-------+

Rock falls 1 unit:
|..@....|
|.@@@...|
|..@....|
|.......|
|.......|
|..####.|
+-------+

Jet of gas pushes rock right:
|...@...|
|..@@@..|
|...@...|
|.......|
|.......|
|..####.|
+-------+

Rock falls 1 unit:
|...@...|
|..@@@..|
|...@...|
|.......|
|..####.|
+-------+

Jet of gas pushes rock left:
|..@....|
|.@@@...|
|..@....|
|.......|
|..####.|
+-------+

Rock falls 1 unit:
|..@....|
|.@@@...|
|..@....|
|..####.|
+-------+

Jet of gas pushes rock right:
|...@...|
|..@@@..|
|...@...|
|..####.|
+-------+

Rock falls 1 unit, causing it to come to rest:
|...#...|
|..###..|
|...#...|
|..####.|
+-------+

A new rock begins falling:
|....@..|
|....@..|
|..@@@..|
|.......|
|.......|
|.......|
|...#...|
|..###..|
|...#...|
|..####.|
+-------+

The moment each of the next few rocks begins falling, you would see this:
|..@....|
|..@....|
|..@....|
|..@....|
|.......|
|.......|
|.......|
|..#....|
|..#....|
|####...|
|..###..|
|...#...|
|..####.|
+-------+

|..@@...|
|..@@...|
|.......|
|.......|
|.......|
|....#..|
|..#.#..|
|..#.#..|
|#####..|
|..###..|
|...#...|
|..####.|
+-------+

|..@@@@.|
|.......|
|.......|
|.......|
|....##.|
|....##.|
|....#..|
|..#.#..|
|..#.#..|
|#####..|
|..###..|
|...#...|
|..####.|
+-------+

|...@...|
|..@@@..|
|...@...|
|.......|
|.......|
|.......|
|.####..|
|....##.|
|....##.|
|....#..|
|..#.#..|
|..#.#..|
|#####..|
|..###..|
|...#...|
|..####.|
+-------+

|....@..|
|....@..|
|..@@@..|
|.......|
|.......|
|.......|
|..#....|
|.###...|
|..#....|
|.####..|
|....##.|
|....##.|
|....#..|
|..#.#..|
|..#.#..|
|#####..|
|..###..|
|...#...|
|..####.|
+-------+

|..@....|
|..@....|
|..@....|
|..@....|
|.......|
|.......|
|.......|
|.....#.|
|.....#.|
|..####.|
|.###...|
|..#....|
|.####..|
|....##.|
|....##.|
|....#..|
|..#.#..|
|..#.#..|
|#####..|
|..###..|
|...#...|
|..####.|
+-------+

|..@@...|
|..@@...|
|.......|
|.......|
|.......|
|....#..|
|....#..|
|....##.|
|....##.|
|..####.|
|.###...|
|..#....|
|.####..|
|....##.|
|....##.|
|....#..|
|..#.#..|
|..#.#..|
|#####..|
|..###..|
|...#...|
|..####.|
+-------+

|..@@@@.|
|.......|
|.......|
|.......|
|....#..|
|....#..|
|....##.|
|##..##.|
|######.|
|.###...|
|..#....|
|.####..|
|....##.|
|....##.|
|....#..|
|..#.#..|
|..#.#..|
|#####..|
|..###..|
|...#...|
|..####.|
+-------+

To prove to the elephants your simulation is accurate, they want to know how tall the tower will get after 2022 rocks have stopped (but before the
2023rd rock begins falling). In this example, the tower of rocks will be 3068 units tall.

How many units tall will the tower of rocks be after 2022 rocks have stopped falling?
*/

bool can_move(const std::vector<Vec2<int>>& rock, const Vec2<int>& direction, const std::unordered_set<Vec2<int>>& seen) {
    for (const Vec2<int>& element : rock) {
        const Vec2<int> next = element + direction;

        if (next.x < 0 || next.y < 0 || next.y >= 7 || seen.contains(next)) {
            return false;
        }
    }
    return true;
}

int64_t solve(const char* input, const int64_t target) {
    const int size = std::string_view(input).size();
    constexpr Vec2 down = {-1, 0};
    const std::array<std::vector<Vec2<int>>, 5> rocks = {
        std::vector{Vec2{0, 0}, {0, 1}, {0, 2}, {0, 3}},
        {{0, 1}, {1, 0}, {1, 1}, {1, 2}, {2, 1}},
        {{0, 0}, {0, 1}, {0, 2}, {1, 2}, {2, 2}},
        {{0, 0}, {1, 0}, {2, 0}, {3, 0}},
        {{0, 0}, {0, 1}, {1, 0}, {1, 1}},
    };
    bool cycle_handled = false;
    int64_t i = 0, skipped_height = 0;
    Vec2 current(3, 2);
    std::unordered_set<Vec2<int>> seen;
    std::unordered_map<std::string, Vec2<int64_t>> states;

    for (int64_t j = 0; j < target; j++) {
        std::vector<Vec2<int>> rock = rocks[j % 5];

        for (Vec2<int>& element : rock) {
            element += current;
        }
        while (true) {
            const Vec2<int> push = input[i++ % size] == '>' ? Vec2{0, 1} : Vec2{0, -1};

            if (can_move(rock, push, seen)) {
                for (Vec2<int>& element : rock) {
                    element += push;
                }
            }
            if (can_move(rock, down, seen)) {
                for (Vec2<int>& element : rock) {
                    element += down;
                }
                continue;
            }
            for (const Vec2<int>& element : rock) {
                seen.insert(element);
                current.x = std::max(current.x, element.x + 4);
            }
            break;
        }
        if (cycle_handled) {
            continue;
        }
        const int64_t rocks_dropped = j + 1, height = current.x - 3, rows = std::min<int64_t>(64, height);
        std::string key = std::to_string(rocks_dropped % 5) + "," + std::to_string(i % size) + ":";

        for (int64_t depth = 0; depth < rows; depth++) {
            const int x = height - 1 - depth;
            uint8_t mask = 0;

            for (int y = 0; y < 7; y++) {
                if (seen.contains({x, y})) {
                    mask |= 1U << y;
                }
            }
            key.push_back(mask);
        }
        const auto [itr, inserted] = states.emplace(std::move(key), Vec2(rocks_dropped, height));

        if (inserted) {
            continue;
        }
        const int64_t cycle_rocks = rocks_dropped - itr->second.x, repetitions = (target - rocks_dropped) / cycle_rocks;

        if (repetitions > 0) {
            j += repetitions * cycle_rocks;
            skipped_height += repetitions * (height - itr->second.y);
        }
        cycle_handled = true;
    }
    return current.x - 3 + skipped_height;
}

int64_t part1(const char* input) { return solve(input, 2022); }

/*
--- Part Two ---
The elephants are not impressed by your simulation. They demand to know how tall the tower will be after 1000000000000 rocks have stopped! Only then
will they feel confident enough to proceed through the cave.

In the example above, the tower would be 1514285714288 units tall!

How tall will the tower be after 1000000000000 rocks have stopped?
*/

int64_t part2(const char* input) { return solve(input, 1000000000000); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, ">>><<><>><<<>><>>><<<>>><<<><<<>><>><<>>", 3068);
    Executor::run(part1, input17);

    std::println("Part 2:");
    Executor::test(part2, ">>><<><>><<<>><>>><<<>>><<<><<<>><>><<>>", 1514285714288);
    Executor::run(part2, input17);
    return 0;
}
