#include "inputs.hpp"

/*
--- Day 16: Proboscidea Volcanium ---
The sensors have led you to the origin of the distress signal: yet another handheld device, just like the one the Elves gave you. However, you don't
see any Elves around; instead, the device is surrounded by elephants! They must have gotten lost in these tunnels, and one of the elephants apparently
figured out how to turn on the distress signal.

The ground rumbles again, much stronger this time. What kind of cave is this, exactly? You scan the cave with your handheld device; it reports mostly
igneous rock, some ash, pockets of pressurized gas, magma... this isn't just a cave, it's a volcano!

You need to get the elephants out of here, quickly. Your device estimates that you have 30 minutes before the volcano erupts, so you don't have time
to go back out the way you came in.

You scan the cave for other options and discover a network of pipes and pressure-release valves. You aren't sure how such a system got into a volcano,
but you don't have time to complain; your device produces a report (your puzzle input) of each valve's flow rate if it were opened (in pressure per
minute) and the tunnels you could use to move between the valves.

There's even a valve in the room you and the elephants are currently standing in labeled AA. You estimate it will take you one minute to open a single
valve and one minute to follow any tunnel from one valve to another. What is the most pressure you could release?

For example, suppose you had the following scan output:
Valve AA has flow rate=0; tunnels lead to valves DD, II, BB
Valve BB has flow rate=13; tunnels lead to valves CC, AA
Valve CC has flow rate=2; tunnels lead to valves DD, BB
Valve DD has flow rate=20; tunnels lead to valves CC, AA, EE
Valve EE has flow rate=3; tunnels lead to valves FF, DD
Valve FF has flow rate=0; tunnels lead to valves EE, GG
Valve GG has flow rate=0; tunnels lead to valves FF, HH
Valve HH has flow rate=22; tunnel leads to valve GG
Valve II has flow rate=0; tunnels lead to valves AA, JJ
Valve JJ has flow rate=21; tunnel leads to valve II

All of the valves begin closed. You start at valve AA, but it must be damaged or jammed or something: its flow rate is 0, so there's no point in
opening it. However, you could spend one minute moving to valve BB and another minute opening it; doing so would release pressure during the remaining
28 minutes at a flow rate of 13, a total eventual pressure release of 28 * 13 = 364. Then, you could spend your third minute moving to valve CC and
your fourth minute opening it, providing an additional 26 minutes of eventual pressure release at a flow rate of 2, or 52 total pressure released by
valve CC.

Making your way through the tunnels like this, you could probably open many or all of the valves by the time 30 minutes have elapsed. However, you
need to release as much pressure as possible, so you'll need to be methodical. Instead, consider this approach:
== Minute 1 ==
No valves are open.
You move to valve DD.

== Minute 2 ==
No valves are open.
You open valve DD.

== Minute 3 ==
Valve DD is open, releasing 20 pressure.
You move to valve CC.

== Minute 4 ==
Valve DD is open, releasing 20 pressure.
You move to valve BB.

== Minute 5 ==
Valve DD is open, releasing 20 pressure.
You open valve BB.

== Minute 6 ==
Valves BB and DD are open, releasing 33 pressure.
You move to valve AA.

== Minute 7 ==
Valves BB and DD are open, releasing 33 pressure.
You move to valve II.

== Minute 8 ==
Valves BB and DD are open, releasing 33 pressure.
You move to valve JJ.

== Minute 9 ==
Valves BB and DD are open, releasing 33 pressure.
You open valve JJ.

== Minute 10 ==
Valves BB, DD, and JJ are open, releasing 54 pressure.
You move to valve II.

== Minute 11 ==
Valves BB, DD, and JJ are open, releasing 54 pressure.
You move to valve AA.

== Minute 12 ==
Valves BB, DD, and JJ are open, releasing 54 pressure.
You move to valve DD.

== Minute 13 ==
Valves BB, DD, and JJ are open, releasing 54 pressure.
You move to valve EE.

== Minute 14 ==
Valves BB, DD, and JJ are open, releasing 54 pressure.
You move to valve FF.

== Minute 15 ==
Valves BB, DD, and JJ are open, releasing 54 pressure.
You move to valve GG.

== Minute 16 ==
Valves BB, DD, and JJ are open, releasing 54 pressure.
You move to valve HH.

== Minute 17 ==
Valves BB, DD, and JJ are open, releasing 54 pressure.
You open valve HH.

== Minute 18 ==
Valves BB, DD, HH, and JJ are open, releasing 76 pressure.
You move to valve GG.

== Minute 19 ==
Valves BB, DD, HH, and JJ are open, releasing 76 pressure.
You move to valve FF.

== Minute 20 ==
Valves BB, DD, HH, and JJ are open, releasing 76 pressure.
You move to valve EE.

== Minute 21 ==
Valves BB, DD, HH, and JJ are open, releasing 76 pressure.
You open valve EE.

== Minute 22 ==
Valves BB, DD, EE, HH, and JJ are open, releasing 79 pressure.
You move to valve DD.

== Minute 23 ==
Valves BB, DD, EE, HH, and JJ are open, releasing 79 pressure.
You move to valve CC.

== Minute 24 ==
Valves BB, DD, EE, HH, and JJ are open, releasing 79 pressure.
You open valve CC.

== Minute 25 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

== Minute 26 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

== Minute 27 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

== Minute 28 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

== Minute 29 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

== Minute 30 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

This approach lets you release the most pressure possible in 30 minutes with this valve layout, 1651.

Work out the steps to release the most pressure in 30 minutes. What is the most pressure you can release?
*/

void dfs(const int64_t position, const int time, const int64_t opened, const int pressure, const std::vector<std::vector<int>>& dist,
         const std::vector<int>& flow, std::vector<int>& best, std::unordered_map<std::int64_t, int>& memo) {
    const int size = flow.size();
    const int64_t key = (opened << 10) | (position << 5) | time;

    if (const auto itr = memo.find(key); itr != memo.end() && itr->second >= pressure) {
        return;
    }
    memo[key] = pressure;
    best[opened] = std::max(best[opened], pressure);

    for (int i = 0; i < size; i++) {
        const std::int64_t bit = 1l << i;

        if (opened & bit) {
            continue;
        }
        const int distance = dist[position][i];

        if (distance == INT32_MAX) {
            continue;
        }
        const int remaining = time - distance - 1;

        if (remaining <= 0) {
            continue;
        }
        dfs(i + 1, remaining, opened | bit, pressure + flow[i] * remaining, dist, flow, best, memo);
    }
}

int part1(const char* input, const bool part2 = false) {
    std::unordered_map<int, std::pair<int, std::vector<int>>> valves;
    std::string line;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        std::string temp, start, rate, end;
        std::stringstream ss(line);
        ss >> temp >> start >> temp >> temp >> rate >> temp >> temp >> temp >> temp;
        const int key = (start.front() - 'A') * 26 + start.back() - 'A';
        std::sscanf(rate.c_str(), "rate=%d;", &valves[key].first);

        while (ss >> end) {
            if (end.back() == ',') {
                end.pop_back();
            }
            valves[key].second.push_back((end.front() - 'A') * 26 + end.back() - 'A');
        }
    }
    std::vector<int> useful = valves | std::views::filter([](const auto& valve) -> bool { return valve.second.first > 0; }) |
        std::views::transform([](const auto& valve) { return valve.first; }) | std::ranges::to<std::vector<int>>();
    std::ranges::sort(useful);
    const int size = useful.size();
    std::vector locations = {0};
    std::vector dist(size + 1, std::vector(size, INT32_MAX));
    locations.insert_range(locations.end(), useful);

    for (const int i : std::views::iota(0, size + 1)) {
        std::unordered_map<int, int> distance;
        std::queue<int> queue;
        distance[locations[i]] = 0;
        queue.push(locations[i]);

        while (!queue.empty()) {
            const int current = queue.front();
            queue.pop();

            for (const int next : valves[current].second) {
                if (!distance.contains(next)) {
                    distance[next] = distance[current] + 1;
                    queue.push(next);
                }
            }
        }
        for (int j = 0; j < size; j++) {
            if (const auto itr = distance.find(useful[j]); itr != distance.end()) {
                dist[i][j] = itr->second;
            }
        }
    }
    const int total_masks = 1 << size;
    std::vector<int> flow(size), best(total_masks, 0);
    std::unordered_map<int64_t, int> memo;
    std::ranges::transform(useful, flow.begin(), [&valves](const int id) -> int { return valves.at(id).first; });
    dfs(0, part2 ? 26 : 30, 0, 0, dist, flow, best, memo);

    if (!part2) {
        return std::ranges::max(best);
    }
    std::vector<int> best_subset = best;

    for (int bit = 0; bit < size; bit++) {
        for (int mask = 0; mask < total_masks; mask++) {
            if (mask & (1 << bit)) {
                best_subset[mask] = std::max(best_subset[mask], best_subset[mask ^ (1 << bit)]);
            }
        }
    }
    return std::ranges::max(std::views::iota(0, total_masks) |
                            std::views::transform([&](const int mask) -> int { return best[mask] + best_subset[(total_masks - 1) ^ mask]; }));
}


/*
--- Part Two ---
You're worried that even with an optimal approach, the pressure released won't be enough. What if you got one of the elephants to help you?

It would take you 4 minutes to teach an elephant how to open the right valves in the right order, leaving you with only 26 minutes to actually execute
your plan. Would having two of you working together be better, even if it means having less time? (Assume that you teach the elephant before opening
any valves yourself, giving you both the same full 26 minutes.)

In the example above, you could teach the elephant to help you as follows:
== Minute 1 ==
No valves are open.
You move to valve II.
The elephant moves to valve DD.

== Minute 2 ==
No valves are open.
You move to valve JJ.
The elephant opens valve DD.

== Minute 3 ==
Valve DD is open, releasing 20 pressure.
You open valve JJ.
The elephant moves to valve EE.

== Minute 4 ==
Valves DD and JJ are open, releasing 41 pressure.
You move to valve II.
The elephant moves to valve FF.

== Minute 5 ==
Valves DD and JJ are open, releasing 41 pressure.
You move to valve AA.
The elephant moves to valve GG.

== Minute 6 ==
Valves DD and JJ are open, releasing 41 pressure.
You move to valve BB.
The elephant moves to valve HH.

== Minute 7 ==
Valves DD and JJ are open, releasing 41 pressure.
You open valve BB.
The elephant opens valve HH.

== Minute 8 ==
Valves BB, DD, HH, and JJ are open, releasing 76 pressure.
You move to valve CC.
The elephant moves to valve GG.

== Minute 9 ==
Valves BB, DD, HH, and JJ are open, releasing 76 pressure.
You open valve CC.
The elephant moves to valve FF.

== Minute 10 ==
Valves BB, CC, DD, HH, and JJ are open, releasing 78 pressure.
The elephant moves to valve EE.

== Minute 11 ==
Valves BB, CC, DD, HH, and JJ are open, releasing 78 pressure.
The elephant opens valve EE.

(At this point, all valves are open.)

== Minute 12 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

...

== Minute 20 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

...

== Minute 26 ==
Valves BB, CC, DD, EE, HH, and JJ are open, releasing 81 pressure.

With the elephant helping, after 26 minutes, the best you could do would release a total of 1707 pressure.

With you and an elephant working together for 26 minutes, what is the most pressure you could release?
*/

int part2(const char* input) { return part1(input, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(Valve AA has flow rate=0; tunnels lead to valves DD, II, BB
Valve BB has flow rate=13; tunnels lead to valves CC, AA
Valve CC has flow rate=2; tunnels lead to valves DD, BB
Valve DD has flow rate=20; tunnels lead to valves CC, AA, EE
Valve EE has flow rate=3; tunnels lead to valves FF, DD
Valve FF has flow rate=0; tunnels lead to valves EE, GG
Valve GG has flow rate=0; tunnels lead to valves FF, HH
Valve HH has flow rate=22; tunnel leads to valve GG
Valve II has flow rate=0; tunnels lead to valves AA, JJ
Valve JJ has flow rate=21; tunnel leads to valve II)",
                   false, 1651);
    Executor::run(part1, input16, false);

    std::println("Part 2:");
    Executor::test(part2, R"(Valve AA has flow rate=0; tunnels lead to valves DD, II, BB
Valve BB has flow rate=13; tunnels lead to valves CC, AA
Valve CC has flow rate=2; tunnels lead to valves DD, BB
Valve DD has flow rate=20; tunnels lead to valves CC, AA, EE
Valve EE has flow rate=3; tunnels lead to valves FF, DD
Valve FF has flow rate=0; tunnels lead to valves EE, GG
Valve GG has flow rate=0; tunnels lead to valves FF, HH
Valve HH has flow rate=22; tunnel leads to valve GG
Valve II has flow rate=0; tunnels lead to valves AA, JJ
Valve JJ has flow rate=21; tunnel leads to valve II)",
                   1707);
    Executor::run(part2, input16);
    return 0;
}
