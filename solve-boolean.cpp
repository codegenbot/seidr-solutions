bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                s.pop();
                return false;
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
        } else {
            s.push(expression[i]);
        }
    }
    return s.size() > 0 && s.top() == 'T';
}