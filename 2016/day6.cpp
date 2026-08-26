#include "inputs.hpp"

/*
--- Day 6: Signals and Noise ---
Something is jamming your communications with Santa. Fortunately, your signal is only partially jammed, and protocol in situations like this is to
switch to a simple repetition code to get the message through.

In this model, the same message is sent repeatedly. You've recorded the repeating message signal (your puzzle input), but the data seems quite
corrupted - almost too badly to recover. Almost.

All you need to do is figure out which character is most frequent for each position. For example, suppose you had recorded the following messages:
eedadn
drvtee
eandsr
raavrd
atevrs
tsrnev
sdttsa
rasrtv
nssdts
ntnada
svetve
tesnvt
vntsnd
vrdear
dvrsen
enarar

The most common character in the first column is e; in the second, a; in the third, s, and so on. Combining these characters returns the
error-corrected message, easter.

Given the recording in your puzzle input, what is the error-corrected version of the message being sent?
*/

int max_index(const std::array<int, 26>& array) { return std::ranges::max_element(array) - array.begin(); }

std::string part1(const char* input, int (*func)(const std::array<int, 26>&) = max_index) {
    std::string line, message;
    std::vector<std::array<int, 26>> hash;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        if (hash.empty()) {
            hash.resize(line.size());
        }
        for (int i = 0; i < line.size(); i++) {
            hash[i][line[i] - 'a']++;
        }
    }
    for (const std::array<int, 26>& array : hash) {
        message.push_back('a' + func(array));
    }
    return message;
}

/*
--- Part Two ---
Of course, that would be the message - if you hadn't agreed to use a modified repetition code instead.

In this modified code, the sender instead transmits what looks like random data, but for each character, the character they actually want to send is
slightly less likely than the others. Even after signal-jamming noise, you can look at the letter distributions in each column and choose the least
common letter to reconstruct the original message.
F
In the above example, the least common character in the first column is a; in the second, d, and so on. Repeating this process for the remaining
characters produces the original message, advent.

Given the recording in your puzzle input and this new decoding methodology, what is the original message that Santa is trying to send?
*/

int min_index(const std::array<int, 26>& array) {
    int index = 0;

    while (!array[index]) {
        index++;
    }
    for (int i = index + 1; i < 26; i++) {
        if (array[i] && array[i] < array[index]) {
            index = i;
        }
    }
    return index;
}

std::string part2(const char* input) { return part1(input, min_index); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(eedadn
drvtee
eandsr
raavrd
atevrs
tsrnev
sdttsa
rasrtv
nssdts
ntnada
svetve
tesnvt
vntsnd
vrdear
dvrsen
enarar)",
                   max_index, "easter");
    Executor::run(part1, input6, max_index);

    std::println("Part 2:");
    Executor::test(part2, R"(eedadn
drvtee
eandsr
raavrd
atevrs
tsrnev
sdttsa
rasrtv
nssdts
ntnada
svetve
tesnvt
vntsnd
vrdear
dvrsen
enarar)",
                   "advent");
    Executor::run(part2, input6);

    return 0;
}
