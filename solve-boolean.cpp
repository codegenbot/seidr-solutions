bool solveBoolean(string expression) {
    stack<char> operation;
    stack<bool> value;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            bool b1 = value.top();
            value.pop();
            bool b2 = value.top();
            value.pop();
            value.push(b1 && b2);
            operation.pop();
        } else if (expression[i] == '|') {
            bool b1 = value.top();
            value.pop();
            bool b2 = value.top();
            value.pop();
            value.push(b1 || b2);
            operation.pop();
        } else if (expression[i] == 'T' || expression[i] == 't') {
            value.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            value.push(false);
        }
    }

    return value.top();
}