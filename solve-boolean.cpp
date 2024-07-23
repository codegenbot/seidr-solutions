bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '&') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
        } else if (c == '|') {
            while (!s.empty()) {
                s.pop();
            }
        } else {
            s.push(c);
        }
    }
    return s.top() == 'T';
}