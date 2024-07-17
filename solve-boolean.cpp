bool solveBoolean(string s) {
    stack<char> st;
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
        } else if (s[i] != '&' && s[i] != '|') {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}