#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                s.pop();
                return false;
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
        } else if (expression[i] == 't') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            } else {
                return false;
            }
        } else if (expression[i] == 'f') {
            while (!s.empty()) {
                s.pop();
            }
            if (s.empty()) {
                return false;
            } else {
                return true;
            }
        }
    }
    return true;
}