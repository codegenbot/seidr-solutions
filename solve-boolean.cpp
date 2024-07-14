bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
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
        } else if (expression[i] != 'T' && expression[i] != 'F') {
            if (expression[i] == '&') {
                s.push('&');
            } else if (expression[i] == '|') {
                s.push('|');
            }
        }
    }
    return !s.empty();
}