````
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
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
            if (st.empty()) result = true;
            st.push('|');
        } else {
            st.push(c);
        }
    }
    while (!st.empty() && st.top() == '&') {
        st.pop();
    }
    return !st.empty() && result;
}