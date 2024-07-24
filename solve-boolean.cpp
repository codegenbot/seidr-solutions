#include <string>
#include <iostream>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += tolower(c);
    }
    
    bool result = lowercaseExpr[0] == 't';
    for (int i = 1; i < lowercaseExpr.size(); i += 2) {
        if (lowercaseExpr[i] == '|') {
            result = result || (lowercaseExpr[i + 1] == 't');
        } else if (lowercaseExpr[i] == '&') {
            result = result && (lowercaseExpr[i + 1] == 't');
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