#include <string>
#include <stack>

bool solveBoolean(string s) {
    stack<char> st;
    bool current = false;
    bool prev = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            current = true;
        } else if (s[i] == 'F') {
            current = false;
        } else if (s[i] == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            prev = current;
            current = false;
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            prev = current;
            current = true;
        } else {
            st.push(s[i]);
        }
    }

    return current;
}