bool solveBoolean(std::string expression) {
    std::stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (!s.empty() && (expression[i] == '|')) {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (!s.empty() && (expression[i] == '&')) {
            s.push('&');
        } else if (expression[i] == 'T') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == 'F') {
            while (!s.empty()) {
                s.pop();
            }
            return false;
        } 
        else if (expression[i] != '|' && expression[i] != '&' && i > 0) {
            s.push(expression[i]);
        }
    }
    if (!s.empty() && s.top() == '&') {
        return true;
    }
    return false;
}