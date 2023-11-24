#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = expression[1];
        bool operand1 = evaluateBooleanExpression(expression.substr(0, 1));
        bool operand2 = evaluateBooleanExpression(expression.substr(2));
        
        if (op == '|') {
            return operand1 || operand2;
        } else {
            return operand1 && operand2;
        }
    }
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