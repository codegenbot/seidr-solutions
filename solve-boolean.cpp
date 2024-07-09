```cpp
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool result = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (!st.empty() && st.top() == '|') {
                st.pop();
                result = true;
            } else {
                result = false;
            }
            st.push(s[i]);
        } else if (s[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push(s[i]);
        } else {
            st.push(s[i]);
        }
    }

    return result;
}