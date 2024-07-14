#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't')
            res = true;
        else if (s[i] == 'f')
            res = false;
        else if (s[i] == '|') {
            bool temp = res;
            while (!st.empty() && st.top() != '&') {
                st.pop();
            }
            if (st.empty())
                return temp;
            st.pop();
            res = temp;
        } 
        else if (s[i] == '&') {
            st.push('&');
        }
    }

    while (!st.empty()) {
        st.pop();
    }

    return res;
}