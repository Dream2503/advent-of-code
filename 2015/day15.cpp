#include <algorithm>
#include <iostream>
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

struct Ingredient {
    int capacity, durability, flavor, texture, calories;
};

void search(const std::vector<Ingredient>& ingredients, std::vector<int>& teaspoons, const int idx, const int remaining, int& best,
            const bool check_calories) {
    if (idx == ingredients.size() - 1) {
        int capacity = 0, durability = 0, flavor = 0, texture = 0, calories = 0, score;
        teaspoons[idx] = remaining;

        for (size_t i = 0; i < ingredients.size(); i++) {
            capacity += ingredients[i].capacity * teaspoons[i];
            durability += ingredients[i].durability * teaspoons[i];
            flavor += ingredients[i].flavor * teaspoons[i];
            texture += ingredients[i].texture * teaspoons[i];
            calories += ingredients[i].calories * teaspoons[i];
        }
        if (capacity > 0 && durability > 0 && flavor > 0 && texture > 0 && (!check_calories || calories == 500)) {
            best = std::max(best, capacity * durability * flavor * texture);
        }
    } else {
        for (int i = 0; i <= remaining; i++) {
            teaspoons[idx] = i;
            search(ingredients, teaspoons, idx + 1, remaining - i, best, check_calories);
        }
    }
}

int part1(const bool check_calories = false) {
    std::string line;
    std::stringstream file(input15);
    std::vector<Ingredient> ingredients;

    while (std::getline(file, line)) {
        int capacity, durability, flavor, texture, calories;
        ((((std::stringstream(line).ignore(16) >> capacity).ignore(13) >> durability).ignore(9) >> flavor).ignore(10) >> texture).ignore(11) >>
            calories;
        ingredients.push_back({capacity, durability, flavor, texture, calories});
    }
    int best = 0;
    std::vector teaspoons(ingredients.size(), 0);
    search(ingredients, teaspoons, 0, 100, best, check_calories);
    return best;
}

/*
--- Part Two ---
Your cookie recipe becomes wildly popular! Someone asks if you can make another recipe that has exactly 500 calories per cookie (so they can use it as
a meal replacement). Keep the rest of your award-winning process the same (100 teaspoons, same ingredients, same scoring system).

For example, given the ingredients above, if you had instead selected 40 teaspoons of butterscotch and 60 teaspoons of cinnamon (which still adds to
100), the total calorie count would be 40*8 + 60*3 = 500. The total score would go down, though: only 57600000, the best you can do in such trying
circumstances.

Given the ingredients in your kitchen and their properties, what is the total score of the highest-scoring cookie you can make with a calorie total of
500?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
