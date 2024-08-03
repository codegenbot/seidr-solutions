#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == 't') {
            return true;
        } else if (expression[i] == 'f') {
            return false;
        } else if (expression[i] == '|') {
            i++; // skip the '|' character
            bool left = evaluateBooleanExpression(expression.substr(i));
            i++; // skip the '&' character
            bool right = evaluateBooleanExpression(expression.substr(i));
            return left || right;
        } else if (expression[i] == '&') {
            i++; // skip the '&' character
            bool left = evaluateBooleanExpression(expression.substr(i));
            i++; // skip the '&' character
            bool right = evaluateBooleanExpression(expression.substr(i));
            return left && right;
        }
        i++;
    }
    return false; // default to False if no expression is found
}

int main() {
    string input;
    cin >> input;
    cout << (evaluateBooleanExpression(input) ? "True" : "False") << endl;
    return 0;
}