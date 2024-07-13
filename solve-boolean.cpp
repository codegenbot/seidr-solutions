bool evaluateBooleanExpression(const string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool left = evaluateBooleanExpression(expr.substr(0, 1));
        bool right = evaluateBooleanExpression(expr.substr(2));
        if (expr[1] == '|') {
            return left || right;
        } else {
            return left && right;
        }
    }
}

int main() {
    string expr;
    cin >> expr;
    bool result = evaluateBooleanExpression(expr);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}