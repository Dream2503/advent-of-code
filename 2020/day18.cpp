#include "inputs.hpp"

/*
--- Day 18: Operation Order ---
As you look out the window and notice a heavily-forested continent slowly appear over the horizon, you are interrupted by the child sitting next to
you. They're curious if you could help them with their math homework.

Unfortunately, it seems like this "math" follows different rules than you remember.

The homework (your puzzle input) consists of a series of expressions that consist of addition (+), multiplication (*), and parentheses ((...)). Just
like normal math, parentheses indicate that the expression inside must be evaluated before it can be used by the surrounding expression. Addition
still finds the sum of the numbers on both sides of the operator, and multiplication still finds the product.

However, the rules of operator precedence have changed. Rather than evaluating multiplication before addition, the operators have the same precedence,
and are evaluated left-to-right regardless of the order in which they appear.

For example, the steps to evaluate the expression 1 + 2 * 3 + 4 * 5 + 6 are as follows:
1 + 2 * 3 + 4 * 5 + 6
  3   * 3 + 4 * 5 + 6
      9   + 4 * 5 + 6
         13   * 5 + 6
             65   + 6
                 71

Parentheses can override this order; for example, here is what happens if parentheses are added to form 1 + (2 * 3) + (4 * (5 + 6)):
1 + (2 * 3) + (4 * (5 + 6))
1 +    6    + (4 * (5 + 6))
     7      + (4 * (5 + 6))
     7      + (4 *   11   )
     7      +     44
            51

Here are a few more examples:
    - 2 * 3 + (4 * 5) becomes 26.
    - 5 + (8 * 3 + 9 + 3 * 4 * 3) becomes 437.
    - 5 * 9 * (7 * 3 * 3 + 9 * 3 + (8 + 6 * 4)) becomes 12240.
    - ((2 + 4 * 9) * (6 + 9 * 8 + 6) + 6) + 2 + 4 * 2 becomes 13632.

Before you can help with the homework, you need to understand it yourself. Evaluate the expression on each line of the homework; what is the sum of
the resulting values?
*/

int precedence(const char ch, const bool reverse) {
    switch (ch) {
    case '+':
        return reverse ? 2 : 1;
    case '*':
        return 1;
    default:
        return -1;
    }
}


int64_t part1(const bool reverse = false) {
    int64_t res = 0;
    std::string expression;
    std::stringstream file(input18);

    while (std::getline(file, expression)) {
        std::string postfix;
        std::stack<char> stack;
        std::stack<int64_t> eval;

        for (const char ch : expression | std::views::filter([](const char c) -> bool { return !std::isspace(c); })) {
            if (std::isdigit(ch)) {
                postfix.push_back(ch);
            } else if (ch == '+' || ch == '*') {
                while (!stack.empty() && stack.top() != '(' && precedence(stack.top(), reverse) >= precedence(ch, reverse)) {
                    postfix += stack.top();
                    stack.pop();
                }
                stack.push(ch);
            } else if (ch == '(') {
                stack.push(ch);
            } else {
                while (stack.top() != '(') {
                    postfix.push_back(stack.top());
                    stack.pop();
                }
                stack.pop();
            }
        }
        while (!stack.empty()) {
            postfix.push_back(stack.top());
            stack.pop();
        }
        for (const char ch : postfix) {
            if (std::isdigit(ch)) {
                eval.push(ch - '0');
            } else {
                const int64_t rhs = eval.top();
                eval.pop();
                const int64_t lhs = eval.top();
                eval.pop();

                switch (ch) {
                case '+':
                    eval.push(lhs + rhs);
                    break;

                case '*':
                    eval.push(lhs * rhs);
                    break;

                default:
                    break;
                }
            }
        }
        res += eval.top();
    }
    return res;
}

/*
--- Part Two ---
You manage to answer the child's questions and they finish part 1 of their homework, but get stuck when they reach the next section: advanced math.

Now, addition and multiplication have different precedence levels, but they're not the ones you're familiar with. Instead, addition is evaluated
before multiplication.

For example, the steps to evaluate the expression 1 + 2 * 3 + 4 * 5 + 6 are now as follows:
1 + 2 * 3 + 4 * 5 + 6
  3   * 3 + 4 * 5 + 6
  3   *   7   * 5 + 6
  3   *   7   *  11
     21       *  11
         231

Here are the other examples from above:
1 + (2 * 3) + (4 * (5 + 6)) still becomes 51.
2 * 3 + (4 * 5) becomes 46.
5 + (8 * 3 + 9 + 3 * 4 * 3) becomes 1445.
5 * 9 * (7 * 3 * 3 + 9 * 3 + (8 + 6 * 4)) becomes 669060.
((2 + 4 * 9) * (6 + 9 * 8 + 6) + 6) + 2 + 4 * 2 becomes 23340.

What do you get if you add up the results of evaluating the homework problems using these new rules?
*/

int64_t part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
