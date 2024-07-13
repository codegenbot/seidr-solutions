bool evaluateBooleanExpression(const string& expr) {
    if (expr == "t") return true;
    if (expr == "f") return false;

    bool result = false;
    bool operand1 = evaluateBooleanExpression(expr.substr(0, 1));
    bool operand2 = evaluateBooleanExpression(expr.substr(2));

    if (expr[1] == '&') {
        result = operand1 && operand2;
    } else if (expr[1] == '|') {
        result = operand1 || operand2;
    }

    return result;
}

int main() {
    string expr;
    cin >> expr;
    if (evaluateBooleanExpression(expr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}