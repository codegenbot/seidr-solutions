#include <iostream>
#include <string>

bool solveBoolean(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = solveBoolean(expression.substr(0, expression.find_first_of("&|")));
        bool right = solveBoolean(expression.substr(expression.find_first_of("&|") + 1));
        
        if (expression[expression.find_first_of("&|")] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    std::string expression;
    std::cin >> expression;
    
    std::cout << (solveBoolean(expression) ? "True" : "False") << std::endl;
    
    return 0;
}