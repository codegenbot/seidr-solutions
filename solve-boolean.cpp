string solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '&') {
            st.push(c);
        } else if (c == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
        } else if (c == 't' || c == 'T') {
            while (!st.empty()) st.pop();
            return "True";
        } else if (c == 'f' || c == 'F') {
            while (!st.empty()) st.pop();
            return "False";
        }
    }
    while (!st.empty()) st.pop();
    return st.top() == '&' ? "False" : "True";
}