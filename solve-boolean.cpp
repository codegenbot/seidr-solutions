int main() {
    string expr;
    cin >> expr;

    bool op1 = (expr[0] == 't');
    bool op2 = (expr.size() == 1 || expr[2] == 't');

    if (expr.size() == 1) {
        cout << (op1 ? "True" : "False") << endl;
    } else if (expr[1] == '&') {
        cout << (op1 && op2 ? "True" : "False") << endl;
    } else {
        cout << (op1 || op2 ? "True" : "False") << endl;
    }

    return 0;
}