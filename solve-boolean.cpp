std::string solveBoolean(std::string s) {
    std::stack<char> st;
    bool isTrue = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
                st.pop();
            }
            if (st.empty()) return "False";
            else isTrue &= (st.top() == 'T');
            st.pop();
        } else if (s[i] == '|') {
            while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
                st.pop();
            }
            st.push(s[i]);
        } else {
            st.push(s[i]);
        }
    }
    return isTrue ? "True" : "False";
}