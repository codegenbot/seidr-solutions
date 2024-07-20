Here is the solution:

string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty()) s.pop();
        } else if (expression[i] == '|') {
            while (!s.empty()) s.pop();
            s.push('|');
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T' ? "True" : "False";
}