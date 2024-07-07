bool evaluate(const string &expression) {
    stack<char> operators;
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            operators.push('|');
        } else if (expression[i] == '&') {
            operators.push('&');
        } else if (expression[i] == '^') {
            operators.push('^');
        } else if (operators.empty()) {
            result = true;
        } else {
            char operator = operators.top();
            if (operator == '|') {
                result |= expression[i];
            } else if (operator == '&') {
                result &= expression[i];
            } else if (operator == '^') {
                result ^= expression[i];
            }
        }
    }
    return result && expression != "false";
}