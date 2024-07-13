bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            st.pop();
            st.push('&');
        } else if (s[i] == '|') {
            st.pop();
            st.push('|');
        } else if (s[i] == 'T' || s[i] == 't') {
            st.push('T');
        } else if (s[i] == 'F' || s[i] == 'f') {
            st.pop();
            while (!st.empty() && st.top() != '&') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            } else {
                return false;
            }
        }
    }
    return st.top() == 'T';
}