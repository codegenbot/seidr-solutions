bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 't')
            res = true;
        else if(s[i] == 'f')
            res = false;
        else if(s[i] == '|') {
            while(!st.empty()) st.pop();
            bool temp = res;
            res = (res ? true : false);
            res = (temp && !res) || (!temp && res);
        }
        else if(s[i] == '&') {
            while(!st.empty()) st.push(st.top() == 't');
            bool temp = res;
            res = (res ? true : false);
            while(!st.empty()) {
                st.pop();
                res = (res && temp) || (!temp && !res);
                temp = false;
            }
        }
    }
    
    return res;
}