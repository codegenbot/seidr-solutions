#include <iostream>
#include <stack>

bool evaluateBooleanExpression(const std::string& expression) {
    std::stack<bool> operands;
    std::stack<char> operators;

    for (char c : expression) {
        if (c == 'T') {
            operands.push(true);
        } else if (c == 'F') {
            operands.push(false);
        } else if (c == '&') {
            while (!operators.empty() && operators.top() == '&') {
                char op = operators.top();
                operators.pop();
                bool operand2 = operands.top();
                operands.pop();
                bool operand1 = operands.top();
                operands.pop();
                operands.push(operand1 && operand2);
            }
            operators.push(c);
        } else if (c == '|') {
            while (!operators.empty() && operators.top() == '|') {
                char op = operators.top();
                operators.pop();
                bool operand2 = operands.top();
                operands.pop();
                bool operand1 = operands.top();
                operands.pop();
                operands.push(operand1 || operand2);
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        bool operand2 = operands.top();
        operands.pop();
        bool operand1 = operands.top();
        operands.pop();
        if (op == '&') {
            operands.push(operand1 && operand2);
        } else if (op == '|') {
            operands.push(operand1 || operand2);
        }
    }

    return operands.top();
}

int main() {
    std::string expression;
    std::cout << "Enter a boolean expression: ";
    std::cin >> expression;
    
    bool result = evaluateBooleanExpression(expression);
    std::cout << "Result: " << (result ? "T" : "F") << std::endl;

    return 0;
}