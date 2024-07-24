string solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    stack<string> expressionStack;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            expressionStack.push(operationStack.pop() + "&");
            operationStack.push('&');
        } else if (booleanExpression[i] == '|') {
            expressionStack.push(operationStack.pop() + "|");
            operationStack.push('|');
        } else {
            string currentExpression = "";
            while (!operationStack.empty() && precedence(operationStack.top()) >= precedence(booleanExpression[i])) {
                currentExpression += operationStack.pop();
            }
            if (!expressionStack.empty()) {
                expressionStack.top() += currentExpression;
                operationStack.push(')');
            } else {
                expressionStack.push(currentExpression);
            }
            if (booleanExpression[i] == 'T') {
                expressionStack.push("True");
            } else {
                expressionStack.push("False");
            }
        }
    }

    string finalExpression = "";
    while (!expressionStack.empty()) {
        finalExpression = expressionStack.top() + finalExpression;
        expressionStack.pop();
    }

    if (finalExpression.length() > 1) {
        return "Invalid Boolean Expression";
    } else {
        return finalExpression;
    }
}

int precedence(char operation) {
    if (operation == '|') {
        return 1;
    } else {
        return 2;
    }
}