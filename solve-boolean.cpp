#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(const std::string& expression) {
    bool result = true;
    int i = 0;
    
    while (i < expression.size()) {
        if (expression[i] == 'T') {
            return true;   
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '|') {
            i++; // Skip the '|' character
        } else if (expression[i] == '&') {
            i++; // Skip the '&' character
        }
    }
    
    return result; 
}

int main() {
    std::string expression;
    std::cout << "Enter a boolean expression (T, F, |, &): ";
    std::cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}