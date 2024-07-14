```
bool evaluateTop(std::stack<char>& st) {
    char c = st.top();
    st.pop();
    if (c == '&') {
        while (!st.empty() && st.top() == '|') {
            st.pop();
        }
        bool top = !st.empty();
        return top;
    } else if (c == '|') {
        while (!st.empty()) {
            st.pop();
        }
        return true;
    } else {
        return false;
    }
}