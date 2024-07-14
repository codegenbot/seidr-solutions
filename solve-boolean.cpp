bool solveBoolean(string expression) {
    stack<char> op;
    stack<bool> val;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            bool b1 = val.top();
            val.pop();
            bool b2 = val.top();
            val.pop();
            val.push(b1 && b2);
            op.push('&');
        } else if (expression[i] == '|') {
            bool b1 = val.top();
            val.pop();
            bool b2 = val.top();
            val.pop();
            val.push(b1 || b2);
            op.push('|');
        } else if (expression[i] == 't') {
            val.push(true);
        } else if (expression[i] == 'f') {
            val.push(false);
        }
    }

    return val.top();
}