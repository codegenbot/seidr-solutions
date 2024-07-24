```cpp
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression.size() > 0) {
        if (expression[0] == 'T' || expression[0] == 't')
            return true;
        else if (expression[0] == 'F' || expression[0] == 'f')
            return false;
    }

    int pos = expression.find('|');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (solveBoolean(left) && solveBoolean(right))
            return true;

        expression = right;
        pos = expression.find('|');
    }

    pos = expression.find('&');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (solveBoolean(left) && solveBoolean(right))
            return true;

        expression = right;
        pos = expression.find('&');
    }

    if (expression.size() > 0 && (expression[0] == 'T' || expression[0] == 't'))
        return true;

    return false;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}