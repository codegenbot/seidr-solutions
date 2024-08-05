```cpp
bool solveBoolean(string s) {
    stack<char> st;
    bool lastWasOperator = false;
    for (char c : s) {
        if (c == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            char top = st.top(); st.pop();
            if ((top == 'T' || top == 't') && (c == 'F' || c == 'f'))
                return false;
            lastWasOperator = true;
        } else {
            st.push(c);
            lastWasOperator = false;
        }
    }
    while (!st.empty()) {
        char c = st.top(); st.pop();
        if ((c == 'T' || c == 't') && !lastWasOperator) 
            return true;
        if ((c == 'F' || c == 'f') && lastWasOperator) 
            return false;
    }
    return true;
}