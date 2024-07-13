int main() {
    string expr;
    cin >> expr;
    
    stack<char> st;
    for (char c : expr) {
        if (c == '|') {
            char op1 = st.top(); st.pop();
            char op2 = st.top(); st.pop();
            if (op1 == 'T' || op2 == 'T') {
                st.push('T');
            } else {
                st.push('F');
            }
        } else if (c == '&') {
            char op1 = st.top(); st.pop();
            char op2 = st.top(); st.pop();
            if (op1 == 'T' && op2 == 'T') {
                st.push('T');
            } else {
                st.push('F');
            }
        } else {
            st.push(c);
        }
    }
    
    cout << (st.top() == 'T' ? "True" : "False") << endl;
    
    return 0;
}