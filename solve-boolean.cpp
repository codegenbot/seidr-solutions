#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<string> expressionStack;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            expressionStack.push("&");
        } else if (expression[i] == '|') {
            while (!expressionStack.empty() && expressionStack.top() == "&") {
                expressionStack.pop();
            }
        } else {
            if(expression[i] == 'T' || expression[i] == 'F')
                expressionStack.push(string(1, expression[i]));
        }
    }

    bool result = true;
    while (!expressionStack.empty()) {
        string op = expressionStack.top();
        expressionStack.pop();
        if (op == "&") {
            result &= (expressionStack.top() == "T");
            expressionStack.pop();
        } else if (op == "|") {
            if (expressionStack.size() > 1) {
                result |= (expressionStack.top() == "T");
                expressionStack.pop();
            }
        } else {
            result = op == "T";
        }
    }

    return !result;
}