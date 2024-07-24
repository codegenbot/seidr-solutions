bool solveBoolean(string booleanExpression) {
    if (booleanExpression == "t") return true;
    if (booleanExpression == "f") return false;

    for (int i = 0; i < booleanExpression.length(); ++i) {
        char op = booleanExpression[i];
        string left = booleanExpression.substr(0, i);
        string right = booleanExpression.substr(i + 1);

        if (op == '&') {
            return solveBoolean(left) && solveBoolean(right);
        } else if (op == '|') {
            return solveBoolean(left) || solveBoolean(right);
        }
    }

    return false;
}