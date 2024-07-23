#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push(expression[i]);
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}