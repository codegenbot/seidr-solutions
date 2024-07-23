bool solveBoolean(string expression) {
    bool res = true;
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == 'f') {
            res = false;
            break;
        } else if (expression[i] == '&') {
            res = false;
        }
    }
    return res;
}