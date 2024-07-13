bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            bool a = st.top() - '0';
            st.pop();
            bool b = st.top() - '0';
            st.pop();
            st.push((a || b) + '0');
        } else if (s[i] == '&') {
            bool a = st.top() - '0';
            st.pop();
            bool b = st.top() - '0';
            st.pop();
            st.push((a && b) + '0');
        } else {
            st.push(s[i]);
        }
    }
    return st.top() - '0';
}