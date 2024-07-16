```
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    stack<char> st1;
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
            st1.push(s[i]);
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    if (st1.size() % 2 != 0) return true;
    for (char c : st1) {
        if (c == 'T' && st1.size() > 1 && st1[st1.size() - 2] == '&') return false;
        else if (c == 'F' && st1.size() > 1 && st1[st1.size() - 2] == '|') return true;
    }
    if (st1.top() == 'T') return true;
    else return false;
}