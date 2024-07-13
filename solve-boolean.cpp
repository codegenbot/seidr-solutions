string solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return "False";
            else st.pop();
        } 
        else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return "False";
            else st.pop();
        } 
        else if (s[i] == 'T' || s[i] == 't') st.push('T');
        else if (s[i] == 'F' || s[i] == 'f') st.push('F');
    }
    if (!st.empty()) return st.top() == 'T' ? "True" : "False";
    else return "True";
}