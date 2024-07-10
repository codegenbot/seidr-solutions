string solveBoolean(string boolean) {
    stack<char> s;
    for (int i = 0; i < boolean.size(); i++) {
        if (boolean[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty()) {
                s.push('&');
            }
        } else if (boolean[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (!s.empty()) {
                s.push('|');
            }
        } else {
            s.push(boolean[i]);
        }
    }
    string result = "";
    while (!s.empty()) {
        result.push_back(s.top());
        s.pop();
    }
    return (result == "T") ? "True" : (result == "F") ? "False" : "Invalid";
}