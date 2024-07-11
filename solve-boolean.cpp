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
        } else if (c == '&' || c == '|') {
            operators.push(c);
        } else {
            bool operand1 = operands.top();
            operands.pop();
            bool operand2 = operands.top();
            operands.pop();
            char op = operators.top();
            operators.pop();

            if (op == '&') {
                operands.push(operand1 && operand2);
            } else if (op == '|') {
                operands.push(operand1 || operand2);
            }
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