bool evaluateBooleanExpression(string expression) {
    stack<char> operators;
    stack<bool> values;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 'T' || expression[i] == 't') {
            values.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            values.push(false);
        } else if (expression[i] == '|') {
            operators.push('|');
        } else if (expression[i] == '&') {
            operators.push('&');
        }
    }

    bool result = values.top();
    values.pop();

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        bool right = values.top();
        values.pop();
        bool left = values.top();
        values.pop();

        if (op == '|') {
            result = left || right;
        } else {
            result = left && right;
        }
    }

    return result;
}