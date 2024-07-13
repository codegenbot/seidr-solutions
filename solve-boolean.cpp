string solveBoolean(string expression) {
    stack<char> st;
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            while(!st.empty() && st.top() == '&') {
                st.pop();
            }
            if(!st.empty()) {
                st.push('&');
            }
        } else if(expression[i] == '|') {
            while(!st.empty() && (st.top() == '&' || st.top() == '|')) {
                st.pop();
            }
            if(!st.empty()) {
                st.push('|');
            }
        } else {
            st.push(expression[i]);
        }
    }
    return st.top() == 'T' ? "True" : "False";
}