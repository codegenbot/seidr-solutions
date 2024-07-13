string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
        } else if (expression[i] == 'T' || expression[i] == 't') {
            s.push('1');
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            s.push('0');
        }
    }
    return s.top() == '1'? "True": "False";
}