std::string solveBoolean(std::string expression) {
    std::stack<char> s;
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

    std::string result = "";
    while (!s.empty()) {
        char c = s.top();
        s.pop();
        if (c == '&') {
            result = (getBoolValue(s.top()) && getBoolValue(s.top())) ? "True" : "False";
        } else if (c == '|') {
            result = (getBoolValue(s.top()) || getBoolValue(s.top())) ? "True" : "False";
        } else {
            result = std::string(1, c) == "T" ? "True" : "False";
        }
    }
    return result;
}

int getBoolValue(char c) {
    if (c == 'T') {
        return 1;
    } else {
        return 0;
    }
}