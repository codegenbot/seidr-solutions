#include <iostream>
#include <string>
#include <algorithm>

bool evaluateBooleanExpression(std::string expression, bool isEnclosed) {
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
        } else if ((expression[i] == '&' || expression[i] == '|') && parenthesisCount == 0) {
            opIndex = i;
            break;
        }
    }

    if (expression == "T") {
        return !isEnclosed;
    } else if (expression == "F") {
        return false;
    }

    if (opIndex != -1) {
        std::string left = expression.substr(0, opIndex);
        std::string right = expression.substr(opIndex + 1);

        if (expression[opIndex] == '&') {
            bool leftResult = evaluateBooleanExpression(left, false);
            bool rightResult = evaluateBooleanExpression(right, false);
            return leftResult && rightResult;
        } else if (expression[opIndex] == '|') {
            return evaluateBooleanExpression(left, false) || evaluateBooleanExpression(right, false);
        }
    }

    return !isEnclosed;
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::getline(std::cin, expression);

    expression.erase(std::remove_if(expression.begin(), expression.end(), isspace), expression.end());

    bool result = evaluateBooleanExpression(expression, false);

    std::cout << "Result: " << (result ? "T" : "F") << std::endl;

    return 0;
}