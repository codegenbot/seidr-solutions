#include <string>
#include <iostream>
#include <cmath>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            result |= solveBoolean(expression.substr(i + 1));
        } else if (expression[i] == '&') {
            result &= solveBoolean(expression.substr(i + 1));
        } else if (expression[i] == 'T') {
            result = true;
        } else if (expression[i] == 'F') {
            result = false;
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << solveBoolean(expression) << endl;
    return 0;
}