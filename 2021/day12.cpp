#include "inputs.hpp"

/*
--- Day 12: Passage Pathing ---
With your submarine's subterranean subsystems subsisting suboptimally, the only way you're getting out of this cave anytime soon is by finding a path
yourself. Not just a path - the only way to know if you've found the best path is to find all of them.

Fortunately, the sensors are still mostly working, and so you build a rough map of the remaining caves (your puzzle input). For example:
start-A
start-b
A-c
A-b
b-d
A-end
b-end

This is a list of how all of the caves are connected. You start in the cave named start, and your destination is the cave named end. An entry like b-d
means that cave b is connected to cave d - that is, you can move between them.

So, the above cave system looks roughly like this:
    start
    /   \
c--A-----b--d
    \   /
     end

Your goal is to find the number of distinct paths that start at start, end at end, and don't visit small caves more than once. There are two types of
caves: big caves (written in uppercase, like A) and small caves (written in lowercase, like b). It would be a waste of time to visit any small cave
more than once, but big caves are large enough that it might be worth visiting them multiple times. So, all paths you find should visit small caves at
most once, and can visit big caves any number of times.

Given these rules, there are 10 paths through this example cave system:
start,A,b,A,c,A,end
start,A,b,A,end
start,A,b,end
start,A,c,A,b,A,end
start,A,c,A,b,end
start,A,c,A,end
start,A,end
start,b,A,c,A,end
start,b,A,end
start,b,end

(Each line in the above list corresponds to a single path; the caves visited by that path are listed in the order they are visited and separated by
commas.)

Note that in this cave system, cave d is never visited by any path: to do so, cave b would need to be visited twice (once on the way to cave d and a
second time when returning from cave d), and since cave b is small, this is not allowed.

Here is a slightly larger example:
dc-end
HN-start
start-kj
dc-start
dc-HN
LN-dc
HN-end
kj-sa
kj-HN
kj-dc

The 19 paths through it are as follows:
start,HN,dc,HN,end
start,HN,dc,HN,kj,HN,end
start,HN,dc,end
start,HN,dc,kj,HN,end
start,HN,end
start,HN,kj,HN,dc,HN,end
start,HN,kj,HN,dc,end
start,HN,kj,HN,end
start,HN,kj,dc,HN,end
start,HN,kj,dc,end
start,dc,HN,end
start,dc,HN,kj,HN,end
start,dc,end
start,dc,kj,HN,end
start,kj,HN,dc,HN,end
start,kj,HN,dc,end
start,kj,HN,end
start,kj,dc,HN,end
start,kj,dc,end

Finally, this even larger example has 226 paths through it:
fs-end
he-DX
fs-he
start-DX
pj-DX
end-zg
zg-sl
zg-pj
pj-he
RW-he
fs-DX
pj-RW
zg-RW
start-pj
he-WI
zg-he
pj-fs
start-RW

How many paths through this cave system are there that visit small caves at most once?
*/

void resolve(const std::unordered_map<std::string, std::vector<std::string>>& graph, const std::string& node,
             std::unordered_map<std::string, int>& seen, int& res, const bool multiple) {
    if (node == "end") {
        res++;
        return;
    }
    if (std::islower(node.front())) {
        if (seen[node] == 2 || multiple && seen[node] == 1 && std::ranges::contains(seen | std::views::values, 2) || !multiple && seen[node] == 1) {
            return;
        }
        seen[node]++;
    }
    for (const std::string& next : graph.at(node)) {
        if (next != "start") {
            resolve(graph, next, seen, res, multiple);
        }
    }
    if (std::islower(node.front())) {
        seen[node]--;
    }
}

int part1(const char* input, const bool multiple) {
    int res = 0;
    std::string line;
    std::stringstream file(input);
    std::unordered_map<std::string, int> seen;
    std::unordered_map<std::string, std::vector<std::string>> graph;

    while (std::getline(file, line)) {
        const int delimiter = line.find('-');
        std::string source = line.substr(0, delimiter), destination = line.substr(delimiter + 1);
        graph[source].push_back(destination);
        graph[destination].push_back(source);
    }
    resolve(graph, "start", seen, res, multiple);
    return res;
}

/*
--- Part Two ---
After reviewing the available paths, you realize you might have time to visit a single small cave twice. Specifically, big caves can be visited any
number of times, a single small cave can be visited at most twice, and the remaining small caves can be visited at most once. However, the caves named
start and end can only be visited exactly once each: once you leave the start cave, you may not return to it, and once you reach the end cave, the
path must end immediately.

Now, the 36 possible paths through the first example above are:
start,A,b,A,b,A,c,A,end
start,A,b,A,b,A,end
start,A,b,A,b,end
start,A,b,A,c,A,b,A,end
start,A,b,A,c,A,b,end
start,A,b,A,c,A,c,A,end
start,A,b,A,c,A,end
start,A,b,A,end
start,A,b,d,b,A,c,A,end
start,A,b,d,b,A,end
start,A,b,d,b,end
start,A,b,end
start,A,c,A,b,A,b,A,end
start,A,c,A,b,A,b,end
start,A,c,A,b,A,c,A,end
start,A,c,A,b,A,end
start,A,c,A,b,d,b,A,end
start,A,c,A,b,d,b,end
start,A,c,A,b,end
start,A,c,A,c,A,b,A,end
start,A,c,A,c,A,b,end
start,A,c,A,c,A,end
start,A,c,A,end
start,A,end
start,b,A,b,A,c,A,end
start,b,A,b,A,end
start,b,A,b,end
start,b,A,c,A,b,A,end
start,b,A,c,A,b,end
start,b,A,c,A,c,A,end
start,b,A,c,A,end
start,b,A,end
start,b,d,b,A,c,A,end
start,b,d,b,A,end
start,b,d,b,end
start,b,end

The slightly larger example above now has 103 paths through it, and the even larger example now has 3509 paths through it.

Given these new rules, how many paths through this cave system are there?
*/

int part2(const char* input) { return part1(input, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(start-A
start-b
A-c
A-b
b-d
A-end
b-end)",
                   false, 10);
    Executor::test(part1, R"(dc-end
HN-start
start-kj
dc-start
dc-HN
LN-dc
HN-end
kj-sa
kj-HN
kj-dc)",
                   false, 19);
    Executor::test(part1, R"(fs-end
he-DX
fs-he
start-DX
pj-DX
end-zg
zg-sl
zg-pj
pj-he
RW-he
fs-DX
pj-RW
zg-RW
start-pj
he-WI
zg-he
pj-fs
start-RW)",
                   false, 226);
    Executor::run(part1, input12, false);

    std::println("Part 2:");
    Executor::test(part2, R"(start-A
start-b
A-c
A-b
b-d
A-end
b-end)",
                   36);
    Executor::test(part2, R"(dc-end
HN-start
start-kj
dc-start
dc-HN
LN-dc
HN-end
kj-sa
kj-HN
kj-dc)",
                   103);
    Executor::test(part2, R"(fs-end
he-DX
fs-he
start-DX
pj-DX
end-zg
zg-sl
zg-pj
pj-he
RW-he
fs-DX
pj-RW
zg-RW
start-pj
he-WI
zg-he
pj-fs
start-RW)",
                   3509);
    Executor::run(part2, input12);

    return 0;
}
