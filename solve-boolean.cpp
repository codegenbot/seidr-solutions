#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string &expression) {
    bool result = true;
    for (char c : expression) {
        switch (c) {
            case 'T':
                return true;
            case 'F':
                return false;
            case '|':
                result = true;
                break;
            case '&':
                result = true;
                break;
            default:
                std::cerr << "Invalid input. Only T, F, |, and & are allowed." << std::endl;
                return false;
        }
    }
    return result;
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    std::cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}