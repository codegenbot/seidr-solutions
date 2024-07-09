#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == '&') {
            i++;
            bool a = (expression[i] == 't');
            i++;
            bool b = (expression[i] == 't');
            i++;
            return a && b;
        } else if (expression[i] == '|') {
            i++;
            bool a = (expression[i] == 't');
            i++;
            bool b = true;
            while (i < expression.length() && expression[i] != '&') i++;
            for (; i < expression.length(); i++) {
                if (expression[i] == 't') b = true;
                else b = false;
            }
            return a || b;
        } else if (expression[i] == 'f' || expression[i] == 't') {
            i++;
            return expression[i - 1] == 't';
        }
    }
    return true; // default to True
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;
}