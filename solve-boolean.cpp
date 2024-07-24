#include <string>

bool solveBoolean(string expression) {
    stack<char> s;
    bool last = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && ((char)s.top()) == '|') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            } else if (((char)s.top()) == 'f' && last) {
                s.pop();
                if (s.empty()) {
                    return false;
                }
            }
            last = ((char)s.top()) == 't';
        } else if (expression[i] == '|') {
            while (!s.empty() && ((char)s.top()) == '&') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            } else if (((char)s.top()) == 'f' && !last) {
                s.pop();
                if (s.empty()) {
                    return false;
                }
            }
            last = ((char)s.top()) == 't';
        } else if (expression[i] == 't') {
            char c = 't';
            while (!s.empty() && ((char)s.top()) != 'f') {
                s.pop();
            }
            s.push(c);
        } else if (expression[i] == 'f') {
            char c = 'f';
            while (!s.empty() && ((char)s.top()) != 't') {
                s.pop();
            }
            s.push(c);
        }
    }
    return ((char)s.top()) == 't';
}