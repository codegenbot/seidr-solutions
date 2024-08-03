bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            } else {
                char c = st.top();
                st.pop();
                if (c == 'T' || c == 't')
                    st.push('T');
                else
                    st.push('F');
            }
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            } else {
                char c = st.top();
                st.pop();
                if (c == 'T' || c == 't')
                    st.push('T');
                else
                    st.push('F');
            }
        } else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}