bool solveBoolean(string expression) {
    stack<char> s;
    bool result = false;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty()) {
                result = !s.top();
                s.pop();
            } else {
                result = false;
            }
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (!s.empty()) {
                result = s.top();
                s.pop();
            } else {
                result = false;
            }
        } else {
            s.push(expression[i] == 'T');
        }
    }

    return result;
}