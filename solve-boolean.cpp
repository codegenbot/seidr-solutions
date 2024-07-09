```cpp
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool result = false, lastOp = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            while (!st.empty() && st.top() != '|') {
                st.pop();
            }
            if (st.empty()) {
                result = true;
            } else {
                lastOp = (st.top() == '|');
            }
        } else if (s[i] == 'F') {
            while (!st.empty() && st.top() != '|') {
                st.pop();
            }
            if (st.empty()) {
                result = false;
            } else {
                lastOp = (st.top() == '|');
            }
        } else if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (!st.empty() && st.top() == '|') {
                st.pop();
                result = lastOp;
            } else {
                result = false;
            }
        } else if (s[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push(s[i]);
            lastOp = true;
        }
    }

    return result;
}