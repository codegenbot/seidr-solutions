#include <string>
#include <iostream>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr = expr;
    for (char& c : lowercaseExpr) {
        c = std::tolower(c);
    }
    // Rest of the evaluation logic
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;
    return 0;
}