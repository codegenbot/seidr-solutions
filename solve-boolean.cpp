Here is the solution:

string solveBoolean(string expression) {
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
        } else if (expression[i] == 't' || expression[i] == 'f') {
            s.push(expression[i]);
        }
    }

    string result = "";
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }

    return (result == "tt") ? "True" : (result == "ff") ? "False" : "Invalid Input";
}