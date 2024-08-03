bool solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
        } else if (c == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            }
        } else {
            st.push(c);
        }
    }
    while (!st.empty()) {
        if (st.top() == '&') {
            st.pop();
            return false;
        } else if (st.top() == '|') {
            st.pop();
            return true;
        }
    }
    return st.top() == 'T';
}