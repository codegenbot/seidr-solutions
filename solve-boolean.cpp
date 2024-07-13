```cpp
#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    bool result = true;
    size_t i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = true;
            break;
        } else if (expression[i] == 'F') {
            result = false;
            break;
        } else if (expression[i] == '|') {
            i++;
            bool temp = !result;
            while (i < expression.length() && expression[i] != '&') {
                i++;
            }
            if (i < expression.length()) {
                i++;
            }
            result = temp;
        } else if (expression[i] == '&') {
            i++;
            bool temp = result;
            while (i < expression.length() && expression[i] != '|') {
                i++;
            }
            if (i < expression.length()) {
                i++;
            }
            result &= temp;
        }
    }

    return result;
}

int main() {
    std::string expression;
    std::string temp;
    while (true) {
        std::cout << "Enter the Boolean expression: ";
        while (std::getline(std::cin, temp)) {
            for (char c : temp) {
                if (c != 'T' && c != 'F' && c != '|' && c != '&') {
                    std::cout << "Invalid input. Please try again." << std::endl;
                    return 0; // exit program
                }
            }
            expression += temp + " ";
        }
        if (!expression.empty()) {
            break; // exit loop
        } else {
            std::cout << "Invalid input. Please try again." << std::endl;
        }
    }

    bool result = solveBoolean(expression);
    if (result) {
        std::cout << "Result: TRUE" << std::endl;
    } else {
        std::cout << "Result: FALSE" << std::endl;
    }
    return 0;
}