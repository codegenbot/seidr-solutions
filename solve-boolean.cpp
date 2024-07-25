bool solveBoolean(string s) {
    stack<char> ops;
    bool value = false;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 't') {
            value = true;
        } else if (s[i] == 'f') {
            value = false;
        } else if (s[i] == '&') {
            while (!ops.empty() && ops.top() == '|') {
                ops.pop();
            }
            ops.push('&');
        } else if (s[i] == '|') {
            while (!ops.empty()) {
                if (ops.top() == '&') {
                    ops.pop();
                    break;
                }
            }
            ops.push('|');
        }
    }

    return value;
}