bool solveBoolean(string expression) {
    stack<char> st;
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (!st.empty()) {
                st.push('&');
            } else {
                return false;
            }
        } else if (expression[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else if (expression[i] != 'T' && expression[i] != 'F') {
            while (!st.empty() && st.top() != '&') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            } else if (st.top() == '|') {
                return false;
            }
        } else {
            st.push(expression[i]);
        }
    }
    return !st.empty();
}