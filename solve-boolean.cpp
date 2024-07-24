#include <string>

bool solveBoolean(string expression) {
    stack<char> s;
    bool prev = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && ((char)s.top()) == '|') {
                s.pop();
            }
            if (s.empty()) {
                return prev;
            }
        } else if (expression[i] == '|') {
            while (!s.empty() && ((char)s.top()) == '&') {
                s.pop();
            }
            if (s.empty()) {
                return !prev;
            }
        } else if (expression[i] == 't' || expression[i] == 'f') {
            char c = expression[i];
            prev = c == 't';
            while (!s.empty()) {
                s.pop();
            }
            s.push(c);
        }
    }
    return prev;
}