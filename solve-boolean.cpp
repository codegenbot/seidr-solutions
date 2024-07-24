#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            while (!s.empty()) {
                s.pop();
            }
            return expression[i] == 'T';
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return false;
}