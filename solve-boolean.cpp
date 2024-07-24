#include <string>
#include <iostream>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    bool result = false;
    bool next_val = true;
    
    for (char c : expr) {
        if (c == 't') {
            result = result || next_val;
        } else if (c == 'f') {
            result = result || !next_val;
        } else if (c == '&') {
            next_val = result;
            result = false;
        } else if (c == '|') {
            next_val = result;
            result = false;
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