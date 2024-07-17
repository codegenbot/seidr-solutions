Here is the solution:

string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (!s.empty()) {
                s.push('&');
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            s.push(expression[i]);
        }
    }
    string result = "";
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    return result;
}