#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        if (st.top() == 'T') return true;
        if (st.top() == 'F') return false;
        st.pop();
    }
    return false; // This line should not be reached
}