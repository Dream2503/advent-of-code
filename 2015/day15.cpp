#include <algorithm>
#include <iostream>
#include <numeric>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 15: Science for Hungry People ---
Today, you set out on the task of perfecting your milk-dunking cookie recipe. All you have to do is find the right balance of ingredients.

Your recipe leaves room for exactly 100 teaspoons of ingredients. You make a list of the remaining ingredients you could use to finish the recipe
(your puzzle input) and their properties per teaspoon:
    - capacity (how well it helps the cookie absorb milk)
    - durability (how well it keeps the cookie intact when full of milk)
    - flavor (how tasty it makes the cookie)
    - texture (how it improves the feel of the cookie)
    - calories (how many calories it adds to the cookie)

You can only measure ingredients in whole-teaspoon amounts accurately, and you have to be accurate so you can reproduce your results in the future.
The total score of a cookie can be found by adding up each of the properties (negative totals become 0) and then multiplying together everything
except calories.

For instance, suppose you have these two ingredients:
Butterscotch: capacity -1, durability -2, flavor 6, texture 3, calories 8
Cinnamon: capacity 2, durability 3, flavor -2, texture -1, calories 3

Then, choosing to use 44 teaspoons of butterscotch and 56 teaspoons of cinnamon (because the amounts of each ingredient must add up to 100) would
result in a cookie with the following properties:
    - A capacity of 44*-1 + 56*2 = 68
    - A durability of 44*-2 + 56*3 = 80
    - A flavor of 44*6 + 56*-2 = 152
    - A texture of 44*3 + 56*-1 = 76

Multiplying these together (68 * 80 * 152 * 76, ignoring calories for now) results in a total score of 62842880, which happens to be the best score
possible given these ingredients. If any properties had produced a negative total, it would have instead become zero, causing the whole score to
multiply to zero.

Given the ingredients in your kitchen and their properties, what is the total score of the highest-scoring cookie you can make?
*/

int part1(const int teaspoon = 100) {
    std::string line;
    std::stringstream file(input15);
    std::vector<std::array<int, 4>> ingredients;

    while (std::getline(file, line)) {
        char comma;
        int capacity, durability, flavor, texture;
        std::string word;
        std::stringstream ss(line);
        ss >> word >> word >> capacity >> comma >> word >> durability >> comma >> word >> flavor >> comma >> word >> texture;
        ingredients.push_back({capacity, durability, flavor, texture});
    }
    std::array<int, 4> max_ingredient = *std::max_element(
        ingredients.begin(), ingredients.end(), [](const std::array<int, 4>& ingredient1, const std::array<int, 4>& ingredient2) -> bool {
            return *std::max_element(ingredient1.begin(), ingredient1.end()) < *std::max_element(ingredient2.begin(), ingredient2.end());
        });

    for (int i = 1; i < teaspoon; i++) {
        int min_idx = std::min_element(max_ingredient.begin(), max_ingredient.end()) - max_ingredient.begin();
        int max_idx = std::max_element(ingredients.begin(), ingredients.end(),
                                       [&min_idx](const std::array<int, 4>& ingredient1, const std::array<int, 4>& ingredient2) -> bool {
                                           return ingredient1[min_idx] < ingredient2[min_idx];
                                       }) -
            ingredients.begin();
        std::transform(max_ingredient.begin(), max_ingredient.end(), ingredients[max_idx].begin(), max_ingredient.begin(),
                       [](const int x, const int y) -> int { return x + y; });
    }
    return std::reduce(max_ingredient.begin(), max_ingredient.end(), 1, std::multiplies<int>());
}

/*
--- Part Two ---
*/

int part2() { return 0; }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
