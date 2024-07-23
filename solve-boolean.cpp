#include <string>
#include <stack>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return true;
            else st.push('|');
        } else if (s[i] == '&') {
            st.push('&');
        }
    }
    while (!st.empty() && st.top() == '&') {
        st.pop();
    }
    return result;
}