bool evaluateBoolean(string expr) {
    stack<char> stk;
    for (char c : expr) {
        if (c == 't' || c == 'f') {
            stk.push(c);
        } else if (c == '&') {
            char op1 = stk.top(); stk.pop();
            char op2 = stk.top(); stk.pop();
            stk.push((op1 == 't' && op2 == 't') ? 't' : 'f');
        } else if (c == '|') {
            char op1 = stk.top(); stk.pop();
            char op2 = stk.top(); stk.pop();
            stk.push((op1 == 't' || op2 == 't') ? 't' : 'f');
        }
    }
    return stk.top() == 't';
}