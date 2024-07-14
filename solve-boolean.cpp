#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    stack<bool> valueStack;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            bool b1 = valueStack.top();
            valueStack.pop();
            bool b2 = valueStack.top();
            valueStack.pop();
            valueStack.push(b1 & b2);
        } else if (expression[i] == '|') {
            bool b1 = valueStack.top();
            valueStack.pop();
            bool b2 = valueStack.top();
            valueStack.pop();
            valueStack.push(b1 | b2);
        } else if (expression[i] == 'T') {
            valueStack.push(true);
        } else if (expression[i] == 'F') {
            valueStack.push(false);
        }
    }

    return valueStack.top();
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}