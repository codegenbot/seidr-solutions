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
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return "True";
            }
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    if (st.top() == '&') {
        return "False";
    } else if (st.top() == '|') {
        return "True";
    } else {
        return st.top() == 'T' ? "True" : "False";
    }
}