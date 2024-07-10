bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') res = true;
        else if (s[i] == 'F') res = false;
        else if (s[i] == '|') {
            while (!st.empty() && st.top() != '&') {
                st.pop();
            }
            if (st.empty()) res = !res;
        } 
        else if (s[i] == '&') st.push('&');
    }

    return res;
}