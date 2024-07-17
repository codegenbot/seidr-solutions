string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            char left = st.top();
            st.pop();
            char right = s[i + 1];
            st.push((left == 'T' && right == 'T') ? 'T' : 'F');
            i++;
        } else if (s[i] == '|') {
            char left = st.top();
            st.pop();
            char right = s[i + 1];
            st.push((left == 'T' || right == 'T') ? 'T' : 'F');
            i++;
        } else {
            st.push(s[i]);
        }
    }
    return (st.top() == 'T') ? "True" : "False";
}