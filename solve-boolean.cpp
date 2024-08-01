Here is the solution:

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            st.push((a == 'T' && b == 'T') || (a == 'F' && b == 'T') || (a == 'T' && b == 'F') || (a == 'F' && b == 'F') ? 'T' : 'F');
        } else if (s[i] == '&') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            st.push((a == 'T' && b == 'T') || (a == 'F' && b == 'F') ? 'T' : 'F');
        } else if (s[i] != 'f' && s[i] != 't') {
            continue;
        }
        st.push(s[i]);
    }
    return st.top() == 'T';
}