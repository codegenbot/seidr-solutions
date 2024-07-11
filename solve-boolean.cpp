```
string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else {
            s.push(expression[i]);
        }
    }
    string result;
    while (!s.empty()) {
        result = ((s.top() == 'T') ? "True" : "False") + (result.empty() ? "" : " ");
        s.pop();
    }
    return result;
}