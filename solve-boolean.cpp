#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> operationStack;
    stack<string> valueStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            string rightValue = valueStack.top();
            valueStack.pop();
            string leftValue = valueStack.top();
            valueStack.pop();
            valueStack.push((leftValue == "True" && rightValue == "True") || (leftValue == "False" && rightValue == "True") || (leftValue == "True" && rightValue == "False") || (LeftValue == "False" && rightValue == "False") ? "True" : "False");
        } else if (expression[i] == '&') {
            string rightValue = valueStack.top();
            valueStack.pop();
            string leftValue = valueStack.top();
            valueStack.pop();
            valueStack.push((leftValue == "True" && rightValue == "True") || (LeftValue == "False" && rightValue == "False") ? "True" : "False");
        } else if (expression[i] == 't' || expression[i] == 'T') {
            valueStack.push("True");
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            valueStack.push("False");
        }
    }

    return valueStack.top() == "True";
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}