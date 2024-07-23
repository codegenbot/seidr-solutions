#include <stack>
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
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            s.push(expression[i]);
        }
    }

    bool result = false;
    while (!s.empty()) {
        char c = s.top();
        s.pop();
        if (c == '|') {
            result = true;
        } else if (c == '&') {
            result = false;
        } else {
            result = c == 'T';
        }
    }

    return result;
}