bool solveBoolean(string s) {
    stack<char> st;
    bool result = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                result = true;
            } else {
                result = false;
            }
        } else if (s[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push(s[i]);
        } else if (s[i] == 'T') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push('T');
        } else if (s[i] == 'F') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('F');
        }
    }

    while (!st.empty()) {
        st.pop();
    }

    return result;
}