bool solveBoolean(string expression) {
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == 'T') return true;
        if (expression[i] == 'F') return false;
        if (expression[i] == '|') {
            bool a = expression[i+1] == 'T', b = expression[i+3] == 'T';
            i += 4;
            return a || b;
        }
        if (expression[i] == '&') {
            bool a = expression[i+1] == 'T', b = expression[i+3] == 'T';
            i += 4;
            return a && b;
        }
        i++;
    }
    return false; // should not reach here
}