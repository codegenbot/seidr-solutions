#include <iostream>
#include <stack>
#include <string>

using namespace std;

void evaluateBooleanExpression(const string& expression) {
    stack<bool> operands;
    stack<char> operators;

    for (char c : expression) {
        if (c == '&') {
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
}