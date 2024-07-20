string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return "False";
            else st.top() = '&';
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return "True";
            else st.top() = '|';
        } else if (s[i] != '&' && s[i] != '|') {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    return st.empty() ? "True" : "False";
}