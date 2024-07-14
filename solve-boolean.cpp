string solveBoolean(string booleanExpr) {
    stack<char> expression;
    
    for (int i = 0; i < booleanExpr.length(); i++) {
        if (booleanExpr[i] == '|') {
            while (!expression.empty() && expression.top() != '&') {
                expression.pop();
            }
            if (expression.empty()) {
                return "True";
            } else {
                expression.pop();
            }
        } else if (booleanExpr[i] == '&') {
            expression.push('&');
        } else if (booleanExpr[i] == 't' || booleanExpr[i] == 'f') {
            while (!expression.empty() && expression.top() != '&') {
                expression.pop();
            }
            if (expression.empty()) {
                return booleanExpr[i] == 't' ? "True" : "False";
            } else {
                expression.pop();
            }
        }
    }
    
    if (expression.empty()) {
        return "True";
    } else {
        return "False";
    }
}