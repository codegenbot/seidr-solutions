#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    int opIndex = -1;
    int parenthesisCount = 0;

    for (int i = expression.length() - 1; i >= 0; i--) {
        if (expression[i] == '(') {
            parenthesisCount++;
        } else if (expression[i] == ')') {
            parenthesisCount--;
        } else if ((expression[i] == '|' || expression[i] == '&') && parenthesisCount == 0) {
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
    } else {
        if (expression == "t") {
            return true;
        } else if (expression == "f") {
            return false;
        }
    }

    return false;
}

int main() {
    std::string expression;
    std::getline(std::cin, expression);

    bool result = evaluateBooleanExpression(expression);

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}