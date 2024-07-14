#include <iostream>
#include <string>

bool evaluateBooleanExpression(const string &expression) {
    stack<char> operatorStack;
    for (char c : expression) {
        if (c == '&') {
            operatorStack.push(c);
        } else if (c == '|') {
            while (!operatorStack.empty() && operatorStack.top() == '&') {
                operatorStack.pop();
            }
        } else if (c == 'T' || c == 't') {
            return true;
        } else if (c == 'F' || c == 'f') {
            return false;
        }
    }
    while (!operatorStack.empty()) {
        operatorStack.pop();
    }
    return true;  // Default to True
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