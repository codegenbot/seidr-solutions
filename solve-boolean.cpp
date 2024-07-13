bool evaluateBooleanExpression(const string& expr) {
    if (expr == "t") {
        return true;
    } else {
        return false;
    }
}
int main() {
    string expr;
    cin >> expr;
    if (evaluateBooleanExpression(expr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}