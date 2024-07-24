bool solveBoolean(string input) {
    stack<char> s;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
            s.pop();
        } else if (input[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            }
            s.pop();
        } else if (input[i] != ' ') {
            s.push(input[i]);
        }
    }
    while (!s.empty()) {
        if (s.top() == '&') {
            return false;
        }
        if (s.top() == '|') {
            return true;
        }
        s.pop();
    }
    return s.size() > 0 && s.top() == 'T';
}