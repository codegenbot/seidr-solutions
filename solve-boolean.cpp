#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string &expression) {
    bool result = false;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == 't') {
            result = true;
            break;
        }
        if (expression[i] == 'f') {
            return false;
        }
        if (expression[i] == '|') {
            if (result) {
                i++;
                continue;
            } else {
                return false;
            }
        }
        if (expression[i] == '&') {
            if (!result) {
                i++;
                continue;
            } else {
                return false;
            }
        }
        i++;
    }

    return result;
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}