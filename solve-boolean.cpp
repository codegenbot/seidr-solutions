bool solveBoolean(string expression) {
    stack<char> s;
    bool result = false;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            result = (s.top() == 'T');
            s.pop();
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            result = false;
        } else if (expression[i] == 'f' || expression[i] == 't') {
            s.push(expression[i]);
        }
    }

    return result;
}