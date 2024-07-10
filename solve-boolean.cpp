bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            else st.pop();
        } 
        else if (s[i] == '|') {
            while (!st.empty()) st.pop();
        } 
        else if (s[i] == 't' || s[i] == 'f') {
            st.push(s[i]);
        }
    }
    return st.top() == 't';
}