#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    bool res = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '|') {
            while (!st.empty() && (st.top() == '|' || st.top() == '&')) {
                if (st.top() == '|') {
                    res |= (st.pop() == 'T');
                } else {
                    res &= (st.pop() == 'T');
                }
            }
        } 
        else if (s[i] == '&') {
            while (!st.empty() && (st.top() == '|' || st.top() == '&')) {
                if (st.top() == '&') {
                    res &= (st.pop() == 'T');
                } else {
                    res |= (st.pop() == 'T');
                }
            }
        } 
        else if ((s[i] != 'T' && s[i] != 'F') || st.empty()) {
            return false;
        } 
        else {
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        res &= (st.top() == 'T');
        st.pop();
    }
    return res;
}