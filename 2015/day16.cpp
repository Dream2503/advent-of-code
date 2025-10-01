#include <algorithm>
#include <iostream>
#include <ranges>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 16: Aunt Sue ---
Your Aunt Sue has given you a wonderful gift, and you'd like to send her a thank you card. However, there's a small problem: she signed it "From, Aunt
Sue".

You have 500 Aunts named "Sue".

So, to avoid sending the card to the wrong person, you need to figure out which Aunt Sue (which you conveniently number 1 to 500, for sanity) gave you
the gift. You open the present and, as luck would have it, good ol' Aunt Sue got you a My First Crime Scene Analysis Machine! Just what you wanted. Or
needed, as the case may be.

The My First Crime Scene Analysis Machine (MFCSAM for short) can detect a few specific compounds in a given sample, as well as how many distinct kinds
of those compounds there are. According to the instructions, these are what the MFCSAM can detect:
    - children, by human DNA age analysis.
    - cats. It doesn't differentiate individual breeds.
    - Several seemingly random breeds of dog: samoyeds, pomeranians, akitas, and vizslas.
    - goldfish. No other kinds of fish.
    - trees, all in one group.
    - cars, presumably by exhaust or gasoline or something.
    - perfumes, which is handy, since many of your Aunts Sue wear a few kinds.

In fact, many of your Aunts Sue have many of these. You put the wrapping from the gift into the MFCSAM. It beeps inquisitively at you a few times and
then prints out a message on ticker tape:
children: 3
cats: 7
samoyeds: 2
pomeranians: 3
akitas: 0
vizslas: 0
goldfish: 5
trees: 3
cars: 2
perfumes: 1

You make a list of the things you can remember about each Aunt Sue. Things missing from your list aren't zero - you simply don't remember the value.

What is the number of the Sue that got you the gift?
*/

const std::unordered_map<std::string, int>& signature = {{"children:", 3}, {"cats:", 7},     {"samoyeds:", 2}, {"pomeranians:", 3}, {"akitas:", 0},
                                                         {"vizslas:", 0},  {"goldfish:", 5}, {"trees:", 3},    {"cars:", 2},        {"perfumes:", 1}};

int part1() {
    std::string line;
    std::stringstream file(input16);

    while (std::getline(file, line)) {
        int number, value1, value2, value3;
        std::string param1, param2, param3;
        (((std::stringstream(line).ignore(4) >> number).ignore(1) >> param1 >> value1).ignore(1) >> param2 >> value2).ignore(1) >> param3 >> value3;

        if (signature.at(param1) == value1 && signature.at(param2) == value2 && signature.at(param3) == value3) {
            return number;
        }
    }
    return -1;
}

/*
--- Part Two ---
As you're about to send the thank you note, something in the MFCSAM's instructions catches your eye. Apparently, it has an outdated retroencabulator,
and so the output from the machine isn't exact values - some of them indicate ranges.

In particular, the cats and trees readings indicates that there are greater than that many (due to the unpredictable nuclear decay of cat dander and
tree pollen), while the pomeranians and goldfish readings indicate that there are fewer than that many (due to the modial interaction of
magnetoreluctance).

What is the number of the real Aunt Sue?
*/

int part2() {
    std::string line;
    std::stringstream file(input16);

    while (std::getline(file, line)) {
        bool broke = false;
        int number, value1, value2, value3;
        std::string param1, param2, param3;
        (((std::stringstream(line).ignore(4) >> number).ignore(1) >> param1 >> value1).ignore(1) >> param2 >> value2).ignore(1) >> param3 >> value3;
        const std::unordered_map<std::string, int> params({{param1, value1}, {param2, value2}, {param3, value3}});

        for (const auto& key : params | std::views::keys) {
            if ((params.contains("cats:") && params.at("cats:") <= signature.at("cats:")) ||
                (params.contains("trees:") && params.at("trees:") <= signature.at("trees:")) ||
                (params.contains("pomeranians:") && params.at("pomeranians:") >= signature.at("pomeranians:")) ||
                (params.contains("goldfish:") && params.at("goldfish:") >= signature.at("goldfish:")) ||
                (key != "cats:" && key != "trees:" && key != "pomeranians:" && key != "goldfish:" && signature.at(key) != params.at(key))) {
                broke = true;
                break;
            }
        }
        if (!broke) {
            return number;
        }
    }
    return -1;
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
