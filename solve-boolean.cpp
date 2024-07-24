#include <string>
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (char c : expression) {
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            return false;
        } else if (c == '|') {
            bool temp = result;
            result = false;
            for (;expression.find('&') != string::npos; expression.erase(expression.find('&'), 1)) {
                result |= !result & (expression[0] == 't');
            }
            result = temp | result;
        } else if (c == '&') {
            bool temp = result;
            result = true;
            for (;expression.find('|') != string::npos; expression.erase(expression.find('|'), 1)) {
                result &= !result || (expression[0] == 't');
            }
            result = temp & result;
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;