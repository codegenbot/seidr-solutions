string solveBoolean(string booleanExpr) {
    stack<char> st;
    for (int i = 0; i < booleanExpr.length(); i++) {
        if (booleanExpr[i] == '|') {
            while (!st.empty() && st.top() != '&') {
                st.pop();
            }
            if (st.empty()) return "True";
        } else if (booleanExpr[i] == '&') {
            st.push('&');
        } else {
            st.push(booleanExpr[i]);
        }
    }
    return st.top() == 'T' ? "True" : "False";
}