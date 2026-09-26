#include "inputs.hpp"

/*
--- Day 13: Distress Signal ---
You climb the hill and again try contacting the Elves. However, you instead receive a signal you weren't expecting: a distress signal.

Your handheld device must still not be working properly; the packets from the distress signal got decoded out of order. You'll need to re-order the
list of received packets (your puzzle input) to decode the message.

Your list consists of pairs of packets; pairs are separated by a blank line. You need to identify how many pairs of packets are in the right order.

For example:
[1,1,3,1,1]
[1,1,5,1,1]

[[1],[2,3,4]]
[[1],4]

[9]
[[8,7,6]]

[[4,4],4,4]
[[4,4],4,4,4]

[7,7,7,7]
[7,7,7]

[]
[3]

[[[]]]
[[]]

[1,[2,[3,[4,[5,6,7]]]],8,9]
[1,[2,[3,[4,[5,6,0]]]],8,9]

Packet data consists of lists and integers. Each list starts with [, ends with ], and contains zero or more comma-separated values (either integers or
other lists). Each packet is always a list and appears on its own line.

When comparing two values, the first value is called left and the second value is called right. Then:
    - If both values are integers, the lower integer should come first. If the left integer is lower than the right integer, the inputs are in the
      right order. If the left integer is higher than the right integer, the inputs are not in the right order. Otherwise, the inputs are the same
      integer; continue checking the next part of the input.
    - If both values are lists, compare the first value of each list, then the second value, and so on. If the left list runs out of items first, the
      inputs are in the right order. If the right list runs out of items first, the inputs are not in the right order. If the lists are the same
      length and no comparison makes a decision about the order, continue checking the next part of the input.
    - If exactly one value is an integer, convert the integer to a list which contains that integer as its only value, then retry the comparison. For
      example, if comparing [0,0,0] and 2, convert the right value to [2] (a list containing 2); the result is then found by instead comparing [0,0,0]
      and [2].

Using these rules, you can determine which of the pairs in the example are in the right order:
== Pair 1 ==
- Compare [1,1,3,1,1] vs [1,1,5,1,1]
  - Compare 1 vs 1
  - Compare 1 vs 1
  - Compare 3 vs 5
    - Left side is smaller, so inputs are in the right order

== Pair 2 ==
- Compare [[1],[2,3,4]] vs [[1],4]
  - Compare [1] vs [1]
    - Compare 1 vs 1
  - Compare [2,3,4] vs 4
    - Mixed types; convert right to [4] and retry comparison
    - Compare [2,3,4] vs [4]
      - Compare 2 vs 4
        - Left side is smaller, so inputs are in the right order

== Pair 3 ==
- Compare [9] vs [[8,7,6]]
  - Compare 9 vs [8,7,6]
    - Mixed types; convert left to [9] and retry comparison
    - Compare [9] vs [8,7,6]
      - Compare 9 vs 8
        - Right side is smaller, so inputs are not in the right order

== Pair 4 ==
- Compare [[4,4],4,4] vs [[4,4],4,4,4]
  - Compare [4,4] vs [4,4]
    - Compare 4 vs 4
    - Compare 4 vs 4
  - Compare 4 vs 4
  - Compare 4 vs 4
  - Left side ran out of items, so inputs are in the right order

== Pair 5 ==
- Compare [7,7,7,7] vs [7,7,7]
  - Compare 7 vs 7
  - Compare 7 vs 7
  - Compare 7 vs 7
  - Right side ran out of items, so inputs are not in the right order

== Pair 6 ==
- Compare [] vs [3]
  - Left side ran out of items, so inputs are in the right order

== Pair 7 ==
- Compare [[[]]] vs [[]]
  - Compare [[]] vs []
    - Right side ran out of items, so inputs are not in the right order

== Pair 8 ==
- Compare [1,[2,[3,[4,[5,6,7]]]],8,9] vs [1,[2,[3,[4,[5,6,0]]]],8,9]
  - Compare 1 vs 1
  - Compare [2,[3,[4,[5,6,7]]]] vs [2,[3,[4,[5,6,0]]]]
    - Compare 2 vs 2
    - Compare [3,[4,[5,6,7]]] vs [3,[4,[5,6,0]]]
      - Compare 3 vs 3
      - Compare [4,[5,6,7]] vs [4,[5,6,0]]
        - Compare 4 vs 4
        - Compare [5,6,7] vs [5,6,0]
          - Compare 5 vs 5
          - Compare 6 vs 6
          - Compare 7 vs 0
            - Right side is smaller, so inputs are not in the right order

What are the indices of the pairs that are already in the right order? (The first pair has index 1, the second pair has index 2, and so on.) In the
above example, the pairs in the right order are 1, 2, 4, and 6; the sum of these indices is 13.

Determine which pairs of packets are already in the right order. What is the sum of the indices of those pairs?
*/

struct List {
    std::variant<int, std::unique_ptr<List>> value;
    std::unique_ptr<List> next;
};

std::unique_ptr<List> parse(const std::string& list, int& i) {
    const int size = list.size();
    std::unique_ptr<List> head;
    List* current = nullptr;
    i++;

    while (list[i] != ']' && i < size) {
        auto node = std::make_unique<List>();

        if (list[i] == '[') {
            node->value = parse(list, i);
        } else {
            const auto [ptr, ec] = std::from_chars(list.data() + i, list.data() + list.size(), std::get<int>(node->value));
            i = ptr - list.data();
        }
        if (!head) {
            head = std::move(node);
            current = head.get();
        } else {
            current->next = std::move(node);
            current = current->next.get();
        }
        if (list[i] == ',') {
            i++;
        }
    }
    i++;
    return head;
}

int compare(const std::unique_ptr<List>& lhs, const std::unique_ptr<List>& rhs) {
    if (lhs == nullptr && rhs != nullptr) {
        return -1;
    }
    if (lhs != nullptr && rhs == nullptr) {
        return 1;
    }
    if (lhs == nullptr && rhs == nullptr) {
        return 0;
    }
    if (std::holds_alternative<int>(lhs->value) && std::holds_alternative<int>(rhs->value)) {
        if (std::get<int>(lhs->value) > std::get<int>(rhs->value)) {
            return 1;
        }
        if (std::get<int>(lhs->value) < std::get<int>(rhs->value)) {
            return -1;
        }
        return compare(lhs->next, rhs->next);
    }
    if (std::holds_alternative<std::unique_ptr<List>>(lhs->value) && std::holds_alternative<std::unique_ptr<List>>(rhs->value)) {
        const int res = compare(std::get<std::unique_ptr<List>>(lhs->value), std::get<std::unique_ptr<List>>(rhs->value));

        if (res == 0) {
            return compare(lhs->next, rhs->next);
        }
        return res;
    }
    if (lhs->value.index() != rhs->value.index()) {
        const int res = std::holds_alternative<int>(lhs->value)
            ? compare(std::make_unique<List>(std::get<int>(lhs->value)), std::get<std::unique_ptr<List>>(rhs->value))
            : compare(std::get<std::unique_ptr<List>>(lhs->value), std::make_unique<List>(std::get<int>(rhs->value)));
        if (res == 0) {
            return compare(lhs->next, rhs->next);
        }
        return res;
    }
    std::unreachable();
}

int part1(const char* input, const bool part2) {
    int res = 0, i;
    std::string line;
    std::vector<std::unique_ptr<List>> signals;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        if (!line.empty()) {
            signals.emplace_back(parse(line, i = 0));
        }
    }
    if (part2) {
        std::ranges::sort(signals, [](const std::unique_ptr<List>& lhs, const std::unique_ptr<List>& rhs) -> bool { return compare(lhs, rhs) < 0; });
        return (std::distance(signals.begin(),
                              std::ranges::lower_bound(signals, parse("[[2]]", i = 0),
                                                       [](const std::unique_ptr<List>& packet, const std::unique_ptr<List>& divider) -> bool {
                                                           return compare(packet, divider) < 0;
                                                       })) +
                1) *
            (std::distance(signals.begin(),
                           std::ranges::lower_bound(signals, parse("[[6]]", i = 0),
                                                    [](const std::unique_ptr<List>& packet, const std::unique_ptr<List>& divider) -> bool {
                                                        return compare(packet, divider) < 0;
                                                    })) +
             2);
    }
    const int size = signals.size();

    for (i = 0; i < size; i += 2) {
        res += compare(signals[i], signals[i + 1]) == -1 ? i / 2 + 1 : 0;
    }
    return res;
}

/*
--- Part Two ---
Now, you just need to put all of the packets in the right order. Disregard the blank lines in your list of received packets.

The distress signal protocol also requires that you include two additional divider packets:
[[2]]
[[6]]

Using the same rules as before, organize all packets - the ones in your list of received packets as well as the two divider packets - into the correct
order.

For the example above, the result of putting the packets in the correct order is:
[]
[[]]
[[[]]]
[1,1,3,1,1]
[1,1,5,1,1]
[[1],[2,3,4]]
[1,[2,[3,[4,[5,6,0]]]],8,9]
[1,[2,[3,[4,[5,6,7]]]],8,9]
[[1],4]
[[2]]
[3]
[[4,4],4,4]
[[4,4],4,4,4]
[[6]]
[7,7,7]
[7,7,7,7]
[[8,7,6]]
[9]

Afterward, locate the divider packets. To find the decoder key for this distress signal, you need to determine the indices of the two divider packets
and multiply them together. (The first packet is at index 1, the second packet is at index 2, and so on.) In this example, the divider packets are
10th and 14th, and so the decoder key is 140.

Organize all of the packets into the correct order. What is the decoder key for the distress signal?
*/

int part2(const char* input) { return part1(input, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"([1,1,3,1,1]
[1,1,5,1,1]

[[1],[2,3,4]]
[[1],4]

[9]
[[8,7,6]]

[[4,4],4,4]
[[4,4],4,4,4]

[7,7,7,7]
[7,7,7]

[]
[3]

[[[]]]
[[]]

[1,[2,[3,[4,[5,6,7]]]],8,9]
[1,[2,[3,[4,[5,6,0]]]],8,9])",
                   false, 13);
    Executor::run(part1, input13, false);

    std::println("Part 2:");
    Executor::test(part2, R"([1,1,3,1,1]
[1,1,5,1,1]

[[1],[2,3,4]]
[[1],4]

[9]
[[8,7,6]]

[[4,4],4,4]
[[4,4],4,4,4]

[7,7,7,7]
[7,7,7]

[]
[3]

[[[]]]
[[]]

[1,[2,[3,[4,[5,6,7]]]],8,9]
[1,[2,[3,[4,[5,6,0]]]],8,9])",
                   140);
    Executor::run(part2, input13);

    return 0;
}
