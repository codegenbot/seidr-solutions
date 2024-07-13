string solveBoolean(string booleanExpression) {
    stack<char> operationStack;
    bool result = (booleanExpression[0] == 'T');

    for(int i = 1; i < booleanExpression.length(); i++) {
        if(booleanExpression[i] == '&') {
            while(operationStack.size() > 1 && operationStack.top() == '|') {
                operationStack.pop();
            }
        } else if (booleanExpression[i] == '|') {
            operationStack.push('|');
        }

        if(bool(result)) result &= (booleanExpression[i] == 'T');
        else result |= (booleanExpression[i] == 'T');
    }

    return result ? "True" : "False";
}