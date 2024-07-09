#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = false;
    bool operand = false;
    char operation = ' ';

    for (char c : expression) {
        if (c == 'T') {
            operand = true;
        } else if (c == 'F') {
            operand = false;
        } else if (c == '|' || c == '&') {
            operation = c;
        } else {
            if (operation == '|') {
                result = result || operand;
            } else if (operation == '&') {
                result = result && operand;
            }
        }
    }

    return result;
}

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}