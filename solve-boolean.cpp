#include <stack>
#include <string>

string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return "F";
            else st.pop();
        } 
        else if (s[i] == '&') {
            st.push(s[i]);
        } 
        else if (s[i] == 'T' || s[i] == 'F') st.push(s[i]);
    }
    if (st.top() == 'T') return "True";
    else return "False";
}