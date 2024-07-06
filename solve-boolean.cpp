bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            result = false;
            break;
        } else if (expression[i] == '&') {
            result = true;
            break;
        }
    }
    return result;
}