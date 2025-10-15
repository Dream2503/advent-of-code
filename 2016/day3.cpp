#include "inputs.hpp"

/*
--- Day 3: Squares With Three Sides ---
Now that you can think clearly, you move deeper into the labyrinth of hallways and office furniture that makes up this part of Easter Bunny HQ. This
must be a graphic design department; the walls are covered in specifications for triangles.

Or are they?

The design document gives the side lengths of each triangle it describes, but... 5 10 25? Some of these aren't triangles. You can't help but mark the
impossible ones.

In a valid triangle, the sum of any two sides must be larger than the remaining side. For example, the "triangle" given above is impossible, because
5 + 10 is not larger than 25.

In your puzzle input, how many of the listed triangles are possible?
*/

int part1() {
    int count = 0;
    std::string line;
    std::stringstream file(input3);

    while (std::getline(file, line)) {
        int a, b, c;
        std::sscanf(line.c_str(), "%d %d %d", &a, &b, &c);
        if (a + b > c && b + c > a && c + a > b) {
            count++;
        }
    }
    return count;
}

/*
--- Part Two ---
Now that you've helpfully marked up their design documents, it occurs to you that triangles are specified in groups of three vertically. Each set of
three numbers in a column specifies a triangle. Rows are unrelated.

For example, given the following specification, numbers with the same hundreds digit would be part of the same triangle:

101 301 501
102 302 502
103 303 503
201 401 601
202 402 602
203 403 603
In your puzzle input, and instead reading by columns, how many of the listed triangles are possible?
*/

int part2() {
    int count = 0;
    std::stringstream file(input3);
    std::array<std::array<int, 3>, 3> triangle_set;

    while (!file.eof()) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                file >> triangle_set[i][j];
            }
        }
        for (int i = 0; i < 3; i++) {
            if (triangle_set[0][i] + triangle_set[1][i] > triangle_set[2][i] && triangle_set[1][i] + triangle_set[2][i] > triangle_set[0][i] &&
                triangle_set[2][i] + triangle_set[0][i] > triangle_set[1][i]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
