bool solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    bool result = false;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!operationStack.empty() && operationStack.top() == '&') {
                operationStack.pop();
            }
            operationStack.push('&');
        } else if (booleanExpression[i] == '|') {
            while (!operationStack.empty() && operationStack.top() == '|') {
                operationStack.pop();
            }
            operationStack.push('|');
        } else if (booleanExpression[i] == 'T' || booleanExpression[i] == 't') {
            result = true;
        } else if (booleanExpression[i] == 'F' || booleanExpression[i] == 'f') {
            result = false;
        } else {
            while (!operationStack.empty()) {
                operationStack.pop();
            }
            if (result) {
                operationStack.push('&');
            } else {
                operationStack.push('|');
            }
            result = true;
        }
    }

    while (!operationStack.empty()) {
        operationStack.pop();
    }

    return result;
}