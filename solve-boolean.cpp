bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                return false;
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push(expression[i]);
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}