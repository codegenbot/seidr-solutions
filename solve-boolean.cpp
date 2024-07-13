string solveBoolean(string booleanExpression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < booleanExpression.size(); i++) {
        if (booleanExpression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
                string op2 = operandStack.top();
                operandStack.pop();
                string op1 = operandStack.top();
                operandStack.pop();
                operandStack.push((op1 == "T" && op2 == "T") ? "T" : (op1 == "F" || op2 == "F") ? "F" : "T");
            }
            operatorStack.push('&');
        } else if (booleanExpression[i] == '|') {
            while (!operatorStack.empty() && operatorStack.top() == '&') {
                operatorStack.pop();
                string op2 = operandStack.top();
                operandStack.pop();
                string op1 = operandStack.top();
                operandStack.pop();
                operandStack.push((op1 == "T" && op2 == "T") ? "T" : (op1 == "F" || op2 == "F") ? "F" : "T");
            }
            operatorStack.push('|');
        } else {
            string operand = "";
            while (i < booleanExpression.size() && booleanExpression[i] != '&' && booleanExpression[i] != '|') {
                operand += booleanExpression[i];
                i++;
            }
            i--;
            if (operand == "t") {
                operand = "T";
            } else if (operand == "f") {
                operand = "F";
            }
            operandStack.push(operand);
        }
    }

    while (!operatorStack.empty()) {
        string op2 = operandStack.top();
        operandStack.pop();
        string op1 = operandStack.top();
        operandStack.pop();
        operandStack.push((op1 == "T" && op2 == "T") ? "T" : (op1 == "F" || op2 == "F") ? "F" : "T");
    }

    return operandStack.top();
}