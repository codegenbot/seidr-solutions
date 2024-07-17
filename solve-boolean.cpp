#include <stack>
using namespace std;

bool solveBoolean(string expression) {
    stack<string> std::stack;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            stack.push("&");
        } else if (expression[i] == '|') {
            while (!stack.empty() && stack.top() == "&") {
                stack.pop();
            }
        } else {
            stack.push(string(1, expression[i]));
        }
    }

    bool result = true;
    while (!stack.empty()) {
        string op = stack.top();
        stack.pop();
        if (op == "&") {
            result &= (stack.top() == "T");
            stack.pop();
        } else if (op == "|") {
            if (stack.size() > 1) {
                result |= (stack.top() == "T");
                stack.pop();
            }
        } else {
            result = op == "T";
        }
    }

    return !result;
}