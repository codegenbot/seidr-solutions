```
string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return "False";
            char c = st.top(); st.pop();
            if ((c == 'T' || c == 't') && s[i+1] == 'F' || s[i+1] == 'f')
                return "False";
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        char c = st.top(); st.pop();
        if ((c == 'T' || c == 't') && (s.size() % 2 != 0)) 
            return "True";
        if ((c == 'F' || c == 'f') && (s.size() % 2 != 1)) 
            return "False";
    }
    return "True";
}