else if (c == 'T' || c == 'F') {
    operands.push(c == 'T');
    while (!operators.empty() && operators.top() == '&') {
        char op = operators.top();
        operators.pop();
        bool operand2 = operands.top();
        operands.pop();
        bool operand1 = operands.top();
        operands.pop();
        operands.push(operand1 && operand2);
    }
}