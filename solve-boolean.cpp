#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool evaluateBooleanExpression(string input) {
    stack<bool> operands;
    stack<char> operators;

    for (char c : input) {
        if (c == 'T' || c == 'F') {
            operands.push(c == 'T');
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
            while (!operators.empty() && (operators.top() == '|' || operators.top() == '&')) {
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
        } else {
            operands.push(operand1 || operand2);
        }
    }

    return operands.top();
}

int main() {
    string input;
    cin >> input;

    if (evaluateBooleanExpression(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}