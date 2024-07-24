bool solveBoolean(string boolExp) {
    stack<char> ops;
    stack<bool> values;

    for (int i = 0; i < boolExp.length(); i++) {
        if (boolExp[i] == '&') {
            while (!ops.empty() && ops.top() == '|') {
                ops.pop();
                values.pop();
            }
            if (!values.empty()) {
                values.push(values.top() && values.pop());
            } else {
                values.push(false);
            }
        } else if (boolExp[i] == '|') {
            while (!ops.empty()) {
                ops.pop();
                values.pop();
            }
            if (!values.empty()) {
                values.push(values.top() || values.pop());
            } else {
                values.push(false);
            }
        } else if (boolExp[i] == 'T' || boolExp[i] == 't') {
            values.push(true);
        } else if (boolExp[i] == 'F' || boolExp[i] == 'f') {
            values.push(false);
        }
    }

    return values.top();
}