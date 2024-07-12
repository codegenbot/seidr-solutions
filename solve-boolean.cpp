bool evaluateBooleanExpr(const string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    }

    char op = expr[1];

    if (op == '&') {
        return (expr[0] == 't') && (expr[2] == 't');
    } else if (op == '|') {
        return (expr[0] == 't') || (expr[2] == 't');
    }

    return false; // Invalid expression
}

int main() {
    string expr;
    cin >> expr;

    bool result = evaluateBooleanExpr(expr);

    if (result) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}