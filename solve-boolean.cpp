Here is the solution:

bool solveBoolean(string s) {
    if (s == "T" || s == "t") return true;
    if (s == "F" || s == "f") return false;

    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            while (!st.empty() && st.top() != '&') {
                st.pop();
            }
            if (st.empty()) break;
        } else if (s[i] == '&') st.push('&');
        else st.push(s[i]);
    }

    stack<bool> bSt;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 't') bSt.push(true);
        else if (s[i] == 'F' || s[i] == 'f') bSt.push(false);

        while (!st.empty()) {
            char op = st.top();
            st.pop();
            bool a = bSt.top(); bSt.pop();
            bool b;
            if (op == '&') b = bSt.top(); bSt.pop();
            else b = true;

            if (op == '|') bSt.push(a || b);
            else bSt.push(a && b);
        }
    }

    return bSt.top();
}