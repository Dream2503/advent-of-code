#include <algorithm>
#include <iostream>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 14: Reindeer Olympics ---
This year is the Reindeer Olympics! Reindeer can fly at high speeds, but must rest occasionally to recover their energy. Santa would like to know
which of his reindeer is fastest, and so he has them race.

Reindeer can only either be flying (always at their top speed) or resting (not moving at all), and always spend whole seconds in either state.

For example, suppose you have the following Reindeer:
    - Comet can fly 14 km/s for 10 seconds, but then must rest for 127 seconds.
    - Dancer can fly 16 km/s for 11 seconds, but then must rest for 162 seconds.

After one second, Comet has gone 14 km, while Dancer has gone 16 km. After ten seconds, Comet has gone 140 km, while Dancer has gone 160 km. On the
eleventh second, Comet begins resting (staying at 140 km), and Dancer continues on for a total distance of 176 km. On the 12th second, both reindeer
are resting. They continue to rest until the 138th second, when Comet flies for another ten seconds. On the 174th second, Dancer flies for another 11
seconds.

In this example, after the 1000th second, both reindeer are resting, and Comet is in the lead at 1120 km (poor Dancer has only gotten 1056 km by that
point). So, in this situation, Comet would win (if the race ended at 1000 seconds).

Given the descriptions of each reindeer (in your puzzle input), after exactly 2503 seconds, what distance has the winning reindeer traveled?
*/

constexpr int time_limit = 2503;

int part1() {
    int max = 0;
    std::string line;
    std::stringstream file(input14);

    while (std::getline(file, line)) {
        int speed, move_time, rest_time, time = 0, distance = 0;
        std::sscanf(line.c_str(), "%*s can fly %d km/s for %d seconds, but then must rest for %d seconds.", &speed, &move_time, &rest_time);

        while (time < time_limit) {
            distance += speed * std::clamp(time_limit - time, 0, move_time);
            time += move_time + rest_time;
        }
        max = std::max(max, distance);
    }
    return max;
}

/*
--- Part Two ---
Seeing how reindeer move in bursts, Santa decides he's not pleased with the old scoring system.

Instead, at the end of each second, he awards one point to the reindeer currently in the lead. (If there are multiple reindeer tied for the lead, they
each get one point.) He keeps the traditional 2503 second time limit, of course, as doing otherwise would be entirely ridiculous.

Given the example reindeer from above, after the first second, Dancer is in the lead and gets one point. He stays in the lead until several seconds
into Comet's second burst: after the 140th second, Comet pulls into the lead and gets his first point. Of course, since Dancer had been in the lead
for the 139 seconds before that, he has accumulated 139 points by the 140th second.

After the 1000th second, Dancer has accumulated 689 points, while poor Comet, our old champion, only has 312. So, with the new scoring system, Dancer
would win (if the race ended at 1000 seconds).

Again given the descriptions of each reindeer (in your puzzle input), after exactly 2503 seconds, how many points does the winning reindeer have?
*/

struct Reindeer {
    int distance, speed, move_time, time_moved, rest_time, time_rested, points;
    bool is_moving;
};

int part2() {
    std::string line;
    std::stringstream file(input14);
    std::vector<Reindeer> reindeers;

    while (std::getline(file, line)) {
        int speed, move_time, rest_time;
        sscanf(line.c_str(), "%*s can fly %d km/s for %d seconds, but then must rest for %d seconds.", &speed, &move_time, &rest_time);
        reindeers.push_back({0, speed, move_time, 0, rest_time, 0, 0, true});
    }
    for (int t = 0; t < time_limit; t++) {
        for (Reindeer& deer : reindeers) {
            if (deer.is_moving && deer.time_moved < deer.move_time) {
                deer.distance += deer.speed;
                deer.time_moved++;

                if (deer.time_moved == deer.move_time) {
                    deer.time_moved = 0;
                    deer.is_moving = false;
                }
            } else if (deer.time_rested < deer.rest_time) {
                deer.time_rested++;

                if (deer.time_rested == deer.rest_time) {
                    deer.time_rested = 0;
                    deer.is_moving = true;
                }
            }
        }
        int max_distance = std::ranges::max_element(reindeers, [](const Reindeer& deer1, const Reindeer& deer2) -> bool {
                               return deer1.distance < deer2.distance;
                           })->distance;
        std::ranges::for_each(reindeers, [&max_distance](Reindeer& deer) -> void {
            if (deer.distance == max_distance) {
                deer.points++;
            }
        });
    }
    return std::ranges::max_element(reindeers, [](const Reindeer& deer1, const Reindeer& deer2) -> bool { return deer1.points < deer2.points; })
        ->points;
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
