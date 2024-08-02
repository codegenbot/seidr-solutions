#include <string>

bool solveBoolean(string booleanExp) {
    stack<char> s;
    for (int i = 0; i < booleanExp.length(); i++) {
        if (booleanExp[i] == '|') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('|');
        } else if (booleanExp[i] == '&') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('&');
        } else if (booleanExp[i] == 'T' || booleanExp[i] == 'F') {
            s.push(booleanExp[i]);
        }
    }
    
    bool result = false;
    while (!s.empty()) {
        char c = s.top();
        s.pop();
        if (c == '&') {
            result = !result;
        } else if (c == '|') {
            result = true;
        } else {
            result = (c == 'T');
        }
    }
    
    return result;
}