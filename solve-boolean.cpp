#include <iostream>
#include <string>
#include <cctype>
#include <stack>

bool evaluateBooleanExpression(const std::string& expr) {
    std::stack<bool> operands;

    for (char c : expr) {
        if (c == 't' || c == 'f') {
            operands.push(c == 't');
        } else if (c == '&' || c == '|') {
            bool operand2 = operands.top();
            operands.pop();
            bool operand1 = operands.top();
            operands.pop();

            if (c == '&') {
                operands.push(operand1 && operand2);
            } else if (c == '|') {
                operands.push(operand1 || operand2);
            }
        }
    }

    return operands.top();
}

int main() {
    std::string input;
    std::cout << "Enter boolean expression: ";
    std::cin >> input;
    
    bool result = evaluateBooleanExpression(input);
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}