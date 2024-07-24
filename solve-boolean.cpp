bool evaluateBooleanExpression(string expression) {
    stack<bool> operands;
    stack<char> operators;

    for (char c : expression) {
        if (c == 't' || c == 'f') {
            operands.push(c == 't' ? true : false);
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
        } else {
            operands.push(operand1 || operand2);
        }
    }

    return operands.top();
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