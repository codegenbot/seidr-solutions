string solveBoolean(string s) {
    stack<char> st;
    bool value = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') st.pop();
            if (st.empty()) return "False";
            else st.pop();
            value = true;
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') st.pop();
            if (st.empty()) return "True";
            else st.pop();
            value = false;
        } else {
            st.push(s[i]);
        }
    }
    if (st.size() > 1) return "False";
    return value ? "True" : "False";
}