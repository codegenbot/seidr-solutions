std::string solveBoolean(std::string s) {
    std::stack<char> st;
    bool result = true; 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
                if (st.top() == '|') result = false;
                st.pop();
            }
            if (result) return "True";
            else return "False";
        } else if (s[i] == '|') {
            while (!st.empty()) st.pop();
            st.push(s[i]);
        } else {
            st.push(s[i]);
        }
    }
    return result ? "True" : "False";
}