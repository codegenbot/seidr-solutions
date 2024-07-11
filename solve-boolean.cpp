```
#include <string>
#include <stack>
#include <cctype>

std::string solveBoolean(std::string expression) {
    std::stack<char> s;
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
        } else {
            s.push(expression[i]);
        }
    }

    std::string result = "";
    bool left = false, right = false;
    while (!s.empty()) {
        char c = s.top();
        s.pop();
        if (c == '&') {
            left = getBoolValue(s.top());
            s.pop();
            right = getBoolValue(s.top());
            s.pop();
            result = (left && right) ? "True" : "False";
        } else if (c == '|') {
            left = getBoolValue(s.top());
            s.pop();
            right = true;
            result = (left || right) ? "True" : "False";
        } else {
            result = (getBoolValue(c)) ? "True" : "False";
        }
    }

    return result;
}

bool getBoolValue(char c) {
    if (c == 'T') return true;
    if (c == 'F') return false;
    return false; // default to false
}