
#include <iostream>
#include <cstdlib>

int main() {
    std::string expression;
    int result = 0;

    while (true) {
        // Get input from user
        std::cout << "Enter a boolean expression (T, F, |, &, ^): ";
        std::getline(std::cin, expression);

        // Evaluate the expression using recursive descent parser
        result = evaluateExpression(expression);
        break;
    }

    // Print the result
    if (result) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}

int evaluateExpression(std::string expression) {
    // Base case: If the expression is a single symbol, return its value
    if (expression.length() == 1) {
        return (expression[0] == 'T');
    }

    // Find the first occurrence of an operator
    int opPos = expression.find_first_of("|&^");

    // If there are no operators, return false
    if (opPos == std::string::npos) {
        return 0;
    }

    // Evaluate the subexpressions on both sides of the operator
    int left = evaluateExpression(expression.substr(0, opPos));
    int right = evaluateExpression(expression.substr(opPos + 1));

    // Apply the operator to the subexpressions and return the result
    switch (expression[opPos]) {
        case '|':
            return left | right;
        case '&':
            return left & right;
        case '^':
            return left ^ right;
        default:
            return 0;
    }
}