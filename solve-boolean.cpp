string solveBoolean(string booleanExp) {
    stack<char> operationStack;
    stack<bool> valueStack;

    for (char c : booleanExp) {
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

    return valueStack.top() ? "True" : "False";
}