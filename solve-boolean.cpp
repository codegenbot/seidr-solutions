#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left, right;
        bool isAndOperator = false;
        bool isOrOperator = false;
        int operatorIndex = -1;

        for (int i = 0; i < expression.length(); i++) {
            if (expression[i] == '&') {
                isAndOperator = true;
                operatorIndex = i;
                break;
            } else if (expression[i] == '|') {
                isOrOperator = true;
                operatorIndex = i;
                break;
            }
        }

        if (isAndOperator) {
            left = evaluateBooleanExpression(expression.substr(0, operatorIndex));
            right = evaluateBooleanExpression(expression.substr(operatorIndex + 1));
            return left && right;
        } else if (isOrOperator) {
            left = evaluateBooleanExpression(expression.substr(0, operatorIndex));
            right = evaluateBooleanExpression(expression.substr(operatorIndex + 1));
            return left || right;
        }
    }

    return false;
}

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}