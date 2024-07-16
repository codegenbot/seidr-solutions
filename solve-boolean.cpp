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
            return false;
        } else if (expression[i] == '|') {
            result = true;
            i++;
            while (i < expression.length() && expression[i] != '&') {
                i++;
            }
        } else if (expression[i] == '&') {
            bool temp = result;
            i++;
            while (i < expression.length() && expression[i] != '|') {
                i++;
            }
            result = temp && !bool(expression.substr(i));
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