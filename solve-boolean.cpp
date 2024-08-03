bool solveBoolean(string expression) {
    stack<char> ops;
    stack<bool> vals;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            bool b1 = vals.top();
            vals.pop();
            bool b2 = vals.top();
            vals.pop();
            vals.push(b1 && b2);
            ops.push('&');
        } else if (expression[i] == '|') {
            bool b1 = vals.top();
            vals.pop();
            bool b2 = vals.top();
            vals.pop();
            vals.push(b1 || b2);
            ops.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            vals.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            vals.push(false);
        }
    }

    return vals.top();
}