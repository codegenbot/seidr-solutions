bool solveBoolean(string s) {
    bool res = true;
    stack<bool> st;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 't') {
            st.push(s[i] == 'T');
        } else if (s[i] == '|') {
            res = !st.top();
            st.pop();
        } else if (s[i] == '&') {
            bool b1 = st.top(); st.pop();
            bool b2 = st.top(); st.pop();
            st.push(b1 && b2);
        }
    }

    return res;
}