bool evaluateBooleanExpression(string expression) {
    bool result = true;
    bool andFlag = true;
    bool orFlag = true;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = orFlag;
        } else if (expression[i] == 'F') {
            result = !andFlag;
        } else if (expression[i] == '|') {
            orFlag = true;
        } else if (expression[i] == '&') {
            andFlag = true;
        }
        i++;
    }
    return result;
}