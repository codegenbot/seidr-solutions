bool solveBoolean(std::string s) {
    std::stack<char> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return false;
            s.push('&');
        } else if (s[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) return true;
            s.push('|');
        } else {
            s.push(s[i]);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return s.empty();