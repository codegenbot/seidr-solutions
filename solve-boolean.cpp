bool evalBoolExpr(string expr) {
    stack<char> stk;
    for (char c : expr) {
        if (c == 'T' || c == 'F') {
            stk.push(c);
        } else if (c == '&') {
            char operand2 = stk.top(); stk.pop();
            char operand1 = stk.top(); stk.pop();
            if (operand1 == 'T' && operand2 == 'T') {
                stk.push('T');
            } else {
                stk.push('F');
            }
        } else if (c == '|') {
            char operand2 = stk.top(); stk.pop();
            char operand1 = stk.top(); stk.pop();
            if (operand1 == 'T' || operand2 == 'T') {
                stk.push('T');
            } else {
                stk.push('F');
            }
        }
    }
    return (stk.top() == 'T');
}

int main() {
    string expr;
    cin >> expr;
    cout << (evalBoolExpr(expr) ? "True" : "False") << endl;
    return 0;
}