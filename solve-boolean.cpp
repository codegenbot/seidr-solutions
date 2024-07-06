bool evaluate(const string &expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == '|') {
            // Evaluate the first operand
            result |= evaluate(expression.substr(i + 1, expression.length() - i));
        } else if (expression[i] == '&') {
            // Evaluate the second operand
            result &= evaluate(expression.substr(i + 1, expression.length() - i));
        } else if (expression[i] == '^') {
            // Evaluate the first operand and then apply the XOR operation to the result
            result ^= evaluate(expression.substr(i + 1, expression.length() - i));
        } else if (expression[i] == '~') {
            // Apply the NOT operation to the result
            result = !result;
        }
        i++;
    }
    return result;
}