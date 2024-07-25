#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            } else if (s.top() == 'F') {
                s.pop();
                return false;
            }
        } else {
            s.push(expression[i]);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return s.empty();
}