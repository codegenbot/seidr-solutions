```cpp
bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            stack<char> st;
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            st.pop();
        } else if (s[i] == '|') {
            stack<char> st1;
            while (!st1.empty() && st1.top() == '|') {
                st1.pop();
            }
            if (st1.empty()) {
                result = true;
            }
            st1.pop();
        } else {
            stack<char> st2;
            st2.push(s[i]);
        }
    }
    return st2.top() == 'T';
}