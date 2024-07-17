string solveBoolean(string s) {
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '&') {
            while(st.size() && st.top() == '&') st.pop();
            st.push('&');
        } else if(s[i] == '|') {
            while(st.size() && st.top() == '|') st.pop();
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    string res = "";
    while(!st.empty()) {
        char c = st.top(); st.pop();
        if(c == '&' || c == '|') {
            if(res.length() > 0) {
                if(c == '&') res += "&&";
                else res += "||";
            } else res = (c == '&') ? "True" : "False";
        } else {
            res = c;
        }
    }
    return res;
}