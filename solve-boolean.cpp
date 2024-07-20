bool solveBoolean(string expression) {
    stack<char> s;
    for (char c : expression) {
        if (c == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return false;
        } else if (c == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) return true;
        } else {
            s.push(c);
        }
    }
    while (!s.empty()) {
        if (s.top() == '&') return false;
        if (s.top() == '|') return true;
        s.pop();
    }
    return false;  // Default to False
}