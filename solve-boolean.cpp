bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            bool a = s.top() == 'T';
            s.pop();
            bool b = s.top() == 'T';
            s.pop();
            s.push(a || b ? 'T' : 'F');
        } else if (expression[i] == '&') {
            bool a = s.top() == 'T';
            s.pop();
            bool b = s.top() == 'T';
            s.pop();
            s.push(a && b ? 'T' : 'F');
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}