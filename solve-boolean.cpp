#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operationStack.empty() && operationStack.top() == '|') {
                operationStack.pop();
            }
        } else if (expression[i] == '|') {
            operationStack.push(expression[i]);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            char result = expression[i];
            while (!operationStack.empty() && operationStack.top() != '&') {
                operationStack.pop();
            }
            if (!operationStack.empty()) {
                result = operationStack.top() == '&' ? (result == 'T' ? 'F' : 'T') : result;
                operationStack.pop();
            }
        }
    }
    return expression[0] == 'T';
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