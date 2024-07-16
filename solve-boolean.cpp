bool solveBoolean(string expression) {
    stack<char> ops;
    stack<bool> vals;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 'T')
            vals.push(true);
        else if (expression[i] == 'F')
            vals.push(false);

        if (i > 0 && (isymbol(expression[i]) || isop(expression[i]))) {
            bool right = vals.top();
            vals.pop();

            if (expression[i] == '|') {
                while (!ops.empty() && ops.top() == '&') {
                    right = vals.top();
                    vals.pop();
                    ops.pop();
                }
            } else if (expression[i] == '&') {
                while (!ops.empty() && isop(ops.top())) {
                    right = vals.top();
                    vals.pop();
                    ops.pop();
                }
            }

            bool left;
            if (!vals.empty()) {
                left = vals.top();
                vals.pop();
            } else
                left = right;

            if (expression[i] == '|')
                vals.push(left || right);
            else
                vals.push(left && right);

            if (isop(expression[i]))
                ops.push(expression[i]);
        }
    }

    return vals.top();
}

bool isop(char c) {
    return c == '|' || c == '&';
}