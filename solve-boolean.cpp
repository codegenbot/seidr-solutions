bool evaluateBooleanExpression(std::string expression) {
    int opIndex = -1;
    int parenthesisCount = 0;

    for (int i = expression.length() - 1; i >= 0; i--) {
        if (expression[i] == '(') {
            parenthesisCount--;
        } else if (expression[i] == ')') {
            parenthesisCount++;
        } else if (parenthesisCount == 0 && (expression[i] == '&' || expression[i] == '|')) {
            opIndex = i;
            break;
        }
    }

    if (opIndex != -1) {
        bool left = evaluateBooleanExpression(expression.substr(0, opIndex));

        if (expression[opIndex] == '|') {
            if (left) {
                return true;
            } else {
                return evaluateBooleanExpression(expression.substr(opIndex + 1));
            }
        } else if (expression[opIndex] == '&') {
            if (!left) {
                return false;
            } else {
                return evaluateBooleanExpression(expression.substr(opIndex + 1));
            }
        }
    } else if (expression[0] == 'T' || expression[0] == 't') {
        return true;
    } else if (expression[0] == 'F' || expression[0] == 'f') {
        return false;
    }
    
    return true;
}