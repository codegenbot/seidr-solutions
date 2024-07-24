string solveBoolean(string booleanExpression) {
    stack<char> operators;
    stack<string> operands;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
                string op2 = operands.top();
                operands.pop();
                string op1 = operands.top();
                operands.pop();
                operands.push(string("F").append(op1).append("&").append(op2));
            }
            operators.push('&');
        } else if (booleanExpression[i] == '|') {
            while (!operators.empty() && operators.top() == '&') {
                operators.pop();
                string op2 = operands.top();
                operands.pop();
                string op1 = operands.top();
                operands.pop();
                operands.push(string("F").append(op1).append("|").append(op2));
            }
            operators.push('|');
        } else if (booleanExpression[i] == 'T' || booleanExpression[i] == 'F') {
            string operand = (booleanExpression[i] == 'T') ? "True" : "False";
            while (!operators.empty()) {
                string op = operands.top();
                operands.pop();
                operands.push(string(operand).append(op));
            }
            operands.push(operand);
        }
    }

    return operands.top();
}