#include <string>

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
            if ((getBoolValue(s.top())) && getBoolValue(s.top())) {
                result = "True";
            } else {
                result = "False";
            }
        } else if (c == '|') {
            if (!getBoolValue(s.top()) || !getBoolValue(s.top())) {
                result = "True";
            } else {
                result = "False";
            }
        } else {
            result = std::to_string(getBoolValue(c));
        }
    }

    return result;
}

int getBoolValue(char c) {
    if (c == 'T' || c == 't')
        return 1;
    if (c == 'F' || c == 'f')
        return 0;
}