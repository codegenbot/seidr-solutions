bool solveBoolean(string expression) {
    stack<char> st;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
        } else if (expression[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
        } else {
            st.push(expression[i]);
        }
    }
    return st.top() == 'T';
}