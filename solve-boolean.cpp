bool solveBoolean(std::string expression) {
    std::stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (!s.empty() && s.top() == '&') {
            if (expression[i] == '|') {
                while (!s.empty()) {
                    s.pop();
                }
                return true;
            } else if (expression[i] == 'T') {
                s.pop();
                continue;
            } else if (expression[i] == 'F') {
                return false;
            }
        }
        if (expression[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == '&') {
            s.push('&');
        } else if (expression[i] == 'T') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == 'F') {
            while (!s.empty()) {
                s.pop();
            }
            return false;
        }
    }
    return !s.empty();
}