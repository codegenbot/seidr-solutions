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
        } else {
            st.push(s[i]);
        }
    }
    string res = "";
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    if (res == "TT") {
        return "True";
    } else if (res == "FF") {
        return "False";
    } else {
        for (int i = 0; i < res.length(); i++) {
            if (res[i] == 'T') {
                return "True";
            }
        }
        return "False";
    }
}