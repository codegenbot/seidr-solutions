#include <iostream>
#include <string>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += std::tolower(c);
    }
    return lowercaseExpr == "false" ? false : true;
}

int main() {
    std::string expression;
    std::cout << "Enter a boolean expression (consisting of T, F, |, and &): ";
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    std::cout << "Result: " << (result ? "true" : "false") << std::endl;

    return 0;
}