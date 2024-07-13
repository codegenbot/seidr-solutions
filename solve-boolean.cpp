bool evaluateBooleanExpression(const string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        char op = expr[1];
        bool left = (expr[0] == 't');
        bool right = (expr[2] == 't');
        if (op == '&') {
            return left && right;
        } else if (op == '|') {
            return left || right;
        }
    }
}

int main() {
    string expr;
    cin >> expr;
    cout << (evaluateBooleanExpression(expr) ? "True" : "False") << endl;
    return 0;
}