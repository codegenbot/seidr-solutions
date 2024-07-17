bool solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    char currentOperator = '\0';
    bool lastTerm = false;

    for (char c : booleanExpression) {
        if (c == 't' || c == 'T') {
            return true;
        } else if (c == 'f' || c == 'F') {
            return false;
        } else if (c == '|') {
            while (!operationStack.empty() && operationStack.top() != '&') {
                currentOperator = operationStack.top();
                operationStack.pop();
            }
            if (!operationStack.empty()) {
                if (currentOperator == '&') {
                    lastTerm = !lastTerm;
                }
            } else {
                currentOperator = '|';
            }
        } else if (c == '&') {
            operationStack.push('&');
            currentOperator = '&';
        }
    }

    while (!operationStack.empty()) {
        if (currentOperator == '|') {
            return true;
        } else {
            lastTerm = !lastTerm;
        }
        currentOperator = operationStack.top();
        operationStack.pop();
    }

    return lastTerm;
}