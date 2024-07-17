bool solveBoolean(string expression) {
    stack<char> operation;
    bool result = true;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            result = (result || true);
        } else if (expression[i] == '&') {
            result = (result && false);
        } else if (expression[i] == 'T' || expression[i] == 't') {
            result = true;
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            result = false;
        }
    }

    return result;
}