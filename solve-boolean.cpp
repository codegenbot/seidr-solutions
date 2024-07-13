bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char op = expression[1];
        bool left = evaluateBooleanExpression(expression.substr(0, 1));
        bool right = evaluateBooleanExpression(expression.substr(2));
        if (op == '&') {
            return left && right;
        } else { // '|'
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}