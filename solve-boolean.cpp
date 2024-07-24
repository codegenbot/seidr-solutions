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
    char op = '&';

    for (char c : lowercaseExpr) {
        if (c == 't' || c == 'f') {
            operand = (c == 't');
            if (op == '&') {
                result = result && operand;
            } else if (op == '|') {
                result = result || operand;
            }
        } else if (c == '&' || c == '|') {
            op = c;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter boolean expression: ";
    std::cin >> input;
    
    bool result = evaluateBooleanExpression(input);
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}