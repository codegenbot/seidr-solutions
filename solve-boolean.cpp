bool solveBoolean(string s) {
    stack<char> st;
    bool result = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            if (st.top() == 'T')
                result = true;
            else
                st.pop();
        } else if (s[i] == '&') {
            while (!st.empty()) {
                st.pop();
            }
        } else if (s[i] == 't' || s[i] == 'T')
            st.push('T');
        else if (s[i] == 'f' || s[i] == 'F')
            st.push('F');
    }

    return result;
}