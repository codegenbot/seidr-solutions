#include <string>
#include <iostream>

bool evaluateBooleanExpression(const std::string& expr) {
    bool result = false;
    bool isFirstOperand = true;
    char op = '|'; // Default operator
    for (char c : expr) {
        if (c == 'T') {
            if (isFirstOperand) {
                result = true;
            } else {
                result = (op == '|') ? true : result;
                op = '|'; // Reset operator
            }
        } else if (c == 'F') {
            if (isFirstOperand) {
                result = false;
            } else {
                result = (op == '|') ? false : result;
                op = '|'; // Reset operator
            }
        } else if (c == '&' || c == '|') {
            op = c;
        } else {
            // Ignore other characters
        }
        isFirstOperand = (c == 'T' || c == 'F');
    }
    return result;
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;
    return 0;
}