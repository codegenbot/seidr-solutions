bool solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|') {
            while (!expression.empty() && expression.top() != '&') {
                expression.pop();
            }
            if (expression.empty()) {
                return true;
            } else {
                expression.pop();
                return false;
            }
        } else if (booleanExpression[i] == '&') {
            expression.push('&');
        } else {
            expression.push(booleanExpression[i]);
        }
    }
    
    while (!expression.empty() && expression.top() != '|') {
        expression.pop();
    }
    
    if (expression.empty()) {
        return true;
    } else {
        return false;
    }
}