Here is the solution:

string solveBoolean(string s) {
    stack<char> st;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            char op1 = st.top();
            st.pop();
            char op2 = s[i+1];
            i++;
            if(op1 == 'T' && op2 == 'T')
                st.push('T');
            else
                st.push('F');
        }
        else if(s[i] == '&') {
            char op1 = st.top();
            st.pop();
            char op2 = s[i+1];
            i++;
            if(op1 == 'T' && op2 == 'T')
                st.push('T');
            else
                st.push('F');
        }
        else 
            st.push(s[i]);
    }
    
    return (st.top() == 'T') ? "True" : "False";
}