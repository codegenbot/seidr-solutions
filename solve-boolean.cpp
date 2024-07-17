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
            s.pop();
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            }
            s.pop();
        } else if (expression[i] == 'T' || expression[i] == 't') {
            s.push('T');
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            s.push('F');
        }
    }
    return s.top() == 'T';
}