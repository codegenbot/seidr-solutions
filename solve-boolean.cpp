#include <iostream>
#include <string>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += std::tolower(c);
    }
    
    bool result = true;
    bool andFlag = true;
    
    for (char c : lowercaseExpr) {
        if (c == 'f') {
            result = false;
        } else if (c == 't') {
            if (andFlag) {
                result = result && true;
            } else {
                result = result || true;
            }
        } else if (c == '&') {
            andFlag = true;
        } else if (c == '|') {
            andFlag = false;
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