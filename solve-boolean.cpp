string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    string res = "";
    while (!st.empty()) {
        res = (char)st.top() + res;
        st.pop();
    }
    return (res == "TF" || res == "tF") ? "False" : "True";
}