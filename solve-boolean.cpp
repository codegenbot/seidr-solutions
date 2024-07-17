string solveBoolean(string booleanExpr) {
    stack<char> s;
    for (int i = 0; i < booleanExpr.length(); i++) {
        if (booleanExpr[i] == '&') {
            s.pop();
            s.push('&');
        } else if (booleanExpr[i] == '|') {
            s.pop();
            s.push('|');
        } else if (booleanExpr[i] == 'T' || booleanExpr[i] == 'F') {
            s.push(booleanExpr[i]);
        }
    }
    return (s.top() == 'T') ? "True" : "False";
}