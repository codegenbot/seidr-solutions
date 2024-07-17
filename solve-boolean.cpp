bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'T')
            res = true;
        else if(s[i] == 'F')
            res = false;
        else if(s[i] == '|'){
            res = (res || st.top()) ? true : false;
            st.pop();
        }
        else if(s[i] == '&'){
            while(!st.empty())
                st.pop();
            res = (res && st.empty());
        }
    }
    return res;
}