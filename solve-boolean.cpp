bool solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '&') {
            char left = st.top(); st.pop();
            char right = st.top(); st.pop();
            st.push((left == 'T' && right == 'T') ? 'T' : 'F');
        } else if (c == '|') {
            char left = st.top(); st.pop();
            char right = st.top(); st.pop();
            st.push((left == 'T' || right == 'T') ? 'T' : 'F');
        } else {
            st.push(c);
        }
    }
    return st.top() == 'T';
}