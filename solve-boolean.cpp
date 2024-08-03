bool evaluateBoolean(string expression) {
    stack<char> st;
    for (int i = expression.length() - 1; i >= 0; --i) {
        char c = expression[i];
        if (c == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            }
            bool left = st.top() == 'T';
            st.pop();
            bool right = st.top() == 'F' || st.top() == '&';
            st.pop();
            st.push((left && right) ? '&' : !right);
        } else if (c == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            }
            bool left = st.top() == 'T';
            st.pop();
            bool right = st.top() == 'F' || st.top() == '|';
            st.pop();
            st.push((left || right) ? '|' : !right);
        } else {
            st.push(c == 't' ? 'T' : c == 'f' ? 'F' : (c == '&' ? '&' : '|'));
        }
    }
    return st.top() == 'T';
}