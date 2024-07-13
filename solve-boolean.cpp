int evaluateBoolean(const string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool left = evaluateBoolean(expr.substr(0, 1));
        bool right = evaluateBoolean(expr.substr(2));
        if (expr[1] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expr;
    cin >> expr;
    cout << (evaluateBoolean(expr) ? "True" : "False") << endl;
    return 0;
}