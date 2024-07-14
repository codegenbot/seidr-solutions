Here is the solution:

string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (!st.empty()) {
                st.push('&');
            }
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (!st.empty()) {
                st.push('|');
            }
        } else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T' ? "True" : "False";
}