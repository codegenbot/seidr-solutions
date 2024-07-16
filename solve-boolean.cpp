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
        } else {
            st.push(s[i]);
        }
    }

    bool result = true;
    while (!st.empty()) {
        char top = st.top();
        st.pop();
        if (top == '|') {
            result = !result;
        }
    }

    return result;
}