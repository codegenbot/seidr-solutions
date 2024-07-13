#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    std::stack<char> opStack;
    std::stack<bool> valStack;

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
            valStack.push(false);
        }
    }

    while (!opStack.empty()) {
        char op = opStack.top();
        opStack.pop();
        bool right = valStack.top();
        valStack.pop();
        bool left = valStack.top();
        valStack.pop();
        
        if (op == '|') valStack.push(left || right);
        else valStack.push(left && right);
    }

    return valStack.top();
}