#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> ops;
    stack<bool> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T' || expression[i] == 't') {
            values.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            values.push(false);
        } else if (expression[i] == '&') {
            bool right = values.top();
            values.pop();
            bool left = values.top();
            values.pop();

            values.push(left && right);
        } else if (expression[i] == '|') {
            bool right = values.top();
            values.pop();
            bool left = values.top();
            values.pop();

            values.push(left || right);
        }
    }

    return values.top();
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}