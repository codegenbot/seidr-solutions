bool evaluateBooleanExpression(const string& expr) {
    stack<bool> operands;
    stack<char> operators;

    for (char c : expr) {
        if (c == 't' || c == 'f') {
            operands.push(c == 't');
        } else if (c == '&' || c == '|') {
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();

        bool operand2 = operands.top();
        operands.pop();
        bool operand1 = operands.top();
        operands.pop();

        if (op == '&') {
            operands.push(operand1 && operand2);
        } else if (op == '|') {
            operands.push(operand1 || operand2);
        }
    }

    return operands.top();
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