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
            result = true;
            while(expression.find('&') != string::npos) {
                expression.replace(expression.find('&'), 1, "");
            }
            result &= temp;
        } else if (c == '&') {
            result &= true;
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;