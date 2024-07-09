#include <string>

bool solveBoolean(std::string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') res = true;
        else if (s[i] == 'F') res = false;
        else if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    return res;