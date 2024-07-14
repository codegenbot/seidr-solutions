bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return false;
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) return true;
            s.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            s.push(expression[i]);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return s.empty() ? false : true;
}