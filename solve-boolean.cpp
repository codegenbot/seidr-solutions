string solveBoolean(string s) {
    stack<char> st;
    bool res = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (!st.empty()) {
                res = (res || st.top() == 'T');
            } else {
                res = false;
            }
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (!st.empty()) {
                res = (res || st.top() == 'T');
            } else {
                res = false;
            }
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }

    while (!st.empty()) {
        st.pop();
    }

    return (res ? "True" : "False");
}