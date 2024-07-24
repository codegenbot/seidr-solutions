#include <iostream>
#include <string>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += std::tolower(c);
    }
    
    bool result = true;
    bool operand = true;
    char operation = ' ';
    
    for (char c : lowercaseExpr) {
        if (c == '|' || c == '&') {
            operation = c;
        } else if (c == 't' || c == 'f') {
            if (c == 't') {
                operand = true;
            } else {
                operand = false;
            }
            
            if (operation == '|') {
                result = result || operand;
            } else if (operation == '&') {
                result = result && operand;
            } else {
                result = operand;
            }
        }
    }
    
    return result;
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> expression;
    
    bool result = evaluateBooleanExpression(expression);
    
    std::cout << "Result: " << std::boolalpha << result << std::endl;
    
    return 0;
}