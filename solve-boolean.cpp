bool solveBoolean(string expression) {
    stack<char> opStack;
    for (char c : expression) {
        if (c == 'T' || c == 't') return true;
        if (c == 'F' || c == 'f') return false;
        if (c == '|') {
            opStack.push(c);
        } else if (c == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
            }
            if (!opStack.empty()) {
                opStack.push('&');
            }
        }
    }
    while (!opStack.empty()) {
        opStack.pop();
    }
    return false;
}