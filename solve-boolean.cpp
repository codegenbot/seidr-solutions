bool evaluateBooleanExpression(const std::string& expression) {
    int opIndex = -1;
    int parenthesisCount = 0;

    for (int i = expression.length() - 1; i >= 0; i--) {
        if (expression[i] == '(') {
            parenthesisCount--;
        } else if (expression[i] == ')') {
            parenthesisCount++;
        } else if ((expression[i] == '|' || expression[i] == '&') && parenthesisCount == 0) {
            opIndex = i;
            break;
        }
    }
    
    if (opIndex != -1) {
        bool left = evaluateBooleanExpression(expression.substr(0, opIndex));

        if (expression[opIndex] == '|') {
            if (left) {
                return true;
            }
        } else if (expression[opIndex] == '&') {
            if (!left) {
                return false;
            }
        }

        bool right = evaluateBooleanExpression(expression.substr(opIndex + 1, expression.length() - opIndex - 1));
        return right;
    } else if (expression == "T" || expression == "t" || expression == "true") {
        return true;
    } else if (expression == "F" || expression == "f" || expression == "false") {
        return false;
    }

    return true;
}