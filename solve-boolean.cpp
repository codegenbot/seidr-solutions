```cpp
#include <queue>
#include <string>

bool getBoolValue(char c) {
    if (c == 'T')
        return true;
    else if (c == 'F')
        return false;
    return false; // default to false for other characters
}

std::string solveBoolean(std::string expression) {
    std::queue<char> q;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!q.empty() && q.front() == '&') {
                q.pop();
            }
            q.push('&');
        } else if (expression[i] == '|') {
            while (!q.empty()) {
                q.pop();
            }
            q.push('|');
        } else {
            q.push(expression[i]);
        }
    }

    std::string result = "";
    bool left = false, right = false;
    while (!q.empty()) {
        char c = q.front();
        q.pop();
        if (c == '&') {
            result = (getBoolValue(q.front()) && getBoolValue(q.front())) ? "True" : "False";
        } else if (c == '|') {
            result = (getBoolValue(q.front()) || getBoolValue(q.front())) ? "True" : "False";
        } else {
            result = getBoolValue(c) ? "True" : "False";
        }
    }

    return result;
}