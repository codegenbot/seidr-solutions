string solveBoolean(string booleanExpr) {
    stack<char> st;
    for (int i = 0; i < booleanExpr.length(); i++) {
        if (booleanExpr[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push('&');
        } else if (booleanExpr[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else {
            st.push(booleanExpr[i]);
        }
    }
    string result = "";
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    return (result == "T") ? "True" : ((result == "F") ? "False" : "Invalid");
}