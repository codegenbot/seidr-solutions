bool solveBoolean(string s) {
    stack<char> st;
    for(int i=0; i<s.length();i++) {
        if(s[i] == '&') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if(a == 'F' && b == 'F')
                st.push('T');
            else
                st.push('F');
        }
        else if(s[i] == '|') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if(a == 'T' || b == 'T')
                st.push('T');
            else
                st.push('F');
        }
        else if(s[i] != '&' && s[i] != '|') {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}