#include "inputs.hpp"

/*
--- Day 3: Binary Diagnostic ---
The submarine has been making some odd creaking noises, so you ask it to produce a diagnostic report just in case.

The diagnostic report (your puzzle input) consists of a list of binary numbers which, when decoded properly, can tell you many useful things about the
conditions of the submarine. The first parameter to check is the power consumption.

You need to use the binary numbers in the diagnostic report to generate two new binary numbers (called the gamma rate and the epsilon rate). The power
consumption can then be found by multiplying the gamma rate by the epsilon rate.

Each bit in the gamma rate can be determined by finding the most common bit in the corresponding position of all numbers in the diagnostic report. For
example, given the following diagnostic report:
00100
11110
10110
10111
10101
01111
00111
11100
10000
11001
00010
01010

Considering only the first bit of each number, there are five 0 bits and seven 1 bits. Since the most common bit is 1, the first bit of the gamma rate
is 1.

The most common second bit of the numbers in the diagnostic report is 0, so the second bit of the gamma rate is 0.

The most common value of the third, fourth, and fifth bits are 1, 1, and 0, respectively, and so the final three bits of the gamma rate are 110.

So, the gamma rate is the binary number 10110, or 22 in decimal.

The epsilon rate is calculated in a similar way; rather than use the most common bit, the least common bit from each position is used. So, the epsilon
rate is 01001, or 9 in decimal. Multiplying the gamma rate (22) by the epsilon rate (9) produces the power consumption, 198.

Use the binary numbers in your diagnostic report to calculate the gamma rate and epsilon rate, then multiply them together. What is the power
consumption of the submarine? (Be sure to represent your answer in decimal, not binary.)
*/

int part1(const char* input, const bool part2) {
    const int size = std::string_view(input).find('\n');
    std::string line;
    std::vector<std::string> bits_list(size);
    std::stringstream file(input);

    while (std::getline(file, line)) {
        for (int i = 0; i < size; i++) {
            bits_list[i].push_back(line[i]);
        }
    }
    const int bits_size = bits_list.front().size();

    if (!part2) {
        const int res = std::ranges::fold_left(
            bits_list | std::views::transform([bits_size](const std::string& bits) -> int { return std::ranges::count(bits, '1') > bits_size / 2; }),
            0, [](const int value, const int bit) -> int { return value << 1 | bit; });
        return res * (res ^ (1 << size) - 1);
    }
    std::vector<std::string> oxygen_generator_list = bits_list, &co2_scrubber_list = bits_list;

    for (int k = 0; k < size; k++) {
        for (const std::reference_wrapper<std::vector<std::string>>& list : {std::ref(oxygen_generator_list), std::ref(co2_scrubber_list)}) {
            std::vector<std::string>& current = list.get();
            const int current_size = current.front().size();

            if (current_size > 1) {
                const char keep = std::ranges::count(current[k], '0') > current_size / 2 ? (&current == &oxygen_generator_list ? '0' : '1')
                                                                                         : (&current == &oxygen_generator_list ? '1' : '0');

                for (int i = 0; i < size; i++) {
                    if (i != k) {
                        for (int j = current_size - 1; j >= 0; j--) {
                            if (current[k][j] != keep) {
                                current[i].erase(j, 1);
                            }
                        }
                    }
                }
                std::erase_if(current[k], [keep](const char ch) { return ch != keep; });
            }
        }
    }
    return std::ranges::fold_left(oxygen_generator_list | std::views::join, 0,
                                  [](const int value, const char bit) -> int { return value << 1 | bit - '0'; }) *
        std::ranges::fold_left(co2_scrubber_list | std::views::join, 0,
                               [](const int value, const char bit) -> int { return value << 1 | bit - '0'; });
}

/*
--- Part Two ---
Next, you should verify the life support rating, which can be determined by multiplying the oxygen generator rating by the CO2 scrubber rating.

Both the oxygen generator rating and the CO2 scrubber rating are values that can be found in your diagnostic report - finding them is the tricky part.
Both values are located using a similar process that involves filtering out values until only one remains. Before searching for either rating value,
start with the full list of binary numbers from your diagnostic report and consider just the first bit of those numbers. Then:
    - Keep only numbers selected by the bit criteria for the type of rating value for which you are searching. Discard numbers which do not match the
      bit criteria.
    - If you only have one number left, stop; this is the rating value for which you are searching.
    - Otherwise, repeat the process, considering the next bit to the right.

The bit criteria depends on which type of rating value you want to find:
    - To find oxygen generator rating, determine the most common value (0 or 1) in the current bit position, and keep only numbers with that bit in
      that position. If 0 and 1 are equally common, keep values with a 1 in the position being considered.
    - To find CO2 scrubber rating, determine the least common value (0 or 1) in the current bit position, and keep only numbers with that bit in that
      position. If 0 and 1 are equally common, keep values with a 0 in the position being considered.

For example, to determine the oxygen generator rating value using the same example diagnostic report from above:
    - Start with all 12 numbers and consider only the first bit of each number. There are more 1 bits (7) than 0 bits (5), so keep only the 7 numbers
      with a 1 in the first position: 11110, 10110, 10111, 10101, 11100, 10000, and 11001.
    - Then, consider the second bit of the 7 remaining numbers: there are more 0 bits (4) than 1 bits (3), so keep only the 4 numbers with a 0 in the
      second position: 10110, 10111, 10101, and 10000.
    - In the third position, three of the four numbers have a 1, so keep those three: 10110, 10111, and 10101.
    - In the fourth position, two of the three numbers have a 1, so keep those two: 10110 and 10111.
    - In the fifth position, there are an equal number of 0 bits and 1 bits (one each). So, to find the oxygen generator rating, keep the number with
      a 1 in that position: 10111.
    - As there is only one number left, stop; the oxygen generator rating is 10111, or 23 in decimal.

Then, to determine the CO2 scrubber rating value from the same example above:
    - Start again with all 12 numbers and consider only the first bit of each number. There are fewer 0 bits (5) than 1 bits (7), so keep only the 5
      numbers with a 0 in the first position: 00100, 01111, 00111, 00010, and 01010.
    - Then, consider the second bit of the 5 remaining numbers: there are fewer 1 bits (2) than 0 bits (3), so keep only the 2 numbers with a 1 in the
      second position: 01111 and 01010.
    - In the third position, there are an equal number of 0 bits and 1 bits (one each). So, to find the CO2 scrubber rating, keep the number with a 0
      in that position: 01010.
    - As there is only one number left, stop; the CO2 scrubber rating is 01010, or 10 in decimal.

Finally, to find the life support rating, multiply the oxygen generator rating (23) by the CO2 scrubber rating (10) to get 230.

Use the binary numbers in your diagnostic report to calculate the oxygen generator rating and CO2 scrubber rating, then multiply them together. What
is the life support rating of the submarine? (Be sure to represent your answer in decimal, not binary.)
*/

int part2(const char* input) { return part1(input, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1,
                   R"(00100
11110
10110
10111
10101
01111
00111
11100
10000
11001
00010
01010)",
                   false, 198);
    Executor::run(part1, input3, false);

    std::println("Part 2:");
    Executor::test(part2,
                   R"(00100
11110
10110
10111
10101
01111
00111
11100
10000
11001
00010
01010)",
                   230);
    Executor::run(part2, input3);

    return 0;
}
