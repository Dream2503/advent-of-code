#include "inputs.hpp"

/*
--- Day 9: All in a Single Night ---
Every year, Santa manages to deliver all of his presents in a single night.

This year, however, he has some new locations to visit; his elves have provided him the distances between every pair of locations. He can start and
end at any two (different) locations he wants, but he must visit each location exactly once. What is the shortest distance he can travel to achieve
this?

For example, given the following distances:

London to Dublin = 464
London to Belfast = 518
Dublin to Belfast = 141
The possible routes are therefore:

Dublin -> London -> Belfast = 982
London -> Dublin -> Belfast = 605
London -> Belfast -> Dublin = 659
Dublin -> Belfast -> London = 659
Belfast -> Dublin -> London = 605
Belfast -> London -> Dublin = 982
The shortest of these is London -> Dublin -> Belfast = 605, and so the answer is 605 in this example.

What is the distance of the shortest route?
*/

void search(const std::unordered_map<std::string, std::unordered_map<std::string, int>>& graph, std::unordered_set<std::string>& seen,
            const std::string& current, const int current_distance, int& best, const bool max) {
    if (!max && current_distance >= best) {
        return;
    }
    if (graph.size() == seen.size() + 1) {
        best = max ? std::max(best, current_distance) : std::min(best, current_distance);
        return;
    }
    for (const auto& [next, distance] : graph.at(current)) {
        if (!seen.contains(next)) {
            seen.insert(next);
            search(graph, seen, next, current_distance + distance, best, max);
            seen.erase(next);
        }
    }
}

int part1(const bool max = false) {
    std::string line;
    std::unordered_map<std::string, std::unordered_map<std::string, int>> graph;
    std::stringstream file(input9);

    while (std::getline(file, line)) {
        int distance;
        std::string lhs, rhs;
        ((std::stringstream(line) >> lhs).ignore(4) >> rhs).ignore(3) >> distance;
        graph[lhs][rhs] = graph[rhs][lhs] = distance;
    }
    int best = max ? INT32_MIN : INT32_MAX;

    for (const std::string& name : graph | std::views::keys) {
        std::unordered_set<std::string> seen;
        seen.insert(name);
        search(graph, seen, name, 0, best, max);
    }
    return best;
}

/*
--- Part Two ---
The next year, just to show off, Santa decides to take the route with the longest distance instead.

He can still start and end at any two (different) locations he wants, and he still must visit each location exactly once.

For example, given the distances above, the longest route would be 982 via (for example) Dublin -> London -> Belfast.

What is the distance of the longest route?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
