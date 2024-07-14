bool solveBoolean(string boolean) {
    stack<char> s;
    for (int i = 0; i < boolean.size(); i++) {
        if (boolean[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
            s.pop();
        } else if (boolean[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            }
            s.pop();
        } else {
            s.push(boolean[i]);
        }
    }
    return s.size() ? false : true;
}