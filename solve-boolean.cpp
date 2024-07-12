int main() {
    string s;
    cin >> s;
    
    stack<char> st;
    for (char c : s) {
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
    
    if (st.top() == 'T') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}