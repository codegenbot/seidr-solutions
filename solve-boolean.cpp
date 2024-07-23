#include <iostream>
#include <stack>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operators;
    stack<string> operands;
    string operand = "";
    int i = 0; 

    for (i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
            }
            if (!operand.empty()) {
                operands.push(operand);
                operand = "";
                return (operands.top() == "True") && true;
            }
        } 
        else if (expression[i] == '|') {
            while (!operators.empty()) operators.pop();
            if (!operand.empty()) {
                operands.push(operand);
                operand = "";
                return (operands.top() == "True");
            }
        } 
        else if (expression[i] == 't' || expression[i] == 'f') {
            if (!operators.empty() && ((expression[i] == 't' && operators.top() == '|') ||
                                        (expression[i] == 'f' && operators.top() == '&'))) {
                while (!operators.empty()) operators.pop();
            }
            operand += (expression[i] == 't'? "T" : "F");
        } 
        else if (expression[i] == '(') {
            operators.push(expression[i]);
        } 
        else if (expression[i] == ')') {
            while (operators.top() != '(') {
                if (expression[i] == '|') {
                    while (!operators.empty() && operators.top() == '|') {
                        operators.pop();
                    }
                    if (!operand.empty()) {
                        operands.push(operand);
                        operand = "";
                        return (operands.top() == "True");
                    }
                } 
                else if (expression[i] == '&') {
                    while (!operators.empty()) operators.pop();
                    if (!operand.empty()) {
                        operands.push(operand);
                        operand = "";
                        return (operands.top() == "True");
                    }
                }

                operators.pop();
            }
            operators.pop();
        }
    }

    while (!operators.empty()) {
        if (expression[i] == '|') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
            }
            if (!operand.empty()) {
                operands.push(operand);
                operand = "";
                return (operands.top() == "True");
            }
        } 
        else if (expression[i] == '&') {
            while (!operators.empty()) operators.pop();
            if (!operand.empty()) {
                operands.push(operand);
                operand = "";
                return (operands.top() == "True");
            }
        }

        operators.pop();
    }

    if (!operand.empty())
        return operand == "T";

    return true;
}

int main() {
    string expression;
    cout << "Enter a boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "The result is True." << endl;
    } else {
        cout << "The result is False." << endl;
    }
    return 0;
}