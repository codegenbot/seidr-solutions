#include <iostream>
#include <string>

bool evaluateBooleanExpression(std::string expression) {
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
        std::string left = expression.substr(0, opIndex);
        std::string right = expression.substr(opIndex + 1);

        if (expression[opIndex] == '|') {
            return evaluateBooleanExpression(left) || evaluateBooleanExpression(right);
        } else if (expression[opIndex] == '&') {
            return evaluateBooleanExpression(left) && evaluateBooleanExpression(right);
        }
    } else if (expression[0] == 'T' || expression[0] == 't') {
        if (expression.length() == 1 || expression[1] != '|')
            return true;
    } else if (expression[0] == 'F' || expression[0] == 'f') {
        if (expression.length() == 1 || expression[1] != '&')
            return false;
    }

    return true;
}

int main() {
    std::string inputExpression;
    std::cout << "Enter a boolean expression: ";
    std::getline(std::cin, inputExpression);

    bool result = evaluateBooleanExpression(inputExpression);
    std::cout << "Result: " << result << std::endl;

    return 0;
}