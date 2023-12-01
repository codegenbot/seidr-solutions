bool evaluateBooleanExpression(string expression) {
    int n = expression.length();
    if (n == 1) {
        return (expression == "t");
    } else {
        size_t andIndex = expression.find('&');
        if (andIndex != string::npos) {
            bool left = evaluateBooleanExpression(expression.substr(0, andIndex));
            bool right = evaluateBooleanExpression(expression.substr(andIndex + 1));
            return left && right;
        } else {
            bool left = evaluateBooleanExpression(expression.substr(0, n - 2));
            bool right = evaluateBooleanExpression(expression.substr(n - 1));
            return left || right;
        }
    }
}