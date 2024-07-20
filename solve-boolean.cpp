string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return "False";
            } else {
                char c = st.top();
                st.pop();
                if (c == 'T') {
                    return "True";
                } else {
                    return "False";
                }
            }
        } else if (s[i] != '&') {
            st.push(s[i]);
        }
    }
    while (!st.empty() && st.top() == '&') {
        st.pop();
    }
    if (st.empty()) {
        return "True";
    } else {
        char c = st.top();
        st.pop();
        if (c == 'T') {
            return "True";
        } else {
            return "False";
        }
    }
}