string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return "False";
            }
            st.pop();
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return "False";
            }
            st.pop();
        } else if (s[i] != '&' && s[i] != '|') {
            st.push(s[i]);
        }
    }
    if (st.size() > 1) {
        return "True";
    } else if (st.empty()) {
        return "False";
    } else {
        return (char)st.top() == 'T' ? "True" : "False";
    }
}