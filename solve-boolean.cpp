#include <iostream>
#include <string>

bool evaluateBooleanExpression(std::string expression) {
    int opIndex = -1;
    int parenthesisCount = 0;

    for (int i = 0; i < expression.length(); i++) {
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
        std::string left = expression.substr(0, opIndex);
        std::string right = expression.substr(opIndex + 1);

        if (expression[opIndex] == '|') {
            return evaluateBooleanExpression(left) || evaluateBooleanExpression(right);
        } else if (expression[opIndex] == '&') {
            return evaluateBooleanExpression(left) && evaluateBooleanExpression(right);
        }
    } else if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    }

    return false;
}

int main() {
    std::string inputExpression;
    std::getline(std::cin, inputExpression);
    
    bool result = evaluateBooleanExpression(inputExpression);
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}