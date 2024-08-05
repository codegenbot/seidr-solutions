Here is the solution:

string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) {
                return "True";
            } else {
                s.pop();
            }
        } else if (expression[i] == '&') {
            s.push('&');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            while (!s.empty() && s.top() != '|') {
                s.pop();
            }
            if (s.empty()) {
                return "True";
            } else {
                s.pop();
            }
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            while (!s.empty()) {
                s.pop();
            }
            return "False";
        }
    }
    if (s.empty()) {
        return "True";
    } else {
        return "False";
    }
}