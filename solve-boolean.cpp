#include <vector>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|') {
            string rightOperand = operandStack.top();
            operandStack.pop();
            string leftOperand = operandStack.top();
            operandStack.pop();
            operandStack.push((leftOperand == "T" || rightOperand == "T") ? "T" : "F");
        } else if (booleanExpression[i] == '&') {
            string rightOperand = operandStack.top();
            operandStack.pop();
            string leftOperand = operandStack.top();
            operandStack.pop();
            operandStack.push((leftOperand == "T" && rightOperand == "T") ? "T" : "F");
        } else if (booleanExpression[i] != ' ') {
            string operand;
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

int main() {
    string booleanExpression;
    cout << "Enter Boolean expression: ";
    cin >> booleanExpression;
    bool result = solveBoolean(booleanExpression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}