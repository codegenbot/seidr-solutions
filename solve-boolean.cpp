bool solveBoolean(std::string expression) {
    std::stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == '&') {
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
        else if ((expression[i] == '|' || expression[i] == '&' || expression[i] == 'T' || expression[i] == 'F') && i == 0) {
            return false; // Return false when '|', '&', 'T', or 'F' appear at the beginning of the string.
        }
    }
    if (s.empty()) return true;
    return false;
}