string solveBoolean(string s) {
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '&'){
            char op1 = st.top();
            st.pop();
            char op2 = st.top();
            st.pop();
            st.push((op1 == 'T' && op2 == 'T') ? 'T' : 'F');
        }
        else if(s[i] == '|'){
            char op1 = st.top();
            st.pop();
            char op2 = s[i+1];
            s.erase(i, 2);
            i--;
            st.push((op1 == 'T' || op2 == 'T') ? 'T' : 'F');
        }
        else{
            st.push(s[i]);
        }
    }
    return (st.top() == 'T')?"True":"False";
}