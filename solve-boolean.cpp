bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 't') {
            res = true;
        } else if(s[i] == 'f') {
            res = false;
        } else if(s[i] == '&') {
            while(!st.empty() && st.top() != '|') {
                st.pop();
            }
            if(st.empty()) {
                return res;
            }
            st.pop();
            res &= !st.empty();
        } else if(s[i] == '|') {
            st.push(res);
            res = false;
        }
    }

    while(!st.empty()) {
        st.pop();
    }

    return res;
}