```cpp
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
            result = false;
            break;
        } else if (expression[i] == '|') {
            i++;
            bool temp = !result;
            while (i < expression.length() && expression[i] != '&') {
                i++;
            }
            result = temp;
        } else if (expression[i] == '&') {
            i++;
            bool temp = false;
            while (i < expression.length() && expression[i] != '|') {
                if (expression[i] == 'T') {
                    temp = true;
                    break;
                } else if (expression[i] == 'F') {
                    break;
                }
                i++;
            }
            result = result && temp;
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