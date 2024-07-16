```cpp
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == 'f' || expression[i] == 'F') {
            result = false;
            break;
        } else if (expression[i] == '|') {
            bool temp = !result;
            result = true;
            i++;
            while (i < expression.length() && expression[i] != '&') i++;
            if (i < expression.length()) i++;
        } else if (expression[i] == '&') {
            bool temp = result;
            result = false;
            i++;
            while (i < expression.length() && expression[i] != '|') i++;
            if (i < expression.length()) i++;
            result = temp;
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