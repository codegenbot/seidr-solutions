string solveBoolean(string s) {
    stack<char> st;
    string res = "";
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '&' || s[i] == '|') {
            while(st.size() > 1 && (st.top() == '&' || st.top() == '|')) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        } else {
            st.push(s[i]);
        }
    }
    
    while(st.size() > 0) {
        res += st.top();
        st.pop();
    }
    
    string result = "True";
    if(res == "F") {
        result = "False";
    } else if(res.length() > 1 && (res.find("T&") != string::npos || res.find("F|") != string::npos)) {
        result = "False";
    }
    
    return result;
}