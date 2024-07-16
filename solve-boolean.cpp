bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = expression[1];
        if (op == '&') {
            return expression[0] == 't' && expression[2] == 't';
        } else if (op == '|') {
            return expression[0] == 't' || expression[2] == 't';
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}