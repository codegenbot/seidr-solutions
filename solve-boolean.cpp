Here is the solution:

bool solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '|') {
            char op1 = st.top();
            st.pop();
            char op2 = st.top();
            st.pop();
            st.push(c == 'T' ? true : c == 'F' ? false : op1 || op2);
        } else if (c == '&') {
            char op1 = st.top();
            st.pop();
            char op2 = st.top();
            st.pop();
            st.push(c == 'T' ? true : c == 'F' ? false : op1 && op2);
        } else {
            st.push(c == 'T');
        }
    }
    return (bool)st.top();
}