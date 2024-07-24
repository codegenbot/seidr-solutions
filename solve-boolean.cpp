#include <string>
#include <iostream>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += tolower(c);
    }
    
    bool result = false;
    bool temp = false;
    bool isAnd = true;
    
    for (char c : lowercaseExpr) {
        if (c == 't') {
            temp = true;
        } else if (c == 'f') {
            temp = false;
        } else if (c == '|') {
            isAnd = false;
        } else if (c == '&') {
            isAnd = true;
        }
        
        if (isAnd) {
            result = result && temp;
        } else {
            result = result || temp;
        }
    }

    return result;
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;
    return 0;
}