string solveBoolean(string s) {
    stack<char> st;
    string res = "";
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) res += "T";
            else res += "F";
        } 
        else if(s[i] == '|') {
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) res += "F";
            else res += "T";
        } 
        else {
            st.push(s[i]);
        }
    }
    
    while(!st.empty()) {
        st.pop();
    }
    
    if(res.length() > 0) return (res[0] == 'T') ? "True" : "False";
    else return s;
}