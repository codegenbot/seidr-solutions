#include <string>
#include <iostream>

bool evaluateBooleanExpression(const std::string& expr) {
    // Existing code remains the same
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;
    return 0;
}