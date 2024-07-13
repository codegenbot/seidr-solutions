bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            res = true;
        } else if (s[i] == 'f') {
            res = false;
        } else if (s[i] == '&') {
            while (!st.empty()) st.pop();
            st.push(res ? 1 : 0);
            res = false;
        } else if (s[i] == '|') {
            int a = st.top(); st.pop();
            int b = res; res = false;
            res = (a && b) || (a && !b) || (!a && b) || (!a && !b);
        }
    }

    return res;
}