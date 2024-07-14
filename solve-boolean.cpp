bool solveBoolean(string s) {
    stack<char> st;
    bool res = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') res = true;
        else if (s[i] == 'f') res = false;
        else if (s[i] == '|') {
            while (!st.empty()) st.pop();
            bool temp = res;
            res = !res;
            if (temp) res = true;
            else res = false;
        }
        else if (s[i] == '&') {
            while (!st.empty()) st.pop();
            bool temp = res;
            res = !res;
            if (temp) res = true;
            else res = false;
        }
    }

    return res;
}