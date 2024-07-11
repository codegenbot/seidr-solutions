bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            bool a = st.top() == 'T';
            st.pop();
            bool b = st.top() == 'T';
            st.pop();
            st.push(a || b ? 'T' : 'F');
        } else if (s[i] == '&') {
            bool a = st.top() == 'T';
            st.pop();
            bool b = st.top() == 'T';
            st.pop();
            st.push(a && b ? 'T' : 'F');
        } else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}