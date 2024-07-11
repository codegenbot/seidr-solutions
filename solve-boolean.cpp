char solve_boolean(const string& expr) {
    stack<char> stk;
    for (char c : expr) {
        if (c == 'T' || c == 'F') {
            stk.push(c);
        } else if (c == '&') {
            char op1 = stk.top(); stk.pop();
            char op2 = stk.top(); stk.pop();
            stk.push((op1 == 'T' && op2 == 'T') ? 'T' : 'F');
        } else if (c == '|') {
            char op1 = stk.top(); stk.pop();
            char op2 = stk.top(); stk.pop();
            stk.push((op1 == 'T' || op2 == 'T') ? 'T' : 'F');
        }
    }
    return stk.top();
}