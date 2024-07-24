#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    if(expression == "T") return true;
    if(expression == "F") return false;

    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);

            bool leftResult = solveBoolean(left);
            bool rightResult = solveBoolean(right);

            return leftResult || rightResult;
        }
    }

    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);

            bool leftResult = solveBoolean(left);
            bool rightResult = solveBoolean(right);

            return leftResult && rightResult;
        }
    }

    return false; // default to False if no operator found
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> expression;

    if(solveBoolean(expression)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}