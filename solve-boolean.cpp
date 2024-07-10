bool solveBoolean(string expr) {
    stack<char> s;
    for (int i = 0; i < expr.size(); i++) {
        if (expr[i] == '|') {
            bool b1 = s.top() == 'T';
            s.pop();
            bool b2 = s.top() == 'T';
            s.pop();
            s.push(b1 || b2 ? 'T' : 'F');
        } else if (expr[i] == '&') {
            bool b1 = s.top() == 'T';
            s.pop();
            bool b2 = s.top() == 'T';
            s.pop();
            s.push(b1 && b2 ? 'T' : 'F');
        } else {
            s.push(expr[i]);
        }
    }
    return s.top() == 'T';
}