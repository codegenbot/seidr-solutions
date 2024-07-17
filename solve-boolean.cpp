#include <stack>
#include <string>
#include <algorithm>

using namespace std;

bool solveBoolean(string expression) {
    stack<string> stack;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            stack.push("&");
        } else if (expression[i] == '|') {
            while (!stack.empty() && stack.top() == "&") {
                stack.pop();
            }
        } else {
            if(expression[i] == 'T' || expression[i] == 'F')
                stack.push(to_string(expression[i]));
        }
    }

    bool result = true;
    while (!stack.empty()) {
        string op = stack.top();
        stack.pop();
        if (op == "&") {
            result &= (stack.top() == "T") ? true : false;
            stack.pop();
        } else if (op == "|") {
            if (stack.empty() > 1) {
                result |= (stack.top() == "T") ? true : false;
                stack.pop();
            }
        } else {
            result = op == "T" ? true : false;
        }
    }

    return !result;
}