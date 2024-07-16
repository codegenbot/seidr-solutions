#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    bool isAnd = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
                st.pop();
            }
            isAnd = true;
        } else if (s[i] == '|') {
            while (!st.empty() && (st.top() == '|' || st.top() == '&')) {
                st.pop();
            }
            if (isAnd) return false;
            isAnd = false;
        } else if (s[i] != 'T' && s[i] != 'F') {
            return false;
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
        st.pop();
    }
    return !st.empty();