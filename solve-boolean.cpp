bool evaluate(const string &expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == '|') {
            result |= expression[i + 1];
        } else if (expression[i] == '&') {
            result &= expression[i + 1];
        } else if (expression[i] == '^') {
            result ^= expression[i + 1];
        } else if (expression[i] == '~') {
            result = !result;
        }
        i += 2;
    }
    return result && expression != "false";
}