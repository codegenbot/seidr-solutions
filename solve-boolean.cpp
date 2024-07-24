bool solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|') {
            while (!expression.empty() && expression.top() != '&') {
                expression.pop();
            }
            if (!expression.empty()) {
                expression.pop();
            }
        } else if (booleanExpression[i] == '&') {
            expression.push('&');
        } else if (expression.size() > 0 && expression.top() == '|') {
            expression.pop();
        } else {
            expression.push(booleanExpression[i]);
        }
    }
    
    return expression.top() == 'T';
}