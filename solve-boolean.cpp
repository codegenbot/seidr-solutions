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
    string result = "";
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}