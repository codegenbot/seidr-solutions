#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            char left = st.top();
            st.pop();
            char right = st.top();
            st.pop();
            st.push((left == 'T' && right == 'T') ? 'T' : 'F');
        } else if (s[i] == '|') {
            char left = st.top();
            st.pop();
            char right = s[i + 1];
            i++;
            st.push((left == 'T' || right == 'T') ? 'T' : 'F');
        } else {
            st.push(s[i]);
        }
    }
    return (st.top() == 'T');
}