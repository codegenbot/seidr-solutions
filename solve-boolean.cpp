bool evaluateBooleanExpression(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    bool result = false;
    char op = ' ';
    for (char c : expression) {
        if (c == '&' || c == '|') {
            op = c;
            continue;
        }
        bool val = (c == 't');
        if (op == ' ') {
            result = val;
        } else if (op == '&') {
            result = result && val;
        } else if (op == '|') {
            result = result || val;
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}