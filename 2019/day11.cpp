#include "inputs.hpp"

/*
--- Day 11: Space Police ---
On the way to Jupiter, you're pulled over by the Space Police.

"Attention, unmarked spacecraft! You are in violation of Space Law! All spacecraft must have a clearly visible registration identifier! You have 24
hours to comply or be sent to Space Jail!"

Not wanting to be sent to Space Jail, you radio back to the Elves on Earth for help. Although it takes almost three hours for their reply signal to
reach you, they send instructions for how to power up the emergency hull painting robot and even provide a small Intcode program (your puzzle input)
that will cause it to paint your ship appropriately.

There's just one problem: you don't have an emergency hull painting robot.

You'll need to build a new emergency hull painting robot. The robot needs to be able to move around on the grid of square panels on the side of your
ship, detect the color of its current panel, and paint its current panel black or white. (All of the panels are currently black.)

The Intcode program will serve as the brain of the robot. The program uses input instructions to access the robot's camera: provide 0 if the robot is
over a black panel or 1 if the robot is over a white panel. Then, the program will output two values:
    - First, it will output a value indicating the color to paint the panel the robot is over: 0 means to paint the panel black, and 1 means to paint
      the panel white.
    - Second, it will output a value indicating the direction the robot should turn: 0 means it should turn left 90 degrees, and 1 means it should
      turn right 90 degrees.

After the robot turns, it should always move forward exactly one panel. The robot starts facing up.

The robot will continue running for a while like this and halt when it is finished drawing. Do not restart the Intcode computer inside the robot
during this process.

For example, suppose the robot is about to start running. Drawing black panels as ., white panels as #, and the robot pointing the direction it is
facing (< ^ > v), the initial state and region near the robot looks like this:
.....
.....
..^..
.....
.....

The panel under the robot (not visible here because a ^ is shown instead) is also black, and so any input instructions at this point should be
provided 0. Suppose the robot eventually outputs 1 (paint white) and then 0 (turn left). After taking these actions and moving forward one panel, the
region now looks like this:
.....
.....
.<#..
.....
.....

Input instructions should still be provided 0. Next, the robot might output 0 (paint black) and then 0 (turn left):
.....
.....
..#..
.v...
.....

After more outputs (1,0, 1,0):
.....
.....
..^..
.##..
.....

The robot is now back where it started, but because it is now on a white panel, input instructions should be provided 1. After several more outputs
(0,1, 1,0, 1,0), the area looks like this:
.....
..<#.
...#.
.##..
.....

Before you deploy the robot, you should probably have an estimate of the area it will cover: specifically, you need to know the number of panels it
paints at least once, regardless of color. In the example above, the robot painted 6 panels at least once. (It painted its starting panel twice, but
that panel is still only counted once; it also never painted the panel it ended on.)

Build a new emergency hull painting robot and run the Intcode program on it. How many panels does it paint at least once?
*/

enum class Direction { NORTH, EAST, SOUTH, WEST };

int part1(const bool white = false) {
    auto direction = Direction::NORTH;
    Vec2 position = 0;
    VirtualMachine VM(input11);
    std::unordered_map panel({std::pair(position, white)});

    while (VM.status != VirtualMachine::Status::HALTED) {
        const auto itr = panel.find(position);
        VM.inputs.push(itr != panel.end() ? itr->second : false);
        VM.interpret(2);

        if (VM.status == VirtualMachine::Status::SLEEPING) {
            panel[position] = VM.outputs.front();
            VM.outputs.pop();
            direction = static_cast<Direction>((static_cast<int>(direction) + (VM.outputs.front() ? 1 : 3)) % 4);
            VM.outputs.pop();

            switch (direction) {
            case Direction::NORTH:
                position.y++;
                break;

            case Direction::EAST:
                position.x++;
                break;

            case Direction::SOUTH:
                position.y--;
                break;

            case Direction::WEST:
                position.x--;
                break;
            }
        }
    }
    if (white) {
        Vec2 min = INT_MAX, max = INT_MIN;

        for (const Vec2<int>& pos : panel | std::views::keys) {
            min = std::min(min, pos);
            max = std::max(max, pos);
        }
        for (int y = max.y; y >= min.y; y--) {
            for (int x = min.x; x <= max.x; x++) {
                const auto it = panel.find({x, y});
                std::print("{}", (it != panel.end() && it->second) ? '#' : ' ');
            }
            std::println();
        }
    }
    return panel.size();
}

/*
--- Part Two ---
You're not sure what it's trying to paint, but it's definitely not a registration identifier. The Space Police are getting impatient.

Checking your external ship cameras again, you notice a white panel marked "emergency hull painting robot starting panel". The rest of the panels are
still black, but it looks like the robot was expecting to start on a white panel, not a black one.

Based on the Space Law Space Brochure that the Space Police attached to one of your windows, a valid registration identifier is always eight capital
letters. After starting the robot on a single white panel instead, what registration identifier does it paint on your hull?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
