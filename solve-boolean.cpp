#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == 'T') {
            return true;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '|') {
            result = true;
        } else if (expression[i] == '&') {
            result = false;
        }
        i++;
    }
    return result;
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