#include <vector>
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const string& expression) {
    bool result = true;
    for (char c : expression) {
        if (c == '&') {
            result &= false;
        } else if (c == '|') {
            result |= false;
        } else if (c == 'T' || c == 't') {
            result = true;
        } else if (c == 'F' || c == 'f') {
            result = false;
        }
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