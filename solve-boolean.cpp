int solveBoolean(string expr) {
    stack<char> st;
    for(char c : expr) {
        if (c == 't' || c == 'f') {
            st.push(c);
        } else {
            char op1 = st.top(); st.pop();
            char op2 = st.top(); st.pop();
            if (c == '|') {
                st.push((op1 == 't' || op2 == 't') ? 't' : 'f');
            } else { // c == '&'
                st.push((op1 == 't' && op2 == 't') ? 't' : 'f');
            }
        }
    }
    return st.top() == 't';
}

int main() {
    string expr;
    cin >> expr;
    int result = solveBoolean(expr);
    cout << (result ? "True" : "False") << endl;
    return 0;
}