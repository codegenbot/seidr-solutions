string solveBoolean(string booleanExpression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
                string op1 = operandStack.top();
                operandStack.pop();
                string op2 = operandStack.top();
                operandStack.pop();
                operandStack.push(to_string((op1=="T"&&op2=="T")?"T":"F"));
            }
            operatorStack.push('&');
        } else if (booleanExpression[i] == '|') {
            while (!operatorStack.empty() && operatorStack.top() != '&') {
                operatorStack.pop();
                string op1 = operandStack.top();
                operandStack.pop();
                string op2 = operandStack.top();
                operandStack.pop();
                operandStack.push(to_string((op1=="T"&&op2=="T")?"T":"F"));
            }
            operatorStack.push('|');
        } else if (booleanExpression[i] == 't' || booleanExpression[i] == 'T') {
            operandStack.push("T");
        } else if (booleanExpression[i] == 'f' || booleanExpression[i] == 'F') {
            operandStack.push("F");
        }
    }

    while (!operatorStack.empty()) {
        string op1 = operandStack.top();
        operandStack.pop();
        string op2 = operandStack.top();
        operandStack.pop();
        operandStack.push(to_string((op1=="T"&&op2=="T")?"T":"F"));
    }

    return operandStack.top();
}