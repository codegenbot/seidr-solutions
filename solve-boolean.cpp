bool solveBoolean(string expression) {
    bool res = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            res &= (expression[i+1] == 'T');
            i++;
        } else if (expression[i] == '|') {
            res |= (expression[i+1] == 'T');
            i++;
        }
    }
    return res;
}