bool solveBoolean(string expression) {
    if (expression == "t") {
        return true;
    }
    if (expression == "f") {
        return false;
    }

    char op = expression[1];
    bool left = expression[0] == 't' ? true : false;
    bool right = expression[2] == 't' ? true : false;

    if (op == '&') {
        return left && right;
    } else {
        return left || right;
    }
}

int main() {
    string expression;
    cin >> expression;

    bool result = solveBoolean(expression);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}