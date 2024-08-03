Here is the solution:

bool solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '|') {
            char op1 = st.top();
            st.pop();
            char op2 = st.top();
            st.pop();
            st.push((op1 == 'T' && op2 == 'T') ? 'T' : ((op1 == 'F' || op2 == 'F') ? 'T' : 'F'));
        } else if (c == '&') {
            char op1 = st.top();
            st.pop();
            char op2 = st.top();
            st.pop();
            st.push((op1 == 'T' && op2 == 'T') ? 'T' : ((op1 == 'F' || op2 == 'F') ? 'F' : 'T'));
        } else {
            st.push(c);
        }
    }
    return st.top() == 'T';
}