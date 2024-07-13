int solveBoolean(string expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool val1 = solveBoolean(expr.substr(0, expr.find('&')));
        bool val2 = solveBoolean(expr.substr(expr.find('&') + 1));
        return val1 && val2;
    }
}

int main() {
    string expr;
    cin >> expr;
    bool result = solveBoolean(expr);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}