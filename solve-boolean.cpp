#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    stack<bool> operandStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            bool rightOperand = operandStack.top();
            operandStack.pop();
            bool leftOperand = operandStack.top();
            operandStack.pop();
            operandStack.push(leftOperand && rightOperand);
        } else if (expression[i] == '|') {
            bool rightOperand = operandStack.top();
            operandStack.pop();
            bool leftOperand = operandStack.top();
            operandStack.pop();
            operandStack.push(leftOperand || rightOperand);
        } else if (expression[i] == 'T' || expression[i] == 't') {
            operandStack.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            operandStack.push(false);
        }
    }

    return operandStack.top();
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}