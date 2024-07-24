bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;

    for(int i=s.length()-1; i>=0; i--) {
        if(s[i] == '&') {
            res = (st.top() == 'T');
            st.pop();
        } else if(s[i] == '|') {
            while(!st.empty() && st.top() == 'F') {
                st.pop();
            }
            if(st.empty()) {
                res = true;
            } else {
                res = (st.top() == 'T');
            }
            st.pop();
        } else if(s[i] == 't' || s[i] == 'T') {
            st.push('T');
        } else if(s[i] == 'f' || s[i] == 'F') {
            st.push('F');
        }
    }

    return res;
}