string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                if (s.top() == 'T') s.pop(), s.push('F');
                else if (s.top() == 'F') s.pop();
                else break;
            }
            s.push('|');
        } 
        else if (expression[i] == '&') {
            while (!s.empty() && s.top() != '|') {
                if (s.top() == 'T' && !s.empty() && s.top() == 'F') {
                    s.pop();
                    s.pop();
                    break;
                }
                if (s.top() == 'F' || s.top() == 'T')
                    s.pop();
            } 
            s.push('&');
        } else {
            s.push(expression[i]);
        }
    }

    string result;
    while (!s.empty()) {
        if (s.top() == '|') {
            if (!s.empty() && s.top() == '&') {
                if (!s.empty() && s.top() == 'F' || !s.empty() && s.top() == 'T')
                    s.pop();
                else if (!s.empty() && s.top() == 'F') s.pop(), s.push('T');
                else if (!s.empty() && s.top() == 'T') s.pop(), s.push('F');
            } 
        }
        result = ((s.top() == 'T') ? "True" : "False") + (result.empty() ? "" : " ");
        s.pop();
    }

    return result;
}