#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1 + " & " + operand2));
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty() && opStack.top() == '&') {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1 + " | " + operand2));
            }
            opStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valStack.push("True");
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valStack.push("False");
        }
    }

    return valStack.top() == "True";
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}