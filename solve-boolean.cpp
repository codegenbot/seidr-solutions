```cpp
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            st.pop();
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                result = true;
            }
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    return s.back() == 'T';
}