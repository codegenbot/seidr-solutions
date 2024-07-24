#include <string>
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == 't') {
            result = true;
        } else if (expression[i] == 'f') {
            return false;
        } else if (expression[i] == '|') {
            bool temp = result;
            i++;
            while (i < expression.length() && expression[i] != '&') {
                if (expression[i] == 't')
                    result = true;
                else
                    result = false;
                i++;
            }
            if (i < expression.length()) {
                i++;
                if (expression[i] == 't')
                    result |= temp;
                else
                    result &= temp;
            }
        } else if (expression[i] == '&') {
            bool temp = result;
            i++;
            while (i < expression.length() && expression[i] != '|') {
                if (expression[i] == 't')
                    result &= true;
                else
                    result &= false;
                i++;
            }
            if (i < expression.length()) {
                i++;
                if (expression[i] == 't')
                    result |= temp;
                else
                    result &= temp;
            }
        } else {
            i++;
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;