#include <stack>
#include <string>
#include <iostream>

bool getBoolValue(char c) {
    if (c == 'T')
        return true;
    else if (c == 'F')
        return false;
    return false; // default to false for other characters
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
            left = getBoolValue(s.top());
            s.pop();
            right = getBoolValue(s.top());
            s.pop();
            result = (left && right) ? "True" : "False";
        } else if (c == '|') {
            left = getBoolValue(s.top());
            s.pop();
            right = getBoolValue(expression[0]);
            expression.erase(0, 1);
            result = (left || right) ? "True" : "False";
        } else {
            result = (getBoolValue(c)) ? "True" : "False";
        }
    }

    return result;
}

int main(int argc, char *argv[]) {
    return solveBoolean(argv[1]);
}