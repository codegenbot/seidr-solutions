#include <vector>
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const string &expression) {
    stack<char> operators;
    stack<bool> operands;

    for (char c : expression) {
        if (c == 'T' || c == 't') {
            operands.push(true);
        } else if (c == 'F' || c == 'f') {
            operands.push(false);
        } else if (c == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
                bool right = operands.top(); operands.pop();
                bool left = operands.top(); operands.pop();
                operands.push(left && right);
            }
            operators.push('&');
        } else if (c == '|') {
            while (!operators.empty()) {
                operators.pop();
            }
            operators.push('|');
        }
    }

    return operands.top();
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