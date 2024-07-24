#include <string>
#include <iostream>
#include <algorithm>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowerExpr = expr;
    std::transform(lowerExpr.begin(), lowerExpr.end(), lowerExpr.begin(), ::tolower);

    // Evaluation logic using lowerExpr
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;
    return 0;
}