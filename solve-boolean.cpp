bool solveBoolean(string expression) {
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
    
    bool result = false;
    
    while (!s.empty()) {
        char c = s.top(); s.pop();
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '&') {
            result = !result;
        } else if (c == '|') {
            result = result;
        }
    }
    
    return result;
}