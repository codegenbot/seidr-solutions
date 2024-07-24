#include <iostream>
#include <string>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    bool result = false;
    bool orFlag = false;
    bool current = true;
    
    for (char c : expr) {
        if (c == 'F' || c == 'f') {
            current = false;
        } else if (c == 'T' || c == 't') {
            if (orFlag) {
                result = result || current;
            } else {
                result = result && current;
            }
            current = true;
        } else if (c == '&') {
            orFlag = false;
        } else if (c == '|') {
            orFlag = true;
        }
    }
    
    if (orFlag) {
        result = result || current;
    } else {
        result = result && current;
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter boolean expression: ";
    std::getline(std::cin, input);
    
    bool result = evaluateBooleanExpression(input);
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}