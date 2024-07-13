```cpp
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    stack<char> opStack;
    stack<bool> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                valStack.pop();
            }
            if (!opStack.empty()) opStack.push('&');
        } else if (expression[i] == '|') {
            opStack.push('|');
            valStack.push(false);
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valStack.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            while (!opStack.empty()) {
                char op = opStack.top();
                opStack.pop();
                bool rightVal = valStack.top();
                valStack.pop();
                bool leftVal = valStack.top();
                valStack.pop();

                if (op == '&') {
                    valStack.push(leftVal && rightVal);
                } else if (op == '|') {
                    valStack.push(leftVal || rightVal);
                }
            }
        }
    }

    return valStack.top();
}