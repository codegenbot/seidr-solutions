bool evaluateTop(std::stack<char>& st) {
    char c = st.top();
    st.pop();
    if (c == '&') {
        return !st.empty();
    } else if (c == '|') {
        while (!st.empty()) {
            st.pop();
        }
        return false;
    } else {
        return false;
    }
}