string solveBoolean(string boolean) {
    stack<char> s;
    for (int i = 0; i < boolean.length(); i++) {
        if (boolean[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) {
                return "True";
            } else {
                s.pop();
            }
        } else if (boolean[i] == '&') {
            s.push('&');
        } else if (boolean[i] == 't' || boolean[i] == 'T') {
            while (!s.empty() && s.top() != '|') {
                s.pop();
            }
            if (s.empty()) {
                return "True";
            } else {
                s.pop();
            }
        } else if (boolean[i] == 'f' || boolean[i] == 'F') {
            while (!s.empty()) {
                s.pop();
            }
            return "False";
        }
    }
    if (s.empty()) {
        return "True";
    } else {
        return "False";
    }
}