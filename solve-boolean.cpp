bool solveBoolean(string expression) {
    bool result = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 't') {
            result = true;
            break;
        } else if (expression[i] == 'f') {
            return false;
        }
    }
    return result;
}