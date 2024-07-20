bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            char a = st.top();
            st.pop();
            char b = s[i + 1];
            s[i] = '\0';
            i++;
            st.push((a == 'T' && b == 'T') ? 'T' : 'F');
        } else if (s[i] == '|') {
            char a = st.top();
            st.pop();
            char b = s[i + 1];
            s[i] = '\0';
            i++;
            st.push((a == 'T' || b == 'T') ? 'T' : 'F');
        } else if (s[i] != '&') {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}