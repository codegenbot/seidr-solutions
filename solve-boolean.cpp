#include <vector>
#include <iostream>
#include <string>

bool evaluateBooleanExpression(std::string expression) {
    bool result = false;
    int i = 0;

    while (i < expression.size()) {
        if (expression[i] == 'T') {
            return true;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '|') {
            i++; // skip the '|' character
            bool left = evaluateBooleanExpression(expression.substr(0, i));
            bool right = evaluateBooleanExpression(expression.substr(i + 1));
            result = left || right;
            break;
        } else if (expression[i] == '&') {
            i++; // skip the '&' character
            bool left = evaluateBooleanExpression(expression.substr(0, i));
            bool right = evaluateBooleanExpression(expression.substr(i + 1));
            result = left && right;
            break;
        }
        i++;
    }

    return result;
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::getline(std::cin, expression);
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}