#include "inputs.hpp"

/*
--- Day 15: Beacon Exclusion Zone ---
You feel the ground rumble again as the distress signal leads you to a large network of subterranean tunnels. You don't have time to search them all,
but you don't need to: your pack contains a set of deployable sensors that you imagine were originally built to locate lost Elves.

The sensors aren't very powerful, but that's okay; your handheld device indicates that you're close enough to the source of the distress signal to use
them. You pull the emergency sensor system out of your pack, hit the big button on top, and the sensors zoom off down the tunnels.

Once a sensor finds a spot it thinks will give it a good reading, it attaches itself to a hard surface and begins monitoring for the nearest signal
source beacon. Sensors and beacons always exist at integer coordinates. Each sensor knows its own position and can determine the position of a beacon
precisely; however, sensors can only lock on to the one beacon closest to the sensor as measured by the Manhattan distance. (There is never a tie
where two beacons are the same distance to a sensor.)

It doesn't take long for the sensors to report back their positions and closest beacons (your puzzle input). For example:
Sensor at x=2, y=18: closest beacon is at x=-2, y=15
Sensor at x=9, y=16: closest beacon is at x=10, y=16
Sensor at x=13, y=2: closest beacon is at x=15, y=3
Sensor at x=12, y=14: closest beacon is at x=10, y=16
Sensor at x=10, y=20: closest beacon is at x=10, y=16
Sensor at x=14, y=17: closest beacon is at x=10, y=16
Sensor at x=8, y=7: closest beacon is at x=2, y=10
Sensor at x=2, y=0: closest beacon is at x=2, y=10
Sensor at x=0, y=11: closest beacon is at x=2, y=10
Sensor at x=20, y=14: closest beacon is at x=25, y=17
Sensor at x=17, y=20: closest beacon is at x=21, y=22
Sensor at x=16, y=7: closest beacon is at x=15, y=3
Sensor at x=14, y=3: closest beacon is at x=15, y=3
Sensor at x=20, y=1: closest beacon is at x=15, y=3

So, consider the sensor at 2,18; the closest beacon to it is at -2,15. For the sensor at 9,16, the closest beacon to it is at 10,16.

Drawing sensors as S and beacons as B, the above arrangement of sensors and beacons looks like this:
               1    1    2    2
     0    5    0    5    0    5
 0 ....S.......................
 1 ......................S.....
 2 ...............S............
 3 ................SB..........
 4 ............................
 5 ............................
 6 ............................
 7 ..........S.......S.........
 8 ............................
 9 ............................
10 ....B.......................
11 ..S.........................
12 ............................
13 ............................
14 ..............S.......S.....
15 B...........................
16 ...........SB...............
17 ................S..........B
18 ....S.......................
19 ............................
20 ............S......S........
21 ............................
22 .......................B....

This isn't necessarily a comprehensive map of all beacons in the area, though. Because each sensor only identifies its closest beacon, if a sensor
detects a beacon, you know there are no other beacons that close or closer to that sensor. There could still be beacons that just happen to not be the
closest beacon to any sensor. Consider the sensor at 8,7:
               1    1    2    2
     0    5    0    5    0    5
-2 ..........#.................
-1 .........###................
 0 ....S...#####...............
 1 .......#######........S.....
 2 ......#########S............
 3 .....###########SB..........
 4 ....#############...........
 5 ...###############..........
 6 ..#################.........
 7 .#########S#######S#........
 8 ..#################.........
 9 ...###############..........
10 ....B############...........
11 ..S..###########............
12 ......#########.............
13 .......#######..............
14 ........#####.S.......S.....
15 B........###................
16 ..........#SB...............
17 ................S..........B
18 ....S.......................
19 ............................
20 ............S......S........
21 ............................
22 .......................B....

This sensor's closest beacon is at 2,10, and so you know there are no beacons that close or closer (in any positions marked #).

None of the detected beacons seem to be producing the distress signal, so you'll need to work out where the distress beacon is by working out where it
isn't. For now, keep things simple by counting the positions where a beacon cannot possibly be along just a single row.

So, suppose you have an arrangement of beacons and sensors like in the example above and, just in the row where y=10, you'd like to count the number
of positions a beacon cannot possibly exist. The coverage from all sensors near that row looks like this:
                 1    1    2    2
       0    5    0    5    0    5
 9 ...#########################...
10 ..####B######################..
11 .###S#############.###########.

In this example, in the row where y=10, there are 26 positions where a beacon cannot be present.

Consult the report from the sensors you just deployed. In the row where y=2000000, how many positions cannot contain a beacon?
*/

std::pair<std::vector<std::pair<Vec2<int>, int>>, std::vector<Vec2<int>>> parse(const char* input) {
    std::string line;
    std::vector<std::pair<Vec2<int>, int>> sensors;
    std::vector<Vec2<int>> beacons;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        Vec2<int> sensor, beacon;
        std::sscanf(line.c_str(), "Sensor at x=%d, y=%d: closest beacon is at x=%d, y=%d", &sensor.x, &sensor.y, &beacon.x, &beacon.y);
        sensors.emplace_back(sensor, sensor.manhattan_distance(beacon));
        beacons.push_back(beacon);
    }
    return {sensors, beacons};
}

uint64_t part1(const char* input, const int y) {
    const auto [sensors, beacons] = parse(input);
    std::vector<std::pair<int, int>> ranges;
    std::unordered_set<int> beacons_at_y;

    for (const Vec2<int>& beacon : beacons) {
        if (beacon.y == y) {
            beacons_at_y.insert(beacon.x);
        }
    }
    for (const auto& [sensor, distance] : sensors) {
        const int dy = std::abs(sensor.y - y);

        if (dy <= distance) {
            const int width = distance - dy;
            ranges.emplace_back(sensor.x - width, sensor.x + width);
        }
    }
    std::ranges::sort(ranges);
    int result = 0, left = ranges.front().first, right = ranges.front().second;

    for (const auto& [l, r] : ranges | std::views::drop(1)) {
        if (l > right + 1) {
            result += right - left + 1;
            left = l;
            right = r;
        } else {
            right = std::max(right, r);
        }
    }
    result += right - left + 1;
    return result - beacons_at_y.size();
}

/*
--- Part Two ---
Your handheld device indicates that the distress signal is coming from a beacon nearby. The distress beacon is not detected by any sensor, but the
distress beacon must have x and y coordinates each no lower than 0 and no larger than 4000000.

To isolate the distress beacon's signal, you need to determine its tuning frequency, which can be found by multiplying its x coordinate by 4000000 and
then adding its y coordinate.

In the example above, the search space is smaller: instead, the x and y coordinates can each be at most 20. With this reduced search area, there is
only a single position that could have a beacon: x=14, y=11. The tuning frequency for this distress beacon is 56000011.

Find the only possible position for the distress beacon. What is its tuning frequency?
*/

uint64_t part2(const char* input, const int limit) {
    const auto [sensors, beacons] = parse(input);
    std::vector<std::pair<int, int>> ranges;

    for (int i = 0; i <= limit; i++) {
        ranges.clear();

        for (const auto& [sensor, distance] : sensors) {
            const int dy = std::abs(sensor.y - i);

            if (dy <= distance) {
                const int width = distance - dy;
                ranges.emplace_back(std::max(0, sensor.x - width), std::min(limit, sensor.x + width));
            }
        }
        if (ranges.empty()) {
            continue;
        }
        std::ranges::sort(ranges);
        int right = ranges.front().second;

        for (const auto& [left, r] : ranges | std::views::drop(1)) {
            if (left > right + 1) {
                return static_cast<int64_t>(right + 1) * 4'000'000 + i;
            }
            right = std::max(right, r);
        }
        if (right < limit) {
            return static_cast<int64_t>(right + 1) * 4'000'000 + i;
        }
    }
    std::unreachable();
}

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(Sensor at x=2, y=18: closest beacon is at x=-2, y=15
Sensor at x=9, y=16: closest beacon is at x=10, y=16
Sensor at x=13, y=2: closest beacon is at x=15, y=3
Sensor at x=12, y=14: closest beacon is at x=10, y=16
Sensor at x=10, y=20: closest beacon is at x=10, y=16
Sensor at x=14, y=17: closest beacon is at x=10, y=16
Sensor at x=8, y=7: closest beacon is at x=2, y=10
Sensor at x=2, y=0: closest beacon is at x=2, y=10
Sensor at x=0, y=11: closest beacon is at x=2, y=10
Sensor at x=20, y=14: closest beacon is at x=25, y=17
Sensor at x=17, y=20: closest beacon is at x=21, y=22
Sensor at x=16, y=7: closest beacon is at x=15, y=3
Sensor at x=14, y=3: closest beacon is at x=15, y=3
Sensor at x=20, y=1: closest beacon is at x=15, y=3)",
                   10, 26);
    Executor::run(part1, input15, 2'000'000);

    std::println("Part 2:");
    Executor::test(part2, R"(Sensor at x=2, y=18: closest beacon is at x=-2, y=15
Sensor at x=9, y=16: closest beacon is at x=10, y=16
Sensor at x=13, y=2: closest beacon is at x=15, y=3
Sensor at x=12, y=14: closest beacon is at x=10, y=16
Sensor at x=10, y=20: closest beacon is at x=10, y=16
Sensor at x=14, y=17: closest beacon is at x=10, y=16
Sensor at x=8, y=7: closest beacon is at x=2, y=10
Sensor at x=2, y=0: closest beacon is at x=2, y=10
Sensor at x=0, y=11: closest beacon is at x=2, y=10
Sensor at x=20, y=14: closest beacon is at x=25, y=17
Sensor at x=17, y=20: closest beacon is at x=21, y=22
Sensor at x=16, y=7: closest beacon is at x=15, y=3
Sensor at x=14, y=3: closest beacon is at x=15, y=3
Sensor at x=20, y=1: closest beacon is at x=15, y=3)",
                   20, 56000011);
    Executor::run(part2, input15, 4'000'000);

    return 0;
}
