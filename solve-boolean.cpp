bool solveBoolean(string s) {
    stack<char> st;
    bool result = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '&') {
            while (!st.empty()) st.pop();
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() != '&') st.pop();
            if (st.empty()) result ^= true;
        }
    }

    return result;
}