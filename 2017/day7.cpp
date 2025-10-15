#include "inputs.hpp"

/*
--- Day 7: Recursive Circus ---
Wandering further through the circuits of the computer, you come upon a tower of programs that have gotten themselves into a bit of trouble. A
recursive algorithm has gotten out of hand, and now they're balanced precariously in a large tower.

One program at the bottom supports the entire tower. It's holding a large disc, and on the disc are balanced several more sub-towers. At the bottom of
these sub-towers, standing on the bottom disc, are other programs, each holding their own disc, and so on. At the very tops of these
sub-sub-sub-...-towers, many programs stand simply keeping the disc below them balanced but with no disc of their own.

You offer to help, but first you need to understand the structure of these towers. You ask each program to yell out their name, their weight, and (if
they're holding a disc) the names of the programs immediately above them balancing on that disc. You write this information down (your puzzle input).
Unfortunately, in their panic, they don't do this in an orderly fashion; by the time you're done, you're not sure which program gave which
information.

For example, if your list is the following:
pbga (66)
xhth (57)
ebii (61)
havc (66)
ktlj (57)
fwft (72) -> ktlj, cntj, xhth
qoyq (66)
padx (45) -> pbga, havc, qoyq
tknk (41) -> ugml, padx, fwft
jptl (61)
ugml (68) -> gyxo, ebii, jptl
gyxo (61)
cntj (57)

...then you would be able to recreate the structure of the towers that looks like this:
                gyxo
              /
         ugml - ebii
       /      \
      |         jptl
      |
      |         pbga
     /        /
tknk --- padx - havc
     \        \
      |         qoyq
      |
      |         ktlj
       \      /
         fwft - cntj
              \
                xhth

In this example, tknk is at the bottom of the tower (the bottom program), and is holding up ugml, padx, and fwft. Those programs are, in turn, holding
up other programs; in this example, none of those programs are holding up any other programs, and are all the tops of their own towers. (The actual
tower balancing in front of you is much larger.)

Before you're ready to help them, you need to make sure your information is correct. What is the name of the bottom program?
*/

using Tower = std::unordered_map<std::string, std::pair<int, std::vector<std::string>>>;
using Weight = std::unordered_map<std::string, int>;

int resolve_root(const Tower& tower, const std::string& disc) {
    const std::vector<std::string>& discs = tower.at(disc).second;

    if (discs.empty()) {
        return 0;
    }
    int count = 0;

    for (const std::string& prog : discs | std::views::reverse) {
        count += 1 + resolve_root(tower, prog);
    }
    return count;
}

int resolve_weight(const Tower& tower, const Weight& weights, const std::string& disc, int& imbalance) {
    const std::vector<std::string>& discs = tower.at(disc).second;
    std::vector<int> disc_weights;

    for (const std::string& child : discs) {
        disc_weights.push_back(resolve_weight(tower, weights, child, imbalance));
    }
    if (!disc_weights.empty()) {
        auto [min, max] = std::minmax_element(disc_weights.begin(), disc_weights.end());

        if (*min != *max && imbalance == -1) {
            std::unordered_map<int, int> frequency;

            for (const int weight : disc_weights) {
                frequency[weight]++;
            }
            int correct = -1, wrong = -1;

            for (const auto [weight, freq] : frequency) {
                if (freq > 1) {
                    correct = weight;
                } else {
                    wrong = weight;
                }
            }
            imbalance = weights.at(discs[std::ranges::find(disc_weights, wrong) - disc_weights.begin()]) + correct - wrong;
        }
    }
    return std::reduce(disc_weights.begin(), disc_weights.end(), weights.at(disc));
}

std::string part1(const bool inbalance = false) {
    std::string line;
    Tower tower;
    Weight weights;
    std::stringstream file(input7);

    while (std::getline(file, line)) {
        int weight;
        std::string disc, word;
        std::vector<std::string> discs;
        std::stringstream ss(line);
        ((ss >> disc).ignore(2) >> weight).ignore(1);

        if (ss.peek() != -1) {
            ss.ignore(3);

            while (std::getline(ss, word, ',')) {
                discs.push_back(word.substr(1));
            }
        }
        tower.emplace(disc, std::pair(0, discs));
        weights.emplace(disc, weight);
    }

    for (const std::string& disc : tower | std::views::keys) {
        tower[disc].first = resolve_root(tower, disc);
    }
    const std::string& root = std::ranges::max_element(tower, {}, [](const Tower::value_type& value) -> int { return value.second.first; })->first;
    int res = -1;
    resolve_weight(tower, weights, root, res);
    return inbalance ? std::to_string(res) : root;
}

/*
--- Part Two ---
The programs explain the situation: they can't get down. Rather, they could get down, if they weren't expending all of their energy trying to keep the
tower balanced. Apparently, one program has the wrong weight, and until it's fixed, they're stuck here.

For any program holding a disc, each program standing on that disc forms a sub-tower. Each of those sub-towers are supposed to be the same weight, or
the disc itself isn't balanced. The weight of a tower is the sum of the weights of the programs in that tower.

In the example above, this means that for ugml's disc to be balanced, gyxo, ebii, and jptl must all have the same weight, and they do: 61.

However, for tknk to be balanced, each of the programs standing on its disc and all programs above it must each match. This means that the following
sums must all be the same:
    - ugml + (gyxo + ebii + jptl) = 68 + (61 + 61 + 61) = 251
    - padx + (pbga + havc + qoyq) = 45 + (66 + 66 + 66) = 243
    - fwft + (ktlj + cntj + xhth) = 72 + (57 + 57 + 57) = 243

As you can see, tknk's disc is unbalanced: ugml's stack is heavier than the other two. Even though the nodes above ugml are balanced, ugml itself is
too heavy: it needs to be 8 units lighter for its stack to weigh 243 and keep the towers balanced. If this change were made, its weight would be 60.

Given that exactly one program is the wrong weight, what would its weight need to be to balance the entire tower?
*/

std::string part2() { return part1(true); }


int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
