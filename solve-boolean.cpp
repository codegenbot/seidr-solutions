bool solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for(int i = 0; i < booleanExpression.length(); i++) {
        if(booleanExpression[i] == '&') {
            while(!expression.empty() && expression.top() == '&') {
                expression.pop();
            }
        } else if (booleanExpression[i] == '|') {
            while(!expression.empty() && expression.top() == '|') {
                expression.pop();
            }
        } else {
            expression.push(booleanExpression[i]);
        }
    }
    
    return expression.top() == 'T';
}