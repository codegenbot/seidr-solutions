bool solveBoolean(string expression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (char c : expression) {
        if (c == 'T' || c == 'F') {
            operandStack.push(c == 'T');
        } else if (c == '&') {
            bool right = operandStack.top();
            operandStack.pop();
            bool left = operandStack.top();
            operandStack.pop();
            operatorStack.push(left && right);
        } else if (c == '|') {
            bool right = operandStack.top();
            operandStack.pop();
            bool left = operandStack.top();
            operandStack.pop();
            operatorStack.push(left || right);
        }
    }

    return operandStack.top();
}