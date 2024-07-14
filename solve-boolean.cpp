string solveBoolean(string expression) {
    stack<char> s;
    string result = "True";
    
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
            if (s.empty()) {
                result = "True";
            } else {
                if (s.top() == '&') {
                    result = "False";
                } else {
                    result = "True";
                }
            }
            if (expression[i] == 'T' || expression[i] == 't') {
                s.push('T');
            } else if (expression[i] == 'F' || expression[i] == 'f') {
                s.push('F');
            }
        }
    }
    
    while (!s.empty()) {
        s.pop();
    }
    
    return result;
}