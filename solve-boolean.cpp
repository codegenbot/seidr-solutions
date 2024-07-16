```cpp
#include <stack>
#include <string>

bool solveBoolean(std::string st) {
    stack<char> st;
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            st.push('&');
        } else if (st[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            st.push('|');
        } else if (st[i] != 'T' && st[i] != 'F') {
            return false;
        } else {
            st.push(st[i]);
        }
    }
    while (!st.empty() && st.top() == '&') {
        st.pop();
    }
    return !st.empty();