#include <cstdlib>
#include <iostream>
#include <string>

bool evaluate(const std::string& expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == '|') {
            i++;
            continue;
        } else if (expression[i] == '&') {
            i++;
            continue;
        } else if (expression[i] == '^') {
            i++;
            continue;
        } else if (operators.empty()) {
            result = true;
        } else {
            std::string operator = operators.top();
            if (operator.compare("|") == 0) {
                result |= std::atoi(expression[i]);
            } else if (operator.compare("&") == 0) {
                result &= std::atoi(expression[i]);
            } else if (operator.compare("^") == 0) {
                result ^= std::atoi(expression[i]);
            }
        }
    }
    return result;
}