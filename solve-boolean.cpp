```cpp
#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    std::stack<char> operationStack;
    std::stack<std::string> valueStack;

    std::string inputExpression = expression;
    int i = 0;

    while (i < inputExpression.length()) {
        if (inputExpression[i] == '|') {
            std::string rightValue = valueStack.top();
            valueStack.pop();
            std::string leftValue = valueStack.top();
            valueStack.pop();
            valueStack.push((leftValue == "True" && rightValue == "True") || (leftValue == "False" && rightValue == "True") || (leftValue == "True" && rightValue == "False") || (leftValue == "False" && rightValue == "False") ? "True" : "False");
        } else if (inputExpression[i] == '&') {
            std::string rightValue = valueStack.top();
            valueStack.pop();
            std::string leftValue = valueStack.top();
            valueStack.pop();
            valueStack.push((leftValue == "True" && rightValue == "True") || (leftValue == "False" && rightValue == "False") ? "True" : "False");
        } else if ((inputExpression[i] == 't' || inputExpression[i] == 'T') || (inputExpression[i] == 'f' || inputExpression[i] == 'F')) {
            valueStack.push(inputExpression[i] == 't' || inputExpression[i] == 'T' ? "True" : "False");
        }
        i++;
    }

    return valueStack.top() == "True";
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}