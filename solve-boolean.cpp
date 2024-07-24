bool solveBoolean(string s) {
    stack<char> st;
    bool result = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                result = true;
            } else {
                result = false;
            }
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                result = true;
            } else {
                result = false;
            }
            st.push('|');
        } else if (s[i] == 'T' || s[i] == 't') {
            while (!st.empty() && st.top() != '|') {
                st.pop();
            }
            if (st.empty()) {
                result = true;
            } else {
                result = false;
            }
        } else if (s[i] == 'F' || s[i] == 'f') {
            while (!st.empty() && st.top() != '|') {
                st.pop();
            }
            if (st.empty()) {
                result = false;
            } else {
                result = true;
            }
        }
    }

    return result;
}