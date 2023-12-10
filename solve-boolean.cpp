#include <string>
#include <iostream>
#include <cstring>
using namespace std;

bool evaluate(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            result |= evaluate(expression.substr(i + 1));
        } else if (expression[i] == '&') {
            result &= evaluate(expression.substr(i + 1));
        } else if (expression[i] == 't') {
            result = true;
        } else if (expression[i] == 'f') {
            result = false;
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << evaluate(expression) << endl;
    return 0;
}