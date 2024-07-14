string solveBoolean(string booleanExpression) {
    stack<char> expression;
    for (char c : booleanExpression) {
        if (c == '&') {
            while (!expression.empty() && expression.top() == '&') {
                expression.pop();
            }
            expression.push(c);
        } else if (c == '|') {
            while (!expression.empty()) {
                expression.pop();
            }
            expression.push(c);
        } else {
            expression.push(c);
        }
    }

    string result = "";
    while (!expression.empty()) {
        char c = expression.top();
        expression.pop();
        if (c == '&') {
            result += "&";
        } else if (c == '|') {
            result += "|";
        } else {
            result += c;
        }
    }
    
    return result;
}