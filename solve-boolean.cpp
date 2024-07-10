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
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else if (expression[i] != '&' && expression[i] != '|') {
            s.push(expression[i]);
        }
    }

    bool result = false;
    while (!s.empty()) {
        char c = s.top();
        s.pop();
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            return false;
        }
    }

    return result;
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