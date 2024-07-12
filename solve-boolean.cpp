#include <string>
bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (!s.empty()) {
                return true;
            } else {
                return false;
            }
        } else if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            } else {
                return false;
            }
        } else {
            s.push(expression[i]);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return expression.back() == 'T';
}