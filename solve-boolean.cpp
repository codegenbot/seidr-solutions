bool solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    stack<bool> valueStack;

    for (int i = 0; i < booleanExpression.size(); i++) {
        char c = booleanExpression[i];

        if (c == 'T' || c == 't') {
            valueStack.push(true);
        } else if (c == 'F' || c == 'f') {
            valueStack.push(false);
        } else if (c == '&') {
            bool right = valueStack.top();
            valueStack.pop();
            bool left = valueStack.top();
            valueStack.pop();

            valueStack.push(left && right);
        } else if (c == '|') {
            bool right = valueStack.top();
            valueStack.pop();
            bool left = valueStack.top();
            valueStack.pop();

            valueStack.push(left || right);
        }
    }

    return valueStack.top();
}