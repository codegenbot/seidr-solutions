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
        } else if (expression[i] == 'T' || expression[i] == 't') {
            while (!s.empty()) {
                s.pop();
            }
            return true;
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            while (!s.empty()) {
                s.pop();
            }
            return false;
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return true;
}