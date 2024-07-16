#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'f') {
            result = false;
            break;
        }
        else if ((expression[i] == '|') || (expression[i] == '&')) {
            return false;
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}