#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T' || expression[i] == 't') {
            operandStack.push("True");
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            operandStack.push("False");
        } else if (expression[i] == '&') {
            operatorStack.push('&');
        } else if (expression[i] == '|') {
            operatorStack.push('|');
        }
    }

    while (!operatorStack.empty()) {
        string op2 = operandStack.top();
        operandStack.pop();
        string op1 = operandStack.top();
        operandStack.pop();

        char op = operatorStack.top();
        operatorStack.pop();

        if (op == '&') {
            operandStack.push((op1 == "True" && op2 == "True") ? "True" : "False");
        } else {
            operandStack.push((op1 == "True" || op2 == "True") ? "True" : "False");
        }
    }

    return (operandStack.top() == "True");
}

int main() {
    string expression;
    cin >> expression;

    cout << evaluateBooleanExpression(expression);

    return 0;
}