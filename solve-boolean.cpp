string solveBoolean(string s) {
    stack<char> st;
    bool temp = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) temp = true;
            else st.pop();
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) temp = false;
            else st.pop();
        } else {
            st.push(s[i]);
        }
    }
    if (!temp) return "False";
    return "True";
}