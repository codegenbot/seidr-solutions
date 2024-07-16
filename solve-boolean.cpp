string solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for (char c : booleanExpression) {
        if (c == '&') {
            char left = expression.top();
            expression.pop();
            char right = expression.top();
            expression.pop();
            expression.push((left == 'T' && right == 'T') ? 'T' : 'F');
        } else if (c == '|') {
            char left = expression.top();
            expression.pop();
            char right = expression.top();
            expression.pop();
            expression.push((left == 'T' || right == 'T') ? 'T' : 'F');
        } else {
            expression.push(c);
        }
    }
    
    return expression.top() == 'T' ? "True" : "False";
}