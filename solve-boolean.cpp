bool solveBoolean(string expr) {
    stack<char> s;
    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                s.pop();
                return false;
            }
        } else if (expr[i] == '|') {
            while (!s.empty()) s.pop();
        } else if (expr[i] == 'f' || expr[i] == 't') {
            s.push(expr[i]);
        }
    }
    return s.top() == 't';
}