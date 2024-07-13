bool solveBoolean(string expression) {
    stack<char> s;
    for (char c : expression) {
        if (c == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
        } else if (c == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
        } else {
            s.push(c);
        }
    }
    return s.top() == 'T';
}