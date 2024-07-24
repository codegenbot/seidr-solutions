string solveBoolean(string s) {
    stack<char> ops;
    stack<bool> values;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'T' || s[i] == 't') {
            values.push(true);
        } else if(s[i] == 'F' || s[i] == 'f') {
            values.push(false);
        } else if(s[i] == '&') {
            bool b = values.top(); values.pop();
            bool a = values.top(); values.pop();
            values.push(a && b);
        } else if(s[i] == '|') {
            bool b = values.top(); values.pop();
            bool a = values.top(); values.pop();
            values.push(a || b);
        }
    }

    return (values.top() ? "True" : "False");
}