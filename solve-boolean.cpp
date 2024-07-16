#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            st.push('|');
        } else if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            st.push('&');
        } else if (s[i] != 'T' && s[i] != 'F') {
            return false;
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty() && st.top() == '&') {
        st.pop();
    }
    return !st.empty();