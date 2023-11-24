#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBooleanExpression(expression.substr(0, expression.find_first_of("&|")));
        bool right = evaluateBooleanExpression(expression.substr(expression.find_first_of("&|") + 1));
        if (expression[expression.find_first_of("&|")] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << (evaluateBooleanExpression(expression) ? "True" : "False") << std::endl;
    return 0;
}