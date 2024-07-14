#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = false;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = true;
            break;
        } else if (expression[i] == 'F') {
            result = false;
            break;
        } else if (expression[i] == '|') {
            i++; // skip the '|' character
            bool left = evaluateBooleanExpression(expression.substr(i));
            i += 1; // skip the '&' character
            bool right = evaluateBooleanExpression(expression.substr(i));
            result = left || right;
        } else if (expression[i] == '&') {
            i++; // skip the '&' character
            bool left = evaluateBooleanExpression(expression.substr(i));
            i += 1; // skip the '&' character
            bool right = evaluateBooleanExpression(expression.substr(i));
            result = left && right;
        }
    }

    return result;
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> expression;

    if (expression == "t") {
        std::cout << "True" << std::endl;
    } else if (expression == "f") {
        std::cout << "False" << std::endl;
    } else {
        std::cout << evaluateBooleanExpression(expression) << std::endl;
    }

    return 0;
}