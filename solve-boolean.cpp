bool solveBoolean(string expression) {
    stack<char> ops;
    stack<bool> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T' || expression[i] == 't') {
            values.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            values.push(false);
        } else if (expression[i] == '&') {
            bool b = values.top(); values.pop();
            bool a = values.top(); values.pop();
            values.push(a && b);
        } else if (expression[i] == '|') {
            bool b = values.top(); values.pop();
            bool a = values.top(); values.pop();
            values.push(a || b);
        }
    }

    return values.top();
}