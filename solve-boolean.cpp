bool solveBoolean(string expression) {
    stack<char> ops;
    stack<bool> values;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            bool v1 = values.top();
            values.pop();
            bool v2 = values.top();
            values.pop();
            values.push(v1 && v2);
            ops.push('&');
        } else if (expression[i] == '|') {
            bool v1 = values.top();
            values.pop();
            bool v2 = values.top();
            values.pop();
            values.push(v1 || v2);
            ops.push('|');
        } else if (expression[i] == 'T') {
            values.push(true);
        } else if (expression[i] == 'F') {
            values.push(false);
        }
    }

    return values.top();
}