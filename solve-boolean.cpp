#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(string expression) {
    stack<char> operationStack;
    stack<string> valueStack;

    string boolExpression;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            string rightValue = valueStack.top();
            valueStack.pop();
            string leftValue = valueStack.top();
            valueStack.pop();
            valueStack.push((leftValue == "True" && rightValue == "True") || (leftValue == "False" && rightValue == "True") || (leftValue == "True" && rightValue == "False") || (LeftValue == "False" && RightValue == "False") ? "True" : "False");
        } else if (expression[i] == '&') {
            string rightValue = valueStack.top();
            valueStack.pop();
            string leftValue = valueStack.top();
            valueStack.pop();
            valueStack.push((leftValue == "True" && rightValue == "True") || (LeftValue == "False" && RightValue == "False") ? "True" : "False");
        } else if (expression[i] == 't' || expression[i] == 'T') {
            valueStack.push("True");
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            valueStack.push("False");
        }
    }

    return valueStack.top() == "True";
}

int main() {
    string expression;
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