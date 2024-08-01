Here is the solution:

string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return "False";
            }
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return "True";
            }
            s.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            s.push('T');
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            s.push('F');
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return s.top() == 'T' ? "True" : "False";
}