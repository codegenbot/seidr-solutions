bool evaluateBooleanExpression(string expression) {
    bool result = true;
    stack<char> ops;
    stack<bool> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            bool b1 = values.top();
            values.pop();
            bool b2 = values.top();
            values.pop();
            values.push(b1 && b2);
            ops.push('&');
        } else if (expression[i] == '|') {
            bool b1 = values.top();
            values.pop();
            bool b2 = values.top();
            values.pop();
            values.push(b1 || b2);
            ops.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            values.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            values.push(false);
        }
    }

    while (!values.empty()) {
        bool b1 = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();

        if (op == '|') {
            result = (result && b1) || values.top();
            values.pop();
        } else {
            result = result && b1;
        }
    }

    return result;