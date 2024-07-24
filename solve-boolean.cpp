Here is the solution:

bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) {
                res = true;
            } else {
                res = false;
            }
        } else if(s[i] == '|') {
            while(!st.empty()) {
                st.pop();
            }
            st.push(s[i]);
        } else if(s[i] == 't' || s[i] == 'f') {
            st.push(s[i]);
        }
    }
    
    return res;
}