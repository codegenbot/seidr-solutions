#include <initializer_list>
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<string> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            s.push("&");
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == "&") {
                s.pop();
            }
        } else {
            if(expression[i] == 'T' || expression[i] == 'F')
                s.push(to_string(expression[i]));
        }
    }

    bool result = true;
    while (!s.empty()) {
        string op = s.top();
        s.pop();
        if (op == "&") {
            result &= (s.top() == "T") ? true : false;
            s.pop();
        } else if (op == "|") {
            if (s.size() > 1) {
                result |= (s.top() == "T") ? true : false;
                s.pop();
            }
        } else {
            result = op == "T" ? true : false;
        }
    }

    return !result;
}