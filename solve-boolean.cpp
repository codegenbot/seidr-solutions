#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == 'f') {
            result = false;
            break;
        }
        else if (expression[i] == '|') {
            if (expression[i + 1] != '\0' && expression[i + 2] != '\0') {
                bool temp = solveBoolean(expression.substr(i + 1));
                if (!temp) {
                    result = false;
                    break;
                }
            } else {
                return false;
            }
        }
        else if (expression[i] == '&') {
            if (expression[i + 1] != '\0' && expression[i + 2] != '\0') {
                bool temp = solveBoolean(expression.substr(i + 1));
                if (temp) {
                    result = true;
                    break;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        i++;
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