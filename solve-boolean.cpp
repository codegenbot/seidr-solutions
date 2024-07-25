#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    stack<char> s;
    for (char c : expression) {
        if (c == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return false;
        } else if (c == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) return true;
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