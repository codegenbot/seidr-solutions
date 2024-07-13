Here is the solution:

bool solveBoolean(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '&') {
            bool t1 = st.top() == 'T';
            st.pop();
            bool t2 = st.top() == 'T';
            st.pop();
            st.push((t1 && t2) ? 'T' : 'F');
        } else if (c == '|') {
            bool t1 = st.top() == 'T';
            st.pop();
            bool t2 = st.top() == 'T';
            st.pop();
            st.push((t1 || t2) ? 'T' : 'F');
        } else {
            st.push(c);
        }
    }
    
    return st.top() == 'T';
}