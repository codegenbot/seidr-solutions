bool solveBoolean(std::string s) {
    stack<char> st;
    bool result = true;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '|') {
            while (!st.empty() && (st.top() == '|' || st.top() == '&')) {
                st.pop();
            }
            if (st.empty()) result = false;
            else st.push('|');
        } 
        else if (s[i] == '&') {
            while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
                st.pop();
            }
            if (st.empty()) return false;
            st.push('&');
        }
        else if (s[i] != 'T' && s[i] != 'F') {
            return false;
        } 
        else {
            st.push(s[i]);
        }
    }

    while (!st.empty() && (st.top() == '|' || st.top() == '&')) {
        st.pop();
    }

    return !st.empty();