bool solveBoolean(string boolean) {
    stack<char> s;
    for (int i = 0; i < boolean.length(); i++) {
        if (boolean[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                s.pop();
                return false;
            } else if (!s.empty()) {
                s.pop();
                return true;
            } else {
                return false;
            }
        } else if (boolean[i] != '&' && boolean[i] != '|') {
            s.push(boolean[i]);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return s.empty();
}