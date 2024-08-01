bool solveBoolean(string expression) {
    stack<char> st;
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            char op1 = st.top();
            st.pop();
            char op2 = st.top();
            st.pop();
            if(op1 == 'T' && op2 == 'T')
                st.push('T');
            else
                st.push('F');
        } 
        else if(expression[i] == '|') {
            char op1 = st.top();
            st.pop();
            char op2 = st.top();
            st.pop();
            if(op1 == 'T' || op2 == 'T')
                st.push('T');
            else
                st.push('F');
        } 
        else 
            st.push(expression[i]);
    }
    return st.top() == 'T';
}