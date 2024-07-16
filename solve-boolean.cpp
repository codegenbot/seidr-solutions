#include <string>
bool solveBoolean(std::string s) {
    stack<char> st;
    bool val = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return true;
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return false;
            st.push('|');
        } else if (s[i] == 'T') {
            val = true;
        } else if (s[i] == 'F') {
            val = false;
        } else {
            return false;
        }
    }
    while (!st.empty() && st.top() == '&') {
        st.pop();
    }
    if (!val) return true;
    while (!st.empty() && st.top() == '|') {
        st.pop();
    }
    return !st.empty();
}