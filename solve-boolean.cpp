Here is the solution:

bool evaluateBoolean(string s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            char c1 = st.top();
            st.pop();
            char c2 = s[i+1];
            i++; // move forward to skip the '&' character
            st.push((c1 == 'T' && c2 == 'T') ? 'T' : 'F');
        } else if(s[i] == '|') {
            char c1 = st.top();
            st.pop();
            char c2 = s[i+1];
            i++; // move forward to skip the '|' character
            st.push((c1 == 'T' || c2 == 'T') ? 'T' : 'F');
        } else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}