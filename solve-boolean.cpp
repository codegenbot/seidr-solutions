#include <string>

bool solveBoolean(string expression) {
    stack<char> operatorStack;
    stack<string> valueStack;

    for (char c : expression) {
        if (c == 'T' || c == 'F') {
            valueStack.push(std::to_string(c == 'T'));
        } else if (c == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
                valueStack.push(std::to_string("False"));
            }
            operatorStack.push(c);
        } else if (c == '|') {
            operatorStack.push(c);
        }
    }

    while (!operatorStack.empty()) {
        operatorStack.pop();
    }

    return valueStack.top() == "True";
}