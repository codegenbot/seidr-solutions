int evaluateBooleanExpression(const string& expr) {
    stack<char> st;
    for (char c : expr) {
        if (c == '|') {
            char op1 = st.top(); st.pop();
            char op2 = st.top(); st.pop();
            st.push((op1 == 'T' || op2 == 'T') ? 'T' : 'F');
        } else if (c == '&') {
            char op1 = st.top(); st.pop();
            char op2 = st.top(); st.pop();
            st.push((op1 == 'T' && op2 == 'T') ? 'T' : 'F');
        } else {
            st.push(c);
        }
    }
    return st.top() == 'T' ? 1 : 0;
}

int main() {
    string expr;
    cin >> expr;
    int result = evaluateBooleanExpression(expr);
    cout << (result ? "True" : "False") << endl;
    return 0;
}