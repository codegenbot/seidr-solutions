#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '|') s.pop();
            if (!s.empty()) s.pop();
            else return false;
        } else if (expression[i] == '|') {
            while (!s.empty()) s.pop();
            if (!s.empty()) s.pop();
            else return true;
        } else {
            s.push(expression[i]);
        }
    }
    if (s.size() > 1) return false;
    else if (s.size() == 0) return true;
    else return s.top() == 'T';
}