string solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    string result = "T";
    
    for (char c : booleanExpression) {
        if (c == 'T' || c == 'F') {
            result = c + "";
        } else if (c == '&') {
            while (!operationStack.empty() && operationStack.top() == '&') {
                result += "&";
                operationStack.pop();
            }
            operationStack.push('&');
        } else if (c == '|') {
            while (!operationStack.empty() && operationStack.top() == '&') {
                result += "&";
                operationStack.pop();
            }
            operationStack.push('|');
        }
    }
    
    while (!operationStack.empty()) {
        result += operationStack.top();
        operationStack.pop();
    }
    
    return result;
}