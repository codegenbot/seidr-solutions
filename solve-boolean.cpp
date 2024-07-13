bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool operand1 = expression[0] == 't';
        bool operand2 = expression[2] == 't';
        char operation = expression[1];
        
        if (operation == '&') {
            return operand1 && operand2;
        } else if (operation == '|') {
            return operand1 || operand2;
        }
    }
    return false;
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