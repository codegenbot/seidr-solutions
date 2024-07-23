#include <iostream>
#include <stack>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<string> operands;
    stack<char> operators;
    string operand = "";
    int i = 0; 

    for (i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
            }
            if (!operand.empty()) {
                return operand == "True";
            }
        } else if (expression[i] == '|') {
            while (!operators.empty()) operators.pop();
            if (!operand.empty()) {
                return operand == "True";
            }
        } else if (expression[i] == 't' || expression[i] == 'f') {
            if (!operators.empty() && ((expression[i] == 't' && operators.top() == '|') ||
                                        (expression[i] == 'f' && operators.top() == '&'))) {
                while (!operators.empty()) operators.pop();
            }
            operand += (expression[i] == 't'? "T" : "F");
        } else if (expression[i] == '(') {
            operators.push("(");
        } else if (expression[i] == ')') {
            while (operators.top() != "(") {
                string op = "";
                op = (operators.top() == '&' ? "and" : "or");
                operand += " " + op;
                operators.pop();
            }
            operators.pop();
            return (operand == "T and True" || operand == "T or True") ? true : false;
        } else {
            if (!operand.empty()) {
                string op = "";
                op = (expression[i] == '&' ? "and" : "or");
                operands.push(op);
            }
        }
    }

    while (!operators.empty()) {
        string op = "";
        op = (operators.top() == '&' ? "and" : "or");
        operand += " " + op;
        operators.pop();
    }

    return true;
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