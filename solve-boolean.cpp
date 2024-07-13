#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    std::stack<char> s;
    bool current = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T') {
            current = true;
        } else if (expression[i] == 'F') {
            current = false;
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (current) return true;
            s.push('|');
        } else if (expression[i] == '&') {
            s.push('&');
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return current;
}

int main() {
    return 0;
}