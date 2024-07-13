bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char operation = expression[1];
        if (operation == '&') {
            return expression[0] == 't' && expression[2] == 't';
        } else if (operation == '|') {
            return expression[0] == 't' || expression[2] == 't';
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