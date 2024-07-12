bool evalBoolExpr(string s) {
    if (s == "t") return true;
    if (s == "f") return false;
    bool res = false;
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] == '&') {
            return evalBoolExpr(s.substr(0, i)) && evalBoolExpr(s.substr(i + 1));
        } else if (s[i] == '|') {
            return evalBoolExpr(s.substr(0, i)) || evalBoolExpr(s.substr(i + 1));
        }
    }
    return res;
}

int main() {
    string expr;
    cin >> expr;
    cout << (evalBoolExpr(expr) ? "True" : "False") << endl;
    return 0;
}