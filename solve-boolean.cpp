```
#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    stack<char> operation;
    stack<string> operands;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(') {
            operation.push('(');
        } else if (expression[i] == ')') {
            while (operation.top() != '(') {
                char op = operation.top();
                operation.pop();
                string operand1 = operands.top();
                operands.pop();
                string operand2;
                if (!op.equals("&")) {
                    operand2 = operand1;
                    operand1 = "";
                }
                while (!operation.empty() && operation.top() != '(') {
                    op = operation.top();
                    operation.pop();
                    operand1 += (op == "&" ? " & " : " | ");
                }
                operands.push(operand1);
            }
            operation.pop(); // Pop the '('
        } else if (expression[i] == '&' || expression[i] == '|') {
            while (!operation.empty() && operation.top() != '(') {
                char op = operation.top();
                operation.pop();
                string operand1 = operands.top();
                operands.pop();
                string operand2;
                if (!op.equals("&")) {
                    operand2 = operand1;
                    operand1 = "";
                }
                operands.push(operand1);
            }
            operation.push(expression[i]);
        } else {
            string operand = "";
            while (i < expression.length() && expression[i] != '&' && expression[i] != '|') {
                operand += expression[i];
                i++;
            }
            i--; // Backtrack
            operands.push(operand);
        }
    }

    return (operands.top().compare("T") == 0) ? true : false;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << std::endl;
    } else {
        cout << "False" << std::endl;
    }
    return 0;
}