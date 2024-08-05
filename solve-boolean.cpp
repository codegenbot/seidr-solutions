bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return false;
            char c = st.top(); st.pop();
            if ((c == 'T' || c == 't') && s[i+1] == 'F' || s[i+1] == 'f')
                return false;
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        char c = st.top(); st.pop();
        if ((c == 'T' || c == 't') && (s.size() % 2 != 0)) 
            return true;
        if ((c == 'F' || c == 'f') && (s.size() % 2 != 1)) 
            return false;
    }
    return s.size() % 2 == 0;
}