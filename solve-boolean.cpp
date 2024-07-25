#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            while (!st.empty() && st.top() != '&') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            } else if (st.top() == 'F') {
                st.pop();
                return false;
            }
        } else if (s[i] == '&') {
            st.push('&');
        } else if (s[i] == 'T') {
            while (!st.empty()) {
                st.pop();
            }
            return true;
        } else if (s[i] == 'F') {
            while (!st.empty()) {
                st.pop();
            }
            return false;
        }
    }
    while (!st.empty()) {
        st.pop();
    }
    if (st.empty()) {
        return true;
    } else {
        return false;
    }
}