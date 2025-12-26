#include "inputs.hpp"

/*
--- Day 23: Experimental Emergency Teleportation ---
Using your torch to search the darkness of the rocky cavern, you finally locate the man's friend: a small reindeer.

You're not sure how it got so far in this cave. It looks sick - too sick to walk - and too heavy for you to carry all the way back. Sleighs won't be
invented for another 1500 years, of course.

The only option is experimental emergency teleportation.

You hit the "experimental emergency teleportation" button on the device and push I accept the risk on no fewer than 18 different warning messages.
Immediately, the device deploys hundreds of tiny nanobots which fly around the cavern, apparently assembling themselves into a very specific
formation. The device lists the X,Y,Z position (pos) for each nanobot as well as its signal radius (r) on its tiny screen (your puzzle input).

Each nanobot can transmit signals to any integer coordinate which is a distance away from it less than or equal to its signal radius (as measured by
Manhattan distance). Coordinates a distance away of less than or equal to a nanobot's signal radius are said to be in range of that nanobot.

Before you start the teleportation process, you should determine which nanobot is the strongest (that is, which has the largest signal radius) and
then, for that nanobot, the total number of nanobots that are in range of it, including itself.

For example, given the following nanobots:
pos=<0,0,0>, r=4
pos=<1,0,0>, r=1
pos=<4,0,0>, r=3
pos=<0,2,0>, r=1
pos=<0,5,0>, r=3
pos=<0,0,3>, r=1
pos=<1,1,1>, r=1
pos=<1,1,2>, r=1
pos=<1,3,1>, r=1

The strongest nanobot is the first one (position 0,0,0) because its signal radius, 4 is the largest. Using that nanobot's location and signal radius,
the following nanobots are in or out of range:
    - The nanobot at 0,0,0 is distance 0 away, and so it is in range.
    - The nanobot at 1,0,0 is distance 1 away, and so it is in range.
    - The nanobot at 4,0,0 is distance 4 away, and so it is in range.
    - The nanobot at 0,2,0 is distance 2 away, and so it is in range.
    - The nanobot at 0,5,0 is distance 5 away, and so it is not in range.
    - The nanobot at 0,0,3 is distance 3 away, and so it is in range.
    - The nanobot at 1,1,1 is distance 3 away, and so it is in range.
    - The nanobot at 1,1,2 is distance 4 away, and so it is in range.
    - The nanobot at 1,3,1 is distance 5 away, and so it is not in range.

In this example, in total, 7 nanobots are in range of the nanobot with the largest signal radius.

Find the nanobot with the largest signal radius. How many nanobots are in range of its signals?
*/

struct Nanobot {
    Vec3<int> position;
    int range;
};

std::vector<Nanobot> parse_input(const char* input) {
    std::string line;
    std::vector<Nanobot> nanobots;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        int x, y, z, r;
        std::sscanf(line.c_str(), "pos=<%d,%d,%d>, r=%d", &x, &y, &z, &r);
        nanobots.emplace_back(Vec3(x, y, z), r);
    }
    return nanobots;
}

int part1() {
    const std::vector<Nanobot> nanobots = parse_input(input23);
    Nanobot bot = *std::ranges::max_element(nanobots, {}, &Nanobot::range);
    return std::ranges::count_if(nanobots,
                                 [&bot](const Nanobot& nanobot) -> bool { return nanobot.position.manhattan_distance(bot.position) <= bot.range; });
}

/*
--- Part Two ---
Now, you just need to figure out where to position yourself so that you're actually teleported when the nanobots activate.

To increase the probability of success, you need to find the coordinate which puts you in range of the largest number of nanobots. If there are
multiple, choose one closest to your position (0,0,0, measured by manhattan distance).

For example, given the following nanobot formation:

pos=<10,12,12>, r=2
pos=<12,14,12>, r=2
pos=<16,12,12>, r=4
pos=<14,14,14>, r=6
pos=<50,50,50>, r=200
pos=<10,10,10>, r=5
Many coordinates are in range of some of the nanobots in this formation. However, only the coordinate 12,12,12 is in range of the most nanobots: it is
in range of the first five, but is not in range of the nanobot at 10,10,10. (All other coordinates are in range of fewer than five nanobots.) This
coordinate's distance from 0,0,0 is 36.

Find the coordinates that are in range of the largest number of nanobots. What is the shortest manhattan distance between any of those points and
0,0,0?
*/

struct Cube {
    Vec3<int> position;
    int size, bots, distance;
};

int distance_to_cube(const Vec3<int>& position, const Cube& cube) {
    Vec3 difference = 0;

    if (position.x < cube.position.x) {
        difference.x = cube.position.x - position.x;
    } else if (position.x > cube.position.x + cube.size - 1) {
        difference.x = position.x - (cube.position.x + cube.size - 1);
    }
    if (position.y < cube.position.y) {
        difference.y = cube.position.y - position.y;
    } else if (position.y > cube.position.y + cube.size - 1) {
        difference.y = position.y - (cube.position.y + cube.size - 1);
    }
    if (position.z < cube.position.z) {
        difference.z = cube.position.z - position.z;
    } else if (position.z > cube.position.z + cube.size - 1) {
        difference.z = position.z - (cube.position.z + cube.size - 1);
    }
    return difference.manhattan_distance(Vec3(0));
}

int part2() {
    auto comparator = [](const Cube& lhs, const Cube& rhs) -> bool {
        if (lhs.bots != rhs.bots) {
            return lhs.bots < rhs.bots;
        }
        if (lhs.distance != rhs.distance) {
            return lhs.distance > rhs.distance;
        }
        return lhs.size > rhs.size;
    };
    const std::vector<Nanobot> nanobots = parse_input(input23);
    Vec3 min_position = INT32_MAX, max_position = INT32_MIN;

    for (const auto& [position, range] : nanobots) {
        min_position = std::min(min_position, position);
        max_position = std::max(max_position, position);
    }
    const int span = std::max(max_position - min_position), size = std::pow(2, std::ceil(std::log2(span)));

    Cube root;
    root.position = min_position;
    root.size = size;
    root.bots = std::ranges::count_if(nanobots,
                                      [&root](const Nanobot& nanobot) -> bool { return distance_to_cube(nanobot.position, root) <= nanobot.range; });
    root.distance = distance_to_cube(0, root);
    std::priority_queue<Cube, std::vector<Cube>, decltype(comparator)> queue(comparator);
    queue.push(root);

    while (!queue.empty()) {
        const auto [position, size, _, distance] = queue.top();
        queue.pop();

        if (size == 1) {
            return distance;
        }
        const int half = size / 2;

        for (int dx = 0; dx < 2; dx++) {
            for (int dy = 0; dy < 2; dy++) {
                for (int dz = 0; dz < 2; dz++) {
                    Cube child;
                    child.position = position + Vec3(dx, dy, dz) * half;
                    child.size = half;
                    child.bots = std::ranges::count_if(
                        nanobots, [&child](const Nanobot& nanobot) -> bool { return distance_to_cube(nanobot.position, child) <= nanobot.range; });

                    if (child.bots == 0) {
                        continue;
                    }
                    child.distance = distance_to_cube(0, child);
                    queue.push(child);
                }
            }
        }
    }
    return -1;
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
