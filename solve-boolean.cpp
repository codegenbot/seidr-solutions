bool solveBoolean(string booleanExpression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|' || booleanExpression[i] == '&') {
            string rightOperand = operandStack.top();
            operandStack.pop();
            string leftOperand = operandStack.top();
            operandStack.pop();

            if (booleanExpression[i] == '|') {
                operandStack.push((leftOperand == "T" || rightOperand == "T") ? "T" : "F");
            } else if (booleanExpression[i] == '&') {
                operandStack.push((leftOperand == "T" && rightOperand == "T") ? "T" : "F");
            }
        } else if (booleanExpression[i] != ' ') {
            string operand;
            while (i < booleanExpression.length() && booleanExpression[i] != ' ' && booleanExpression[i] != '|' && booleanExpression[i] != '&') {
                operand += booleanExpression[i];
                i++;
            }
            i--;
            operandStack.push(operand);
        }
    }

    return (operandStack.top() == "T");
}