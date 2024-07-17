string solveBoolean(string s) {
    stack<char> st;
    string res = "";
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == '&'){
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) 
                res += "T";
            else
                res += "F";
            st.push('&');
        }else if(s[i] == '|'){
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) 
                res += "T";
            else
                res += "F";
            st.push('|');
        }else{
            st.push(s[i]);
        }
    }
    
    while(!st.empty()){
        st.pop();
    }
    
    return (res == "T") ? "True" : "False";
}