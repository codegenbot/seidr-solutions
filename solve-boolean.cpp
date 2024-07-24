bool evaluateBooleanExpr(string expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool left = evaluateBooleanExpr(expr.substr(0, 1));
        bool right = evaluateBooleanExpr(expr.substr(2));
        if (expr[1] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string input;
    cin >> input;
    if (evaluateBooleanExpr(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}