#include <algorithm>
#include <iostream>
#include <queue>
#include <ranges>
#include <sstream>
#include <unordered_set>
#include "../util.hpp"
#include "inputs.hpp"

/*
--- Day 24: Air Duct Spelunking ---
You've finally met your match; the doors that provide access to the roof are locked tight, and all of the controls and related electronics are
inaccessible. You simply can't reach them.

The robot that cleans the air ducts, however, can.

It's not a very fast little robot, but you reconfigure it to be able to interface with some of the exposed wires that have been routed through the
HVAC system. If you can direct it to each of those locations, you should be able to bypass the security controls.

You extract the duct layout for this area from some blueprints you acquired and create a map with the relevant locations marked (your puzzle input).
0 is your current location, from which the cleaning robot embarks; the other numbers are (in no particular order) the locations the robot needs to
visit at least once each. Walls are marked as #, and open passages are marked as .. Numbers behave like open passages.

For example, suppose you have a map like the following:
###########
#0.1.....2#
#.#######.#
#4.......3#
###########

To reach all of the points of interest as quickly as possible, you would have the robot take the following path:
    - 0 to 4 (2 steps)
    - 4 to 1 (4 steps; it can't move diagonally)
    - 1 to 2 (6 steps)
    - 2 to 3 (2 steps)

Since the robot isn't very fast, you need to find it the shortest route. This path is the fewest steps (in the above example, a total of 14) required
to start at 0 and then visit every other location at least once.

Given your actual map, and starting from location 0, what is the fewest number of steps required to visit every non-0 number marked on the map at
least once?
*/

struct Path {
    int x, y, steps = 0;
    bool operator==(const Path& other) const { return x == other.x && y == other.y; }
};

template <>
struct std::hash<Path> {
    size_t operator()(const Path& path) const noexcept { return fnv1a_hash_bytes(reinterpret_cast<const uint8_t*>(&path), sizeof(path)); }
};

int compute_distance(const std::vector<std::string>& map, const int i, const int j, const int terminate) {
    std::queue<Path> queue;
    std::unordered_set<Path> seen = {{i, j}};
    queue.emplace(i, j, 0);

    while (!queue.empty()) {
        const auto [x, y, steps] = queue.front();
        queue.pop();

        if (map[x][y] == terminate + '0') {
            return steps;
        }
        if (map[x][y] != '#') {
            for (const auto [i, j] : {std::pair(-1, 0), {0, -1}, {1, 0}, {0, 1}}) {
                const Path path = {x + i, y + j, steps + 1};

                if (!seen.contains(path)) {
                    queue.push(path);
                    seen.insert(path);
                }
            }
        }
    }
    return -1;
}

void search(const std::vector<std::vector<int>>& graph, std::unordered_set<int>& seen, const int current, const int current_distance, int& best,
            const bool complete) {
    if (current_distance >= best) {
        return;
    }
    if (graph.size() == seen.size()) {
        best = std::min(best, current_distance + complete * graph.at(current).at(0));
        return;
    }
    const std::vector<int>& row = graph[current];
    const int size = row.size();

    for (int i = 0; i < size; i++) {
        if (!seen.contains(i)) {
            seen.insert(i);
            search(graph, seen, i, current_distance + row[i], best, complete);
            seen.erase(i);
        }
    }
}

int part1(const bool complete = false) {
    int max = 0;
    std::string line;
    std::vector<std::string> map;
    std::stringstream file(input24);

    while (std::getline(file, line)) {
        map.push_back(line);
        max = std::max(max, *std::ranges::max_element(line) - '0');
    }
    const int size = map.size();
    std::vector graph(max + 1, std::vector(max + 1, 0));

    for (int i = 0; i <= max; i++) {
        for (int k = 0; k < size; k++) {
            const int start = map[k].find(i + '0');

            if (start != std::string::npos) {
                for (int j = i + 1; j <= max; j++) {
                    graph[i][j] = graph[j][i] = compute_distance(map, k, start, j);
                }
                break;
            }
        }
    }
    int best = INT32_MAX;
    std::unordered_set<int> seen;
    seen.insert(0);
    search(graph, seen, 0, 0, best, complete);
    return best;
}

/*
--- Part Two ---
Of course, if you leave the cleaning robot somewhere weird, someone is bound to notice.

What is the fewest number of steps required to start at 0, visit every non-0 number marked on the map at least once, and then return to 0?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
