bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = expression[0] == 't' ? true : false;
        bool right = expression[2] == 't' ? true : false;
        if (expression[1] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    if (evaluateBooleanExpression(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}