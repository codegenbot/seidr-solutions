string solveBoolean(string expression) {
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            if (i + 1 < expression.length() && expression[i + 1] == '&') {
                i++;
            } else {
                if (expression[i-1] == '&') {
                    expression[i] = '&';
                } else {
                    expression[i] = '|';
                }
            }
        }
    }
    stack<char> s;
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
            s.push(expression[i]);
        }
    }
    string result;
    while (!s.empty()) {
        if (s.top() == '&') {
            result = (result + " & ").substr(2);
        } else {
            result = (result + ((char)(s.top()))).substr(0, 3) + ((s.top() == 'T') ? "True" : "False");
        }
        s.pop();
    }
    return result;
}