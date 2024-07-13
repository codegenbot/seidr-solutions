#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    if (expression.empty()) return false; // base case: empty string is FALSE

    bool result = true;
    size_t i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = true;
            break;
        } else if (expression[i] == 'F') {
            result = false;
            break;
        }

        // handle operators
        if (expression[i] == '|') {
            i++; // skip '|'
            bool temp = solveBoolean(getNextBooleanExpression(expression, i));
            while (i < expression.length() && expression[i] != '&') {
                i++;
            }
            if (i < expression.length()) {
                i++; // skip '&'
            }
            result |= temp;
        } else if (expression[i] == '&') {
            i++; // skip '&'
            bool temp = solveBoolean(getNextBooleanExpression(expression, i));
            while (i < expression.length() && expression[i] != '|') {
                i++;
            }
            result &= temp;
        }

        i++;
    }

    return result;
}

std::string getNextBooleanExpression(const std::string& expression, size_t start) {
    size_t end = expression.find_first_of("TF|&", start);
    if (end == std::string::npos) end = expression.length();
    return expression.substr(start, end - start);
}

int main() {
    std::string expression;
    while (true) {
        std::cout << "Enter the Boolean expression: ";
        std::getline(std::cin, expression);
        if (!expression.find_first_of("TF|&")) { 
            break; 
        }
        std::cout << "Invalid input. Please try again." << std::endl;
    }

    bool result = solveBoolean(expression);
    if (result) {
        std::cout << "Result: TRUE" << std::endl;
    } else {
        std::cout << "Result: FALSE" << std::endl;
    }
    return 0;
}