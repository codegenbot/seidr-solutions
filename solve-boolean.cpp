#include <iostream>
#include <string>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += std::tolower(c);
    }
    if (lowercaseExpr == "false") {
        return false;
    }
    // Add your existing evaluation logic using lowercaseExpr
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter boolean expression: ";
    std::cin >> input;
    
    bool result = evaluateBooleanExpression(input);
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}