#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == '&') {
            s.push('&');
        } else if (expression[i] == 't') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return true;
            else return false;
        } else if (expression[i] == 'f') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return false;
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return true;
}