bool solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == 'T' || c == 'F') {
            if (st.top() == '&') return c != 'F';
            else if (st.top() == '|') return true;
            st.pop();
        } 
        else if (c == '&') st.push(c);
        else if (c == '|') st.push(c);
    }
    return true;
}