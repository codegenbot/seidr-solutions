bool solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '&') {
            bool b1 = st.top() == 'T';
            st.pop();
            bool b2 = st.top() == 'T';
            st.pop();
            st.push((b1 && b2) ? 'T' : 'F');
        } else if (c == '|') {
            bool b1 = st.top() == 'T';
            st.pop();
            bool b2 = st.top() == 'T';
            st.pop();
            st.push((b1 || b2) ? 'T' : 'F');
        } else {
            st.push(c);
        }
    }
    return st.top() == 'T';
}