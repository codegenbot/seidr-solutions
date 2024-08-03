bool solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    bool currentResult = (booleanExpression[0] == 't');
    
    for(int i=1; i<booleanExpression.size(); i++) {
        if(booleanExpression[i] == '&') {
            while(!operationStack.empty() && operationStack.top() == '&') {
                operationStack.pop();
            }
            if(operationStack.empty()) {
                currentResult &= (booleanExpression[i-1] == 't');
            } else {
                currentResult = false;
            }
        } else if(booleanExpression[i] == '|') {
            while(!operationStack.empty() && operationStack.top() == '|') {
                operationStack.pop();
            }
            if(operationStack.empty()) {
                currentResult |= (booleanExpression[i-1] == 't');
            } else {
                currentResult = false;
            }
        } else {
            operationStack.push(booleanExpression[i]);
        }
    }
    
    return currentResult;
}