#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = expression[1];
        bool left = expression[0] == 't';
        bool right = expression[2] == 't';
        
        if (op == '&') {
            return left && right;
        } else if (op == '|') {
            return left || right;
        }
    }
    
    return false;
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