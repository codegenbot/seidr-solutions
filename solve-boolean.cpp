string solveBoolean(string booleanExpression) {
    bool result = true;
    for (char c : booleanExpression) {
        if (c == 'f') {
            result = false;
            break;
        }
        else if (c == '&') {
            continue;
        }
        else if (c == '|') {
            result = true;
            break;
        }
    }
    return result ? "True" : "False";
}