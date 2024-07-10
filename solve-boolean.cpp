bool solveBoolean(string s) {
    stack<char> ops;
    stack<bool> values;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T')
            values.push(true);
        else if (s[i] == 'F')
            values.push(false);

        if (i < s.length() - 1) {
            if (s[i] == '&' || s[i] == '|') {
                while (!ops.empty()) ops.pop();
                if (s[i] == '&') {
                    bool b = values.top(); values.pop();
                    bool a = values.top(); values.pop();
                    values.push(a && b);
                } else {
                    bool b = values.top(); values.pop();
                    bool a = values.top(); values.pop();
                    values.push(a || b);
                }
            }
        }
    }

    return values.top();
}