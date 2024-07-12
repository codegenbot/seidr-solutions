int evaluateBooleanExpression(const string& expression) {
    stack<char> st;
    for (char c : expression) {
        if (c == 'T' || c == 'F') {
            st.push(c);
        } else if (c == '&') {
            char op1 = st.top(); st.pop();
            char op2 = st.top(); st.pop();
            if (op1 == 'T' && op2 == 'T') st.push('T');
            else st.push('F');
        } else if (c == '|') {
            char op1 = st.top(); st.pop();
            char op2 = st.top(); st.pop();
            if (op1 == 'T' || op2 == 'T') st.push('T');
            else st.push('F');
        }
    }
    return st.top() == 'T' ? true : false;
}

int main() {
    string expression;
    cin >> expression;
    int result = evaluateBooleanExpression(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}