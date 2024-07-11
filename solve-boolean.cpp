#include <string>
#include <stack>

bool getBoolValue(char c) {
    return c == 'T';
}

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
    while (!s.empty()) {
        char c = s.top();
        s.pop();
        if (c == '&') {
            bool left = getBoolValue('T');
            bool right = getBoolValue(s.top());
            s.pop();
            result = (left && right) ? "True" : "False";
        } else if (c == '|') {
            left = getBoolValue('T');
            right = getBoolValue(s.top());
            s.pop();
            result = (left || right) ? "True" : "False";
        } else {
            result = (getBoolValue(c)) ? "True" : "False";
        }
    }

    return result;
}