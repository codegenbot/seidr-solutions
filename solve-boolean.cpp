#include <deque>

bool solveBoolean(std::string s) {
    std::stack<char> st;
    bool prev = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            prev = true;
        } else if (s[i] == 'F') {
            prev = false;
        } else if (s[i] == '&') {
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return true;
            else st.push('|');
        }
    }
    while (!st.empty() && st.top() == '&') {
        st.pop();
    }
    return prev;