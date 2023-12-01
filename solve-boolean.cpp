#include <string>

bool evaluateBooleanExpression(std::string expression, bool isEnclosed = false) {
    int opIndex = -1;
    int parenthesisCount = 0;

    for (int i = expression.length() - 1; i >= 0; i--) {
        if (expression[i] == '(') {
            parenthesisCount++;
            if (parenthesisCount == 1 && !isEnclosed) {
                return evaluateBooleanExpression(expression.substr(i + 1, expression.length() - i - 2), true);
            }
        } else if (expression[i] == ')') {
            parenthesisCount--;
            if (parenthesisCount > 0) {
                continue;
            }
        } else if ((expression[i] == '|' || expression[i] == '&') && parenthesisCount == 0) {
            opIndex = i;
            break;
        }
    }

    if (expression == "t") {
        return !isEnclosed;
    } else if (expression == "f") {
        return false;
    }

    if (opIndex != -1) {
        std::string left = expression.substr(0, opIndex);
        std::string right = expression.substr(opIndex + 1);

        if (expression[opIndex] == '|') {
            bool leftResult = evaluateBooleanExpression(left);
            bool rightResult = evaluateBooleanExpression(right);
            return leftResult || rightResult;
        } else if (expression[opIndex] == '&') {
            return evaluateBooleanExpression(left) && evaluateBooleanExpression(right);
        }
    }

    return !isEnclosed;
}