#include "inputs.hpp"

/*
--- Day 6: Chronal Coordinates ---
The device on your wrist beeps several times, and once again you feel like you're falling.

"Situation critical," the device announces. "Destination indeterminate. Chronal interference detected. Please specify new target coordinates."

The device then produces a list of coordinates (your puzzle input). Are they places it thinks are safe or dangerous? It recommends you check manual
page 729. The Elves did not give you a manual.

If they're dangerous, maybe you can minimize the danger by finding the coordinate that gives the largest distance from the other points.

Using only the Manhattan distance, determine the area around each coordinate by counting the number of integer X,Y locations that are closest to that
coordinate (and aren't tied in distance to any other coordinate).

Your goal is to find the size of the largest area that isn't infinite. For example, consider the following list of coordinates:
1, 1
1, 6
8, 3
3, 4
5, 5
8, 9

If we name these coordinates A through F, we can draw them on a grid, putting 0,0 at the top left:
..........
.A........
..........
........C.
...D......
.....E....
.B........
..........
..........
........F.

This view is partial - the actual grid extends infinitely in all directions. Using the Manhattan distance, each location's closest coordinate can be
determined, shown here in lowercase:
aaaaa.cccc
aAaaa.cccc
aaaddecccc
aadddeccCc
..dDdeeccc
bb.deEeecc
bBb.eeee..
bbb.eeefff
bbb.eeffff
bbb.ffffFf

Locations shown as . are equally far from two or more coordinates, and so they don't count as being closest to any.

In this example, the areas of coordinates A, B, C, and F are infinite - while not shown here, their areas extend forever outside the visible grid.
However, the areas of coordinates D and E are finite: D is closest to 9 locations, and E is closest to 17 (both including the coordinate's location
itself). Therefore, in this example, the size of the largest area is 17.

What is the size of the largest area that isn't infinite?
*/

int part1(const bool safe = false) {
    int res = 0, i = 1;
    std::string line;
    std::unordered_map<int, std::pair<int, int>> area;
    std::stringstream file(input6);
    int x_min = INT32_MAX, x_max = 0, y_min = INT32_MAX, y_max = 0;

    while (std::getline(file, line)) {
        auto& [x, y] = area[i++];
        std::sscanf(line.c_str(), "%d, %d", &y, &x);
        x_min = std::min(x_min, x);
        x_max = std::max(x_max, x);
        y_min = std::min(y_min, y);
        y_max = std::max(y_max, y);
    }
    std::vector map(++x_max - x_min, std::vector(++y_max - y_min, 0));
    std::vector<std::pair<int, int>> manhattan_distances(area.size());

    for (i = x_min; i < x_max; i++) {
        for (int j = y_min; j < y_max; j++) {
            std::ranges::transform(area, manhattan_distances.begin(),
                                   [i, j](const std::pair<int, std::pair<int, int>>& element) -> std::pair<int, int> {
                                       return {element.first, std::abs(element.second.first - i) + std::abs(element.second.second - j)};
                                   });
            const std::pair<int, int> min1 = *std::ranges::min_element(manhattan_distances, {}, &std::pair<int, int>::second);
            const std::pair<int, int> min2 = *std::ranges::min_element(manhattan_distances, {}, [&min1](const std::pair<int, int>& element) -> int {
                return element.second == min1.second ? INT32_MAX : element.second;
            });
            map[i - x_min][j - y_min] = min1.second != min2.second ? min1.first : 0;
            res += std::transform_reduce(manhattan_distances.begin(), manhattan_distances.end(), 0, std::plus(),
                                         [](const std::pair<int, int>& element) -> int { return element.second; }) < 10'000;
        }
    }
    std::unordered_set reject{0};

    for (i = 0; i < x_max - x_min; i++) {
        reject.insert({map[i].front(), map[i].back()});
    }
    for (i = 0; i < y_max - y_min; i++) {
        reject.insert({map.front()[i], map.back()[i]});
    }
    std::unordered_map<int, int> frequency;

    for (const int element : map | std::views::join | std::views::filter([&reject](const int value) -> bool { return !reject.contains(value); })) {
        frequency[element]++;
    }
    return safe ? res : *std::ranges::max_element(frequency | std::views::values);
}

/*
--- Part Two ---
On the other hand, if the coordinates are safe, maybe the best you can do is try to find a region near as many coordinates as possible.

For example, suppose you want the sum of the Manhattan distance to all of the coordinates to be less than 32. For each location, add up the distances
to all of the given coordinates; if the total of those distances is less than 32, that location is within the desired region. Using the same
coordinates as above, the resulting region looks like this:
..........
.A........
..........
...###..C.
..#D###...
..###E#...
.B.###....
..........
..........
........F.

In particular, consider the highlighted location 4,3 located at the top middle of the region. Its calculation is as follows, where abs() is the
absolute value function:
    - Distance to coordinate A: abs(4-1) + abs(3-1) =  5
    - Distance to coordinate B: abs(4-1) + abs(3-6) =  6
    - Distance to coordinate C: abs(4-8) + abs(3-3) =  4
    - Distance to coordinate D: abs(4-3) + abs(3-4) =  2
    - Distance to coordinate E: abs(4-5) + abs(3-5) =  3
    - Distance to coordinate F: abs(4-8) + abs(3-9) = 10
    - Total distance: 5 + 6 + 4 + 2 + 3 + 10 = 30

Because the total distance to all coordinates (30) is less than 32, the location is within the region.

This region, which also includes coordinates D and E, has a total size of 16.

Your actual region will need to be much larger than this example, though, instead including all locations with a total distance of less than 10000.

What is the size of the region containing all locations which have a total distance to all given coordinates of less than 10000?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
