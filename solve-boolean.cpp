bool evaluateBooleanExpression(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;

    bool result = false;
    char op = ' ';
    for (char c : expression) {
        if (c == '&' || c == '|') {
            op = c;
        } else {
            bool val = (c == 't') ? true : false;
            if (op == ' ') {
                result = val;
            } else if (op == '&') {
                result = result && val;
            } else if (op == '|') {
                result = result || val;
            }
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}