#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string booleanExp) {
    stack<char> s;
    for (int i = 0; i < booleanExp.length(); i++) {
        if (booleanExp[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (booleanExp[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else {
            s.push(booleanExp[i]);
        }
    }
    
    bool result = false;
    while (!s.empty()) {
        char c = s.top();
        s.pop();
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '&') {
            result = !result;
        } else if (c == '|') {
            result = true;
        }
    }
    
    return result;
}