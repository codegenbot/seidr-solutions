char solveBoolean(string expr) {
    if (expr == "t") {
        return 'T';
    } else {
        return 'F';
    }
}
int main() {
    string expr;
    cin >> expr;
    cout << (solveBoolean(expr) == 'T' ? "True" : "False") << endl;
    return 0;
}