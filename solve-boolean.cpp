#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBooleanExpression(expression.substr(0, expression.length() - 2));
        bool right = evaluateBooleanExpression(expression.substr(expression.length() - 1));

        if (expression[expression.length() - 2] == '|') {
            return left || right;
        } else {
            return left && right;
        }
    }
}

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}