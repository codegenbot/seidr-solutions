string solveBoolean(string expression) {
    stack<char> ops;
    stack<string> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            string right = values.top();
            values.pop();
            string left = values.top();
            values.pop();
            values.push(left + "&" + right);
        } else if (expression[i] == '|') {
            string right = values.top();
            values.pop();
            string left = values.top();
            values.pop();
            values.push(left + "|" + right);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            values.push(expression.substr(i, 1));
        }
    }

    return values.top() == "T" ? "True" : "False";
}