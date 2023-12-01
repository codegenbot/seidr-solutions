#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    int opIndex = -1;
    int parenthesisCount = 0;

    if (expression[0] == '(' && expression[expression.length() - 1] == ')') {
        bool isMatchingParentheses = true;
        for (int i = 1; i < expression.length() - 1; i++) {
            if (expression[i] == '(') {
                parenthesisCount++;
            } else if (expression[i] == ')') {
                parenthesisCount--;
                if (parenthesisCount < 0) {
                    isMatchingParentheses = false;
                    break;
                }
            }
        }
        if (isMatchingParentheses && parenthesisCount == 0) {
            return evaluateBooleanExpression(expression.substr(1, expression.length() - 2));
        }
    }

    for (int i = expression.length() - 1; i >= 0; i--) {
        if (expression[i] == '(') {
            parenthesisCount--;
        } else if (expression[i] == ')') {
            parenthesisCount++;
        } else if ((expression[i] == '|' || expression[i] == '&') && parenthesisCount == -1) {
            opIndex = i;
            break;
        }
    }

    if (opIndex != -1) {
        bool left = evaluateBooleanExpression(expression.substr(0, opIndex));
        bool right = evaluateBooleanExpression(expression.substr(opIndex + 1));

        switch (expression[opIndex]) {
            case '|':
                return left || right;
            case '&':
                return left && right;
        }
    } else if (expression == "t" || expression == "T") {
        return true;
    } else if (expression == "f" || expression == "F") {
        return false;
    }

    return false;
}

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}