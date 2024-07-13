bool solveBoolean(string boolean) {
    stack<char> operation;
    stack<bool> value;

    for (int i = 0; i < boolean.length(); i++) {
        if (boolean[i] == '&') {
            bool b = value.top();
            value.pop();
            bool a = value.top();
            value.pop();
            value.push(a & b);
        } else if (boolean[i] == '|') {
            bool b = value.top();
            value.pop();
            bool a = value.top();
            value.pop();
            value.push(a | b);
        } else if (boolean[i] == 't' || boolean[i] == 'T') {
            value.push(true);
        } else if (boolean[i] == 'f' || boolean[i] == 'F') {
            value.push(false);
        }
    }

    return value.top();
}