Here is the solution:

bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(st.empty()) {
                res = true;
            } else {
                res = (st.top() == 'T');
            }
            st.push('&');
        } else if(s[i] == '|') {
            while(!st.empty() && st.top() == '|') {
                st.pop();
            }
            if(st.empty()) {
                res = false;
            } else {
                res = (st.top() == 'T');
            }
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    
    return res;
}