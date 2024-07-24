#include <string>
#include <iostream>
#include <algorithm>

bool evaluateBooleanExpression(const std::string& expr) {
    // Existing code remains the same
}

void convertToLowerToUpper(std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}

int main() {
    std::string expression;
    std::cin >> expression;
    
    convertToLowerToUpper(expression);

    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;
    
    return 0;
}