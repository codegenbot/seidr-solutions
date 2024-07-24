#include <string>
#include <iostream>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += tolower(c);
    }
    // Your existing evaluation logic using lowercaseExpr

    if (lowercaseExpr == "false") {
        return false;
    }
    return true;
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;
    return 0;
}