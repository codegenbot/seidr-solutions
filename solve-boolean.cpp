```cpp
bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            char c = st.top();
            st.pop();
            if (c == 'T' || c == 'F') {
                st.push(c);
            } else {
                st.pop();
                st.push('&');
                st.push(c);
            }
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            }
            char c = st.top();
            st.pop();
            if (c == 'T' || c == 'F') {
                st.push(c);
            } else {
                st.pop();
                st.push('|');
                st.push(c);
            }
        } else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}