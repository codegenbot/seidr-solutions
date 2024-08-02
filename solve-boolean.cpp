Here is the solution:

string solveBoolean(string s) {
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '&'){
            char t1 = st.top();st.pop();
            char t2 = st.top();st.pop();
            if(t1 == 'T' && t2 == 'T') st.push('T');
            else if(t1 == 'F' || t2 == 'F') st.push('F');
        }
        else if(s[i] == '|'){
            char t1 = st.top();st.pop();
            char t2 = st.top();st.pop();
            if(t1 == 'T' && t2 == 'T') st.push('T');
            else st.push('F');
        }
        else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T'? "True": "False";
}