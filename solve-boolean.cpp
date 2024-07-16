#include <stack>
#include <string>

string solveBoolean(string s) {
    stack<char> st;
    bool temp = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return "False";
            else {
                temp &= (st.top() == 'T');
                st.pop();
            }
        } 
        else if (s[i] == '|') {
            while (!st.empty()) st.pop();
            st.push(s[i]);
        } 
        else if (s[i] != '&') st.push(s[i] == 'T' ? 'T' : 'F');
    }
    if (temp) return "True";
    else return "False";
}