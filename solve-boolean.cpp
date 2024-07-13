bool solveBoolean(const string& expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    if (expression.size() == 1) return false;

    bool left = solveBoolean(expression.substr(0, 1));
    bool right = solveBoolean(expression.substr(2));

    if (expression[1] == '&') return left && right;
    if (expression[1] == '|') return left || right;

    return false;
}

int main() {
    string expression;
    cin >> expression;

    if (solveBoolean(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}