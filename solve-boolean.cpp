```cpp
#include <stack>
#include <string>
#include <cctype>

bool getBoolValue(char c) {
    if (c == 'T') return true;
    if (c == 'F') return false;
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
    bool left = false, right = false;
    while (!s.empty()) {
        char c = s.top();
        s.pop();
        if (c == '&') {
            left = true;
            continue;
        } else if (c == '|') {
            right = true;
            continue;
        }
        if ((left && getBoolValue(c)) || (right && !getBoolValue(c))) {
            result = "True";
            break;
        } else {
            result = "False";
            break;
        }
    }

    return result;
}