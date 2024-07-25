bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            }
        } else if (expression[i] != 't' && expression[i] != 'f') {
            return false;
        }
        s.push(expression[i]);
    }
    while (!s.empty()) {
        s.pop();
    }
    return false;
}