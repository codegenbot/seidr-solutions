string solveBoolean(string boolean) {
    stack<char> s;
    for (char c : boolean) {
        if (c == '&') {
            s.push('&');
        } else if (c == '|') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return "True";
            } else {
                return "False";
            }
        } else {
            s.push(c);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    if (boolean.back() == 'T') {
        return "True";
    } else {
        return "False";
    }
}