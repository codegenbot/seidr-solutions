int evaluate(const string& expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == '|') {
            i++;
            continue;
        } else if (expression[i] == '&') {
            i++;
            continue;
        } else if (expression[i] == '^') {
            i++;
            continue;
        } else if (operators.empty()) {
            result = true;
        } else {
            char operator = operators.top();
            if (operator == '|') {
                result |= atoi(&expression[i]);
            } else if (operator == '&') {
                result &= atoi(&expression[i]);
            } else if (operator == '^') {
                result ^= atoi(&expression[i]);
            }
        }
    }
    return result && strcmp(expression, "false") != 0;
}