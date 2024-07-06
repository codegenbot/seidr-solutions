```cpp
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    std::stack<char> st;
    bool res = true;

    for (char c : s) {
        if (c == 't' || c == 'f') {
            st.push(c);
        } else if (c == '|') {
            if (st.top() == 't')
                res = true;
            else
                res = false;
            st.pop();
        } else if (c == '&') {
            while (!st.empty()) {
                char top = st.top();
                st.pop();
                if (top == 'f')
                    return false;
                if (top == 't' && c != '&')
                    res = true;
            }
        }
    }

    return res;
}