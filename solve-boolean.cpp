#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            while (!operatorStack.empty() && expression[i-1] != '(') {
                char op = operatorStack.top();
                operatorStack.pop();
                string operand2 = operandStack.top();
                operandStack.pop();
                string operand1 = operandStack.top();
                operandStack.pop();
                string result = (op == '&') ? (operand1 + " && " + operand2) : (operand1 + " || " + operand2);
                operandStack.push(result);
            }
            operatorStack.push(expression[i]);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string operand = "";
            while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F')) {
                operand += expression[i];
                i++;
            }
            i--;
            operandStack.push(operand);
        } else if (expression[i] == '(') {
            operatorStack.push(expression[i]);
        } else if (expression[i] == ')') {
            while (operatorStack.top() != '(') {
                char op = operatorStack.top();
                operatorStack.pop();
                string operand2 = operandStack.top();
                operandStack.pop();
                string operand1 = operandStack.top();
                operandStack.pop();
                string result = (op == '&') ? (operand1 + " && " + operand2) : (operand1 + " || " + operand2);
                operandStack.push(result);
            }
            operatorStack.pop(); // pop the '('
        }
    }

    return (operandStack.top() == "T");
}