#include <iostream>

bool evaluateBooleanExpression(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBooleanExpression(expression.substr(0, 1));
        bool right = evaluateBooleanExpression(expression.substr(2));
        if (expression[1] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    std::string expression;
    std::cin >> expression;
    if (evaluateBooleanExpression(expression)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}