#include "inputs.hpp"

/*
--- Day 8: Seven Segment Search ---
You barely reach the safety of the cave when the whale smashes into the cave mouth, collapsing it. Sensors indicate another exit to this cave at a
much greater depth, so you have no choice but to press on.

As your submarine slowly makes its way through the cave system, you notice that the four-digit seven-segment displays in your submarine are
malfunctioning; they must have been damaged during the escape. You'll be in a lot of trouble without them, so you'd better figure out what's wrong.

Each digit of a seven-segment display is rendered by turning on or off any of seven segments named a through g:
  0:      1:      2:      3:      4:
 aaaa    ....    aaaa    aaaa    ....
b    c  .    c  .    c  .    c  b    c
b    c  .    c  .    c  .    c  b    c
 ....    ....    dddd    dddd    dddd
e    f  .    f  e    .  .    f  .    f
e    f  .    f  e    .  .    f  .    f
 gggg    ....    gggg    gggg    ....

  5:      6:      7:      8:      9:
 aaaa    aaaa    aaaa    aaaa    aaaa
b    .  b    .  .    c  b    c  b    c
b    .  b    .  .    c  b    c  b    c
 dddd    dddd    ....    dddd    dddd
.    f  e    f  .    f  e    f  .    f
.    f  e    f  .    f  e    f  .    f
 gggg    gggg    ....    gggg    gggg

So, to render a 1, only segments c and f would be turned on; the rest would be off. To render a 7, only segments a, c, and f would be turned on.

The problem is that the signals which control the segments have been mixed up on each display. The submarine is still trying to display numbers by
producing output on signal wires a through g, but those wires are connected to segments randomly. Worse, the wire/segment connections are mixed up
separately for each four-digit display! (All of the digits within a display use the same connections, though.)

So, you might know that only signal wires b and g are turned on, but that doesn't mean segments b and g are turned on: the only digit that uses two
segments is 1, so it must mean segments c and f are meant to be on. With just that information, you still can't tell which wire (b/g) goes to which
segment (c/f). For that, you'll need to collect more information.

For each display, you watch the changing signals for a while, make a note of all ten unique signal patterns you see, and then write down a single four
digit output value (your puzzle input). Using the signal patterns, you should be able to work out which pattern corresponds to which digit.

For example, here is what you might see in a single entry in your notes:
acedgfb cdfbe gcdfa fbcad dab cefabd cdfgeb eafb cagedb ab |
cdfeb fcadb cdfeb cdbaf

(The entry is wrapped here to two lines so it fits; in your notes, it will all be on a single line.)

Each entry consists of ten unique signal patterns, a | delimiter, and finally the four digit output value. Within an entry, the same wire/segment
connections are used (but you don't know what the connections actually are). The unique signal patterns correspond to the ten different ways the
submarine tries to render a digit using the current wire/segment connections. Because 7 is the only digit that uses three segments, dab in the above
example means that to render a 7, signal lines d, a, and b are on. Because 4 is the only digit that uses four segments, eafb means that to render a 4,
signal lines e, a, f, and b are on.

Using this information, you should be able to work out which combination of signal wires corresponds to each of the ten digits. Then, you can decode
the four digit output value. Unfortunately, in the above example, all of the digits in the output value (cdfeb fcadb cdfeb cdbaf) use five segments
and are more difficult to deduce.

For now, focus on the easy digits. Consider this larger example:
be cfbegad cbdgef fgaecd cgeb fdcge agebfd fecdb fabcd edb |
fdgacbe cefdb cefbgd gcbe
edbfga begcd cbg gc gcadebf fbgde acbgfd abcde gfcbed gfec |
fcgedb cgb dgebacf gc
fgaebd cg bdaec gdafb agbcfd gdcbef bgcad gfac gcb cdgabef |
cg cg fdcagb cbg
fbegcd cbd adcefb dageb afcb bc aefdc ecdab fgdeca fcdbega |
efabcd cedba gadfec cb
aecbfdg fbg gf bafeg dbefa fcge gcbea fcaegb dgceab fcbdga |
gecf egdcabf bgf bfgea
fgeab ca afcebg bdacfeg cfaedg gcfdb baec bfadeg bafgc acf |
gebdcfa ecba ca fadegcb
dbcfg fgd bdegcaf fgec aegbdf ecdfab fbedc dacgb gdcebf gf |
cefg dcbef fcge gbcadfe
bdfegc cbegaf gecbf dfcage bdacg ed bedf ced adcbefg gebcd |
ed bcgafe cdgba cbgef
egadfb cdbfeg cegd fecab cgb gbdefca cg fgcdab egfdb bfceg |
gbdfcae bgc cg cgb
gcafb gcf dcaebfg ecagb gf abcdeg gaef cafbge fdbac fegbdc |
fgae cfgab fg bagce

Because the digits 1, 4, 7, and 8 each use a unique number of segments, you should be able to tell which combinations of signals correspond to those
digits. Counting only digits in the output values (the part after | on each line), in the above example, there are 26 instances of digits that use a
unique number of segments (highlighted above).

In the output values, how many times do digits 1, 4, 7, or 8 appear?
*/

int part1(const bool resolve = false) {
    /*
    Unique lengths:
        2 -> 1
        3 -> 7
        4 -> 4
        7 -> 8

    5 segments:
        3 contains 7
        6 contains 5, otherwise 2

    6 segments:
        9 contains 4
        0 contains 1, otherwise 6
    */
    int res = 0;
    std::string line;
    std::stringstream file(input8);

    while (std::getline(file, line)) {
        if (resolve) {
            auto contains = [](const std::string& lhs, const std::string& rhs) -> bool {
                return std::ranges::all_of(rhs, [&lhs](const char ch) -> bool { return lhs.contains(ch); });
            };
            int value = 0;
            std::vector<std::string> later;
            std::vector<std::string> combinations = line.substr(0, line.find('|') - 1) | split(' ') | std::ranges::to<std::vector>();
            std::array<std::string, 10> resolved;
            later.reserve(2);

            for (std::string& combination : combinations) {
                std::ranges::sort(combination);

                switch (combination.size()) {
                case 2:
                    resolved[1] = combination;
                    break;

                case 3:
                    resolved[7] = combination;
                    break;

                case 4:
                    resolved[4] = combination;
                    break;

                case 7:
                    resolved[8] = combination;
                    break;

                default:
                    break;
                }
            }
            for (const std::string& combination : combinations) {
                if (combination.size() == 6) {
                    if (contains(combination, resolved[4])) {
                        resolved[9] = combination;
                    } else {
                        resolved[contains(combination, resolved[1]) ? 0 : 6] = combination;
                    }
                }
                if (combination.size() == 5) {
                    if (contains(combination, resolved[7])) {
                        resolved[3] = combination;
                    } else {
                        later.push_back(combination);
                    }
                }
            }
            for (const std::string& combination : later) {
                resolved[contains(resolved[6], combination) ? 5 : 2] = combination;
            }
            for (std::string combination : line.substr(line.find('|') + 2) | split(' ')) {
                std::ranges::sort(combination);
                value = value * 10 + std::ranges::find(resolved, combination) - resolved.begin();
            }
            res += value;
        } else {
            res += std::ranges::count_if(line.substr(line.find('|') + 2) | std::views::split(' '),
                                         [](const std::ranges::subrange<std::string::iterator>& sub_str) -> bool {
                                             const int size = sub_str.size();
                                             return size == 2 || size == 3 || size == 4 || size == 7;
                                         });
        }
    }
    return res;
}

/*
--- Part Two ---
Through a little deduction, you should now be able to determine the remaining digits. Consider again the first example above:
acedgfb cdfbe gcdfa fbcad dab cefabd cdfgeb eafb cagedb ab |
cdfeb fcadb cdfeb cdbaf

After some careful analysis, the mapping between signal wires and segments only make sense in the following configuration:
 dddd
e    a
e    a
 ffff
g    b
g    b
 cccc

So, the unique signal patterns would correspond to the following digits:
    - acedgfb: 8
    - cdfbe: 5
    - gcdfa: 2
    - fbcad: 3
    - dab: 7
    - cefabd: 9
    - cdfgeb: 6
    - eafb: 4
    - cagedb: 0
    - ab: 1

Then, the four digits of the output value can be decoded:
    - cdfeb: 5
    - fcadb: 3
    - cdfeb: 5
    - cdbaf: 3

Therefore, the output value for this entry is 5353.

Following this same process for each entry in the second, larger example above, the output value of each entry can be determined:
    - fdgacbe cefdb cefbgd gcbe: 8394
    - fcgedb cgb dgebacf gc: 9781
    - cg cg fdcagb cbg: 1197
    - efabcd cedba gadfec cb: 9361
    - gecf egdcabf bgf bfgea: 4873
    - gebdcfa ecba ca fadegcb: 8418
    - cefg dcbef fcge gbcadfe: 4548
    - ed bcgafe cdgba cbgef: 1625
    - gbdfcae bgc cg cgb: 8717
    - fgae cfgab fg bagce: 4315

Adding all of the output values in this larger example produces 61229.

For each entry, determine all of the wire/segment connections and decode the four-digit output values. What do you get if you add up all of the output
values?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
