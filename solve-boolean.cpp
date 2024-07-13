#include <stack>
#include <string>

bool solveBoolean(string expression) {
    stack<char> s;
    
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                s.pop();
                return false;
            } else if (!s.empty()) {
                s.pop();
                return true;
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
        } else {
            s.push(expression[i]);
        }
    }
    
    if (s.size() > 0) {
        return s.top() == 'T';
    } else {
        return false;
    }
}