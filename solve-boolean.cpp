bool solveBoolean(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '&') {
            st.pop();
            st.push(',');
        } else if (c == '|') {
            st.pop();
            st.push('^');
        } else if (c != ' ') {
            st.push(c);
        }
    }
    string res;
    while (!st.empty()) {
        char c = st.top(); st.pop();
        if (c == ',') {
            res += " && ";
        } else if (c == '^') {
            res += " || ";
        } else {
            res += c;
        }
    }
    return s.find('T') != string::npos;
}