#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression, bool isEnclosed) {
    if (expression.length() == 1) {
        if (expression[0] == 'T') {
            return isEnclosed;
        } else if (expression[0] == 'F') {
            return false;
        }
    }

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
        } else if (expression[i] == 'F' && parenthesisCount == 0) {
            return false;
        }
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

    return isEnclosed;
}

int main() {
    std::string expression;
    std::getline(std::cin, expression);
    
    bool result = evaluateBooleanExpression(expression, false);
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}