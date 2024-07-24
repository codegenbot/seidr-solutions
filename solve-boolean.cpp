#include <string>

bool solveBoolean(std::string booleanExpression) {
    std::stack<char> operatorStack;
    std::stack<std::string> operandStack;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|' || booleanExpression[i] == '&') {
            std::string rightOperand = operandStack.top();
            operandStack.pop();
            std::string leftOperand = operandStack.top();
            operandStack.pop();

            if (booleanExpression[i] == '|') {
                operandStack.push((leftOperand == "T" || rightOperand == "T") ? "T" : "F");
            } else if (booleanExpression[i] == '&') {
                operandStack.push((leftOperand == "T" && rightOperand == "T") ? "T" : "F");
            }
        } else if (booleanExpression[i] != ' ') {
            std::string operand;
            while (i < booleanExpression.length() && booleanExpression[i] != ' ' && booleanExpression[i] != '|' && booleanExpression[i] != '&') {
                operand += booleanExpression[i];
                i++;
            }
            i--;
            operandStack.push(operand);
        }
    }

    return (operandStack.top() == "T");
}