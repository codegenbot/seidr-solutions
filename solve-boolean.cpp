string solveBoolean(string s) {
    stack<string> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            string b1 = st.top();
            st.pop();
            string b2 = s.substr(i+1);
            st.push((b1=="T" && b2=="T")?"T":"F");
            i++;
        } else if(s[i] == '|') {
            string b1 = st.top();
            st.pop();
            string b2 = s.substr(i+1);
            st.push((b1=="T" || b2=="T")?"T":"F");
            i++;
        } else {
            st.push(s[i]=="T"?"T":"F");
        }
    }
    return st.top();
}