#include <vector>
#include <iostream>
#include <string>

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                char op = operatorStack.top();
                operatorStack.pop();
                string rightOperand = operandStack.top();
                operandStack.pop();
                string leftOperand = "";
                if (!operandStack.empty()) {
                    leftOperand = operandStack.top();
                    operandStack.pop();
                }
                if (op == '&') {
                    operandStack.push(to_string((leftOperand == "True" && rightOperand == "True") ? "True" : "False"));
                } else {
                    operandStack.push(to_string((leftOperand == "True" || rightOperand == "True") ? "True" : "False"));
                }
            }
            operatorStack.push(expression[i]);
        } else if (expression[i] == '(') {
            operatorStack.push(expression[i]);
        } else if (expression[i] == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '&') {
                char op = operatorStack.top();
                operatorStack.pop();
                string rightOperand = operandStack.top();
                operandStack.pop();
                string leftOperand = "";
                if (!operandStack.empty()) {
                    leftOperand = operandStack.top();
                    operandStack.pop();
                }
                if (op == '|') {
                    operandStack.push(to_string((leftOperand == "True" || rightOperand == "True") ? "True" : "False"));
                } else {
                    operandStack.push(to_string((leftOperand == "True" && rightOperand == "True") ? "True" : "False"));
                }
            }
            operatorStack.pop();
        } else {
            string operand = "";
            while (i < expression.length() && expression[i] != '&' && expression[i] != '|') {
                operand += expression[i];
                i++;
            }
            if (operand == "t") {
                operandStack.push("True");
            } else if (operand == "f") {
                operandStack.push("False");
            }
        }
    }

    return operandStack.top() == "True";
}