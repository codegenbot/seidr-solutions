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

    int start = 0, end = 0;
    while ((end = expression.find('|', start)) != string::npos) {
        string left = expression.substr(start, end - start);
        string right = expression.substr(end + 1);

        if (solveBoolean(left) && solveBoolean(right))
            return true;

        start = end + 1;
    }

    while ((end = expression.find('&', start)) != string::npos) {
        string left = expression.substr(start, end - start);
        string right = expression.substr(end + 1);

        if (solveBoolean(left) && solveBoolean(right))
            return true;

        start = end + 1;
    }

    if (start < expression.size()) {
        string last = expression.substr(start);

        if (last.size() > 0 && (last[0] == 'T' || last[0] == 't'))
            return true;

        return false;
    }

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