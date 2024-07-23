#include <iostream>
#include <stack>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operators;
    string operand = "";
    int i = 0; 

    for (i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
            }
            if (!operand.empty()) {
                return operand == "T";
            }
            operand = "";
        } else if (expression[i] == '|') {
            while (!operators.empty()) operators.pop();
            if (!operand.empty()) {
                return operand == "T";
            }
            operand = "";
        } else if (expression[i] == 't' || expression[i] == 'f') {
            if (!operators.empty() && ((expression[i] == 't' && operators.top() == '|') ||
                                        (expression[i] == 'f' && operators.top() == '&'))) {
                while (!operators.empty()) operators.pop();
            }
            operand += (expression[i] == 't'? "T" : "F");
        } else if (expression[i] == '(') {
            operators.push(expression[i]);
        } else if (expression[i] == ')') {
            while (operators.top() != '(') {
                if (operators.top() == '|') {
                    while (!operators.empty() && operators.top() == '|') {
                        operators.pop();
                    }
                    return operand == "T";
                } else if (operators.top() == '&') {
                    while (!operators.empty()) operators.pop();
                    return operand == "F";
                }

                operand = "False";
                operators.pop();
            }
            operators.pop();
        }
    }

    while (!operators.empty()) {
        if (operators.top() == '|') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
            }
            return operand == "T";
        } else if (operators.top() == '&') {
            while (!operators.empty()) operators.pop();
            return operand == "F";
        }

        operand = "False";
        operators.pop();
    }

    return operand == "True";
}

int main() {
    string expression;
    cout << "Enter Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}