bool solveBoolean(std::string s) {
    bool result = true;
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            st.pop();
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                result = true;
            }
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';