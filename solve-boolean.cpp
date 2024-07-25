bool solveBoolean(string expression) {
    stack<char> s;
    for (char c : expression) {
        if (c == '&') {
            bool left = s.top() == 'T';
            s.pop();
            bool right = s.top() == 'T';
            s.pop();
            s.push(left && right ? 'T' : 'F');
        } else if (c == '|') {
            bool left = s.top() == 'T';
            s.pop();
            bool right = s.top() == 'T';
            s.pop();
            s.push(left || right ? 'T' : 'F');
        } else {
            s.push(c == 't' || c == 'T' ? 'T' : 'F');
        }
    }
    return s.top() == 'T';
}