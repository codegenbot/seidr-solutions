bool solveBoolean(string s) {
    if(s.size() == 0) return false; // empty string represents F
    
    stack<char> st;
    
    for(char c : s) {
        if(c == '&' || c == '|') { 
            char op = st.top(); st.pop();
            bool b1, b2;
            
            if(op == '&') b1 = true; else b1 = false;
            if(c == '&') b2 = true; else b2 = false;
            
            while(st.size()) st.pop();
            st.push((b1 && b2)? 'T' : 'F');
        } 
        else {
            st.push(c);
        }
    }
    
    return st.top() == 'T';
}