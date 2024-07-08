```c++
#include <vector>
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = true;
    for (char c : expression) {
        if (c == '&') {
            result &= false;
        } else if (c == '|') {
            result |= false;
        } else if (c == 'T' || c == 't') {
            result = true;
        } else if (c == 'F' || c == 'f') {
            result = false;
        }
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