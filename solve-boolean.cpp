bool solveBoolean(string s) {
    stack<char> ops;
    stack<bool> vals;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 't') {
            vals.push(true);
        } else if (s[i] == 'F' || s[i] == 'f') {
            vals.push(false);
        } else if (s[i] == '&') {
            while (!vals.empty() && !ops.empty()) {
                bool b1 = vals.top();
                vals.pop();
                bool b2 = vals.top();
                vals.pop();
                ops.push((b1 && b2) ? '&' : '|');
            }
        } else if (s[i] == '|') {
            while (!vals.empty() || !ops.empty()) {
                if (ops.empty()) break;
                bool b1 = vals.top();
                vals.pop();
                bool b2 = vals.top();
                vals.pop();
                ops.push((b1 || b2) ? '&' : '|');
            }
        }
    }

    return vals.top();
}