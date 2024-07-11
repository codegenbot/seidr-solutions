#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                s.pop();
                return false;
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push(expression[i]);
        } else if (expression[i] != 'T' && expression[i] != 'F') {
            return false;
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}