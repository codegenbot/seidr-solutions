string solveBoolean(string s) {
    stack<char> st;
    bool result = false;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'T') 
            st.push('1');
        else if(s[i] == 'F')
            st.push('0');
        else if(s[i] == '|') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            
            result = (a == '1' && b == '1');
            st.push((result) ? '1' : '0');
        } 
        else if(s[i] == '&') {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            
            result = (a == '1' && b == '1');
            st.push((result) ? '1' : '0');
        }
    }
    
    return (st.top() == '1') ? "True" : "False";
}