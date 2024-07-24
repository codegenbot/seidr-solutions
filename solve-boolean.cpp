int solve_boolean(string expression) {
    stack<char> s;
    for (char c : expression) {
        if (c == '|') {
            char op1 = s.top();
            s.pop();
            char op2 = s.top();
            s.pop();
            if (op1 == 'T' || op2 == 'T') {
                s.push('T');
            } else {
                s.push('F');
            }
        } else if (c == '&') {
            char op1 = s.top();
            s.pop();
            char op2 = s.top();
            s.pop();
            if (op1 == 'T' && op2 == 'T') {
                s.push('T');
            } else {
                s.push('F');
            }
        } else {
            s.push(c);
        }
    }
    return s.top() == 'T' ? 1 : 0;
}

int main() {
    string expression;
    cin >> expression;
    int result = solve_boolean(expression);
    if (result == 1) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}