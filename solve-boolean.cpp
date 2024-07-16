#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (char c : s) {
        if (c == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            st.push('&');
        } else if (c == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            st.push('|');
        } else if (c != 'T' && c != 'F') {
            return false;
        } else {
            st.push(c);
        }
    }
    while (!st.empty() && st.top() == '&') {
        st.pop();
    }
    return !st.empty();
}