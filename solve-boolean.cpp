bool solveBoolean(string s) {
    stack<char> st;
    st.push('\0');
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            }
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    return st.empty();
}