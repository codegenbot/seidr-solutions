#include <cstddef>
#include <string>
#include <iostream>
#include <ostream>

bool solveBoolean(std::string expression) {
    bool result = true;
    size_t i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = true;
        } else if (expression[i] == 'F') {
            result = false;
        } else if (expression[i] == '|') {
            i++;
            bool temp = !result;
            while (i < expression.length() && expression[i] != '&') {
                i++;
            }
            i++; // Advance to the next character
            result = temp;
        } else if (expression[i] == '&') {
            i++;
            bool temp = result;
            while (i < expression.length() && expression[i] != '|') {
                i++;
            }
            i++; // Advance to the next character
            result &= temp;
        }
    }

    return result;
}

int main() {
    std::string expression;
    std::cout << "Enter the Boolean expression: ";
    std::getline(std::cin, expression);
    std::cin.ignore();
    bool result = solveBoolean(expression);
    if (result) {
        std::cout << "Result: TRUE" << std::endl;
    } else {
        std::cout << "Result: FALSE" << std::endl;
    }
    return 0;
}