#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            } else {
                while (!s.empty() && s.top() == '&') {
                    s.pop();
                }
                if (s.empty()) {
                    return false;
                }
            }
        } else if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
        } else {
            s.push(expression[i]);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    string result = "";
    while (!s.empty()) {
        result += s.top() == '&' ? 'F' : 'T';
        s.pop();
    }
    return (result[0] == 'F') ? true : false;
}