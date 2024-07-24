bool solveBoolean(string expression) {
    stack<char> operationStack;
    stack<bool> valueStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            bool b1 = valueStack.top();
            valueStack.pop();
            bool b2 = valueStack.top();
            valueStack.pop();

            valueStack.push(b1 || b2);
        } else if (expression[i] == '&') {
            bool b1 = valueStack.top();
            valueStack.pop();
            bool b2 = valueStack.top();
            valueStack.pop();

            valueStack.push(b1 && b2);
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valueStack.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valueStack.push(false);
        }
    }

    return valueStack.top();
}