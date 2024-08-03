string solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for(int i = 0; i < booleanExpression.size(); i++) {
        if(booleanExpression[i] == '&') {
            while(!expression.empty() && expression.top() == '&') {
                expression.pop();
            }
            expression.push('&');
        } else if (booleanExpression[i] == '|') {
            while(!expression.empty()) {
                expression.pop();
            }
            expression.push('|');
        } else {
            expression.push(booleanExpression[i]);
        }
    }
    
    string result = "";
    while(!expression.empty()) {
        result += expression.top();
        expression.pop();
    }
    
    return (result == "T") ? "True" : (result == "F") ? "False" : "";
}