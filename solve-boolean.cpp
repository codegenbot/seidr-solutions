#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t" || expression == "T") return true;
    if (expression == "f" || expression == "F") return false;

    int i = 0;
    while (i < expression.length() && (expression[i] != '&' && expression[i] != '|')) i++;

    string leftExpr = expression.substr(0, i);
    string rightExpr = expression.substr(i + 1);

    if (expression[i] == '&') {
        return evaluateBooleanExpression(leftExpr) && evaluateBooleanExpression(rightExpr);
    } else {
        return evaluateBooleanExpression(leftExpr) || evaluateBooleanExpression(rightExpr);
    }
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;

    bool result = evaluateBooleanExpression(input);

    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}