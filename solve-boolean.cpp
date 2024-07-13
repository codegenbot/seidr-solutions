bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else {
        return false;
    }
}
int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}