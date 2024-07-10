bool solveBoolean(string booleanExpression) {
    if (booleanExpression == "T") return true;
    if (booleanExpression == "F") return false;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            string left = booleanExpression.substr(0, i);
            string right = booleanExpression.substr(i + 1);

            return solveBoolean(left) && solveBoolean(right);
        }
        else if (booleanExpression[i] == '|') {
            string left = booleanExpression.substr(0, i);
            string right = booleanExpression.substr(i + 1);

            return solveBoolean(left) || solveBoolean(right);
        }
    }

    return false;
}