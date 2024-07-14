bool solveBoolean(string boolExp) {
    stack<char> operationStack;
    stack<bool> operandStack;

    for (int i = 0; i < boolExp.length(); i++) {
        if (boolExp[i] == '&') {
            while (!operationStack.empty() && operationStack.top() == '|')
                operationStack.pop();
            if (!operationStack.empty())
                operationStack.push('&');
        } else if (boolExp[i] == '|') {
            while (!operationStack.empty())
                operationStack.pop();
            if (!operandStack.empty()) {
                bool right = operandStack.top(); operandStack.pop();
                if (!operationStack.empty()) {
                    char op = operationStack.top(); operationStack.pop();
                    bool left = operandStack.top(); operandStack.pop();
                    if (op == '&')
                        operandStack.push(left && right);
                    else
                        operandStack.push(left || right);
                } else
                    operandStack.push(right);
            }
        } else {
            if (boolExp[i] == 'T' || boolExp[i] == 't')
                operandStack.push(true);
            else if (boolExp[i] == 'F' || boolExp[i] == 'f')
                operandStack.push(false);
        }
    }

    return operandStack.top();
}