#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == 'T') {
            i++;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '&') {
            i += 2;
        } else if (expression[i] == '|') {
            while (i < expression.length() && (expression[i] == '&' || expression[i] == '|')) {
                i++;
            }
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