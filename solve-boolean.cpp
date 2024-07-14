#include <vector>
#include <iostream>
#include <string>

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (char c : expression) {
        if (c == 'T' || c == 'F') {
            operandStack.push(c == 'T');
        } else if (c == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
                bool rightOperand = operandStack.top(); operandStack.pop();
                bool leftOperand = operandStack.top(); operandStack.pop();
                operandStack.push(leftOperand && rightOperand);
            }
            operatorStack.push(c);
        } else if (c == '|') {
            while (!operatorStack.empty()) {
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }

    return operandStack.top();
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}