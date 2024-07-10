#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push(c);
        } else if (c == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            s.push(c);
        } else if (c == 'T' || c == 't') {
            while (!s.empty()) {
                s.pop();
            }
            return true;
        } else if (c == 'F' || c == 'f') {
            while (!s.empty()) {
                s.pop();
            }
            return false;
        } else {
            s.push(c);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return false;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False") << endl;
    return 0;
}