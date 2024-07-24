string solveBoolean(string s) {
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '&') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            st.push((a == 'T' && b == 'T') ? 'T' : 'F');
        }
        else if(s[i] == '|') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            st.push((a == 'T' || b == 'T') ? 'T' : 'F');
        }
        else if(s[i] != '&') {
            st.push(s[i]);
        }
    }
    return (st.top() == 'T') ? "True" : "False";
}