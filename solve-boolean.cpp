bool solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
        } else if (c == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
        } else {
            st.push(c);
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    return false;
}