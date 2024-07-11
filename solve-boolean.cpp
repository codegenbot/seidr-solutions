bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T') {
            return true;
        }
        else if (expression[i] == 'F') {
            return false;
        }
        else if (expression[i] == '|') {
            result = true;
        }
        else if (expression[i] == '&') {
            result = false;
        }
    }
    return result;
}