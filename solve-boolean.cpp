bool solveBoolean(string expression) {
    stack<char> operators;
    stack<bool> operands;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T' || expression[i] == 't') {
            operands.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            operands.push(false);
        } else if (expression[i] == '|') {
            while (!operators.empty() && operators.top() != '&') {
                bool right = operands.top();
                operands.pop();
                bool left = operands.top();
                operands.pop();
                operands.push(left || right);
            }
            operators.push('|');
        } else if (expression[i] == '&') {
            operators.push('&');
        }
    }

    return operands.top();
}