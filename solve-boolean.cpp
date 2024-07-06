bool evaluate(const string &expression) {
    if (expression.empty() || expression[0] == 'f')
        return false;
    bool result = true;
    for (int i = 1; i < expression.length(); i++) {
        if (expression[i] == '|') {
            result |= expression[i + 1];
        } else if (expression[i] == '&') {
            result &= expression[i + 1];
        } else if (expression[i] == '^') {
            result ^= expression[i + 1];
        } else if (expression[i] == '~') {
            result = !result;
        }
    }
    return result && expression != "false";
}