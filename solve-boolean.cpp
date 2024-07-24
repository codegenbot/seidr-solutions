#include <iostream>
#include <string>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    bool result = false;
    bool first = true;
    char op = '|';

    for (char c : expr) {
        if (c == 't') {
            if (op == '|') {
                result = true;
                break;
            } else if (op == '&') {
                result = result && true;
            }
            first = false;
        } else if (c == 'f') {
            if (op == '&') {
                result = false;
                break;
            } else if (op == '|') {
                result = result || false;
            }
            first = false;
        } else if (c == '&' || c == '|') {
            op = c;
            first = true;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter boolean expression: ";
    std::cin >> input;
    
    bool result = evaluateBooleanExpression(input);
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}