#include <stack>
#include <string>

std::string solveBoolean(std::string s) {
    stack<char> st;
    bool prev = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') prev = true;
        else if (s[i] == 'F') prev = false;
        else if (s[i] == '|') {
            st.push(prev ? '1' : '0');
            prev = false;
        }
        else if (s[i] == '&') {
            bool curr = prev;
            prev = false;
            while (!st.empty()) st.pop();
            st.push(curr ? '1' : '0');
        }
    }
    return prev ? "True" : "False";
}