bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            } else {
                s.pop();
            }
        } else if (expression[i] == '&') {
            s.push('&');
        } else {
            s.push(expression[i]);
        }
    }
    while (!s.empty() && s.top() != '&') {
        s.pop();
    }
    return s.empty();
}