#include <string>
using namespace std;

bool solveBoolean(string expression) {
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            if (i > 0 && (expression[i - 1] == '&' || expression[i - 1] == '(')) {
                continue;
            }
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == '&') {
            s.push('&');
        } else if (expression[i] == 'T') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == 'F') {
            while (!s.empty()) {
                s.pop();
            }
            return false;
        } else if (expression[i] == '(') {
            s.push('(');
        } else if (expression[i] == ')') {
            while (s.top() != '(') {
                s.pop();
            }
            s.pop();
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return false;
}