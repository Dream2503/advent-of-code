#include "inputs.hpp"

/*
--- Day 10: Balance Bots ---
You come upon a factory in which many robots are zooming around handing small microchips to each other.

Upon closer examination, you notice that each bot only proceeds when it has two microchips, and once it does, it gives each one to a different bot or
puts it in a marked "output" bin. Sometimes, bots take microchips from "input" bins, too.

Inspecting one of the microchips, it seems like they each contain a single number; the bots must use some logic to decide what to do with each chip.
You access the local control computer and download the bots' instructions (your puzzle input).

Some of the instructions specify that a specific-valued microchip should be given to a specific bot; the rest of the instructions indicate what a
given bot should do with its lower-value or higher-value chip.

For example, consider the following instructions:
value 5 goes to bot 2
bot 2 gives low to bot 1 and high to bot 0
value 3 goes to bot 1
bot 1 gives low to output 1 and high to bot 0
bot 0 gives low to output 2 and high to output 0
value 2 goes to bot 2
    - Initially, bot 1 starts with a value-3 chip, and bot 2 starts with a value-2 chip and a value-5 chip.
    - Because bot 2 has two microchips, it gives its lower one (2) to bot 1 and its higher one (5) to bot 0.
    - Then, bot 1 has two microchips; it puts the value-2 chip in output 1 and gives the value-3 chip to bot 0.
    - Finally, bot 0 has two microchips; it puts the 3 in output 2 and the 5 in output 0.

In the end, output bin 0 contains a value-5 microchip, output bin 1 contains a value-2 microchip, and output bin 2 contains a value-3 microchip. In
this configuration, bot number 2 is responsible for comparing value-5 microchips with value-2 microchips.

Based on your instructions, what is the number of the bot that is responsible for comparing value-61 microchips with value-17 microchips?
*/

struct Bot {
    int left = 0, right = 0, low = 0, high = 0;
};

constexpr Bot terminate(17, 61);

int resolve(std::unordered_map<int, Bot>& hash, const int bot, std::unordered_map<int, int>& outputs, const bool find_terminate) {
    auto& [left, right, low, high] = hash[bot];

    if (left && right) {
        auto [min_val, max_val] = std::minmax(left, right);

        if (find_terminate && min_val == terminate.left && max_val == terminate.right) {
            return bot;
        }
        if (low < 0) {
            outputs[-low - 1] = min_val;
        } else {
            Bot& target = hash[low];

            if (!target.left) {
                target.left = min_val;
            } else {
                target.right = min_val;
            }
            const int res = resolve(hash, low, outputs, find_terminate);

            if (find_terminate && res != -1) {
                return res;
            }
        }
        if (high < 0) {
            outputs[-high - 1] = max_val;
        } else {
            Bot& target = hash[high];

            if (!target.left) {
                target.left = max_val;
            } else {
                target.right = max_val;
            }
            const int res = resolve(hash, high, outputs, find_terminate);

            if (find_terminate && res != -1) {
                return res;
            }
        }
        left = right = 0;
    }
    return -1;
}

int part1(const bool output = false) {
    std::string line;
    std::unordered_map<int, Bot> hash;
    std::unordered_map<int, int> outputs;
    std::stringstream file(input10);

    while (std::getline(file, line)) {
        std::stringstream ss(line);

        if (ss.peek() == 'b') {
            int bot, low, high;
            std::string low_type, high_type;
            ((ss.ignore(4) >> bot).ignore(14) >> low_type >> low).ignore(13) >> high_type >> high;

            if (low_type == "output") {
                low = -(low + 1);
            }
            if (high_type == "output") {
                high = -(high + 1);
            }
            hash[bot].low = low;
            hash[bot].high = high;
        } else {
            int value, bot_num;
            (ss.ignore(6) >> value).ignore(13) >> bot_num;
            Bot& bot = hash[bot_num];

            if (!bot.left) {
                bot.left = value;
            } else {
                bot.right = value;
            }
        }
    }
    for (const int bot : hash | std::views::keys) {
        const int res = resolve(hash, bot, outputs, !output);

        if (!output && res != -1) {
            return res;
        }
    }
    return outputs[0] * outputs[1] * outputs[2];
}

/*
--- Part Two ---
What do you get if you multiply together the values of one chip in each of outputs 0, 1, and 2?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
