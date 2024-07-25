bool solveBoolean(string s) {
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '&' || s[i] == '|') {
            while(!st.empty() && (s[i-1] == '&' || s[i-1] == '|')) {
                st.pop();
            }
        }
        else if(st.size() >= 2) {
            char a = st.top(); st.pop();
            char b = st.top(); st.pop();
            if(s[i] == '&') st.push((a == 'T' && b == 'T') ? 'T' : 'F');
            else st.push((a == 'T' || b == 'T') ? 'T' : 'F');
        }
        else st.push(s[i]);
    }
    return st.top() == 'T';
}