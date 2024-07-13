bool evaluateBooleanExpression(const string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        char op = expr[1];
        if (op == '&') {
            return (expr[0] == 't' && expr[2] == 't');
        } else if (op == '|') {
            return (expr[0] == 't' || expr[2] == 't');
        }
    }
    return false;
}

int main() {
    string expr;
    cin >> expr;
    cout << (evaluateBooleanExpression(expr) ? "True" : "False") << endl;
    return 0;
}