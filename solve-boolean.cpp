bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            else st.pop();
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            else st.pop();
        } else if (s[i] == 't' || s[i] == 'f') {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    return false;
}