int main() {
    string expr;
    cin >> expr;
    
    stack<char> stk;
    for (char c : expr) {
        if (c == '|') {
            char op2 = stk.top(); stk.pop();
            char op1 = stk.top(); stk.pop();
            if (op1 == 'T' || op2 == 'T') {
                stk.push('T');
            } else {
                stk.push('F');
            }
        } else if (c == '&') {
            char op2 = stk.top(); stk.pop();
            char op1 = stk.top(); stk.pop();
            if (op1 == 'T' && op2 == 'T') {
                stk.push('T');
            } else {
                stk.push('F');
            }
        } else {
            stk.push(c);
        }
    }
    
    cout << (stk.top() == 'T' ? "True" : "False") << endl;
    
    return 0;
}