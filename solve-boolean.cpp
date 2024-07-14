bool solveBoolean(std::string s) {
    stack<char> st;
    bool lastOp = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            else st.pop();
            lastOp = true;
        } 
        else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            else st.pop();
            lastOp = true;
        } 
        else if (s[i] == 'T' || s[i] == 'F') {
            if (lastOp) {
                if (s[i] == 'T') st.push('&');
                else st.push('|');
                lastOp = false;
            }
            else st.push(s[i]);
        } 
    }
    return !st.empty();
}