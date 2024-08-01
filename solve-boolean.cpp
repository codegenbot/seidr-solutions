bool solveBoolean(string expression) {
    stack<char> st;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push('&');
        } else if (expression[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else if (expression[i] == 't' || expression[i] == 'f') {
            st.push(expression[i]);
        }
    }
    
    return st.top() == 't';
}