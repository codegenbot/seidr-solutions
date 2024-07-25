string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty()) {
                s.push('&');
            } else {
                s.push(expression[i]);
            }
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (!s.empty()) {
                s.push('|');
            } else {
                s.push(expression[i]);
            }
        } else {
            s.push(expression[i]);
        }
    }
    string result = "";
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    return (result == "T") ? "True" : (result == "F") ? "False" : "Invalid Expression";
}