#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    std::stack<char> operationStack;
    std::stack<std::string> valueStack;

    std::string boolExpression;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            std::string rightValue = valueStack.top();
            valueStack.pop();
            std::string leftValue = valueStack.top();
            valueStack.pop();
            valueStack.push(std::to_string((leftValue == "True" && rightValue == "True") || (leftValue == "False" && rightValue == "True") || (leftValue == "True" && rightValue == "False") || (leftValue == "False" && rightValue == "False")).c_str());
        } else if (expression[i] == '&') {
            std::string rightValue = valueStack.top();
            valueStack.pop();
            std::string leftValue = valueStack.top();
            valueStack.pop();
            valueStack.push(std::to_string((leftValue == "True" && rightValue == "True") || (leftValue == "False" && rightValue == "False")).c_str());
        } else if (expression[i] == 't' || expression[i] == 'T') {
            valueStack.push("True");
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            valueStack.push("False");
        }
    }

    return valueStack.top() == "True";
}

int main() {
    std::string boolExpression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> boolExpression;
    bool result = solveBoolean(boolExpression);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}