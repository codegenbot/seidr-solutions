bool solveBoolean(string expression) {
    stack<char> operationStack;
    stack<bool> valueStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operationStack.empty() && operationStack.top() == '|') {
                operationStack.pop();
                valueStack.pop();
            }
            if (!operationStack.empty()) {
                operationStack.push('&');
            }
        } else if (expression[i] == '|') {
            operationStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valueStack.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valueStack.push(false);
        }
    }

    while (!operationStack.empty()) {
        operationStack.pop();
    }

    return valueStack.top();
}