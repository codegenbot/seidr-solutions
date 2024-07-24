bool solveBoolean(string booleanExpression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|') {
            string rightOperand = operandStack.top();
            operandStack.pop();
            string leftOperand = operandStack.top();
            operandStack.pop();

            // Check if there are no operands
            if (operandStack.empty()) {
                return false;
            }

            operandStack.push((leftOperand == "T" || rightOperand == "T") ? "T" : "F");
        } else if (booleanExpression[i] == '&') {
            string rightOperand = operandStack.top();
            operandStack.pop();
            string leftOperand = operandStack.top();
            operandStack.pop();

            // Check if there are no operands
            if (operandStack.empty()) {
                return false;
            }

            operandStack.push((leftOperand == "T" && rightOperand == "T") ? "T" : "F");
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