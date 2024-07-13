Here is the solution:

string solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    stack<bool> valueStack;

    for (char c : booleanExpression) {
        if (c == 'T' || c == 't') {
            valueStack.push(true);
        } else if (c == 'F' || c == 'f') {
            valueStack.push(false);
        } else if (c == '|') {
            bool b = valueStack.top();
            valueStack.pop();
            bool a = valueStack.top();
            valueStack.pop();
            valueStack.push(b || a);
        } else if (c == '&') {
            bool b = valueStack.top();
            valueStack.pop();
            bool a = valueStack.top();
            valueStack.pop();
            valueStack.push(a && b);
        }
    }

    return (valueStack.top()) ? "True" : "False";
}