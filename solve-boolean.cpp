string solveBoolean(string booleanExpression) {
    stack<char> expression;

    for (int i = 0; i < booleanExpression.length(); i++) {
        char c = booleanExpression[i];
        if (c == '&' || c == '|') {
            while (!expression.empty() && expression.top() != '(') {
                expression.pop();
            }
            if (!expression.empty() && expression.top() == '(') {
                expression.pop();
            }
        } else {
            expression.push(c);
        }
    }

    string result = "";
    while (!expression.empty()) {
        result += expression.top();
        expression.pop();
    }

    return (result == "T") ? "True" : (result == "F") ? "False" : "Error";
}