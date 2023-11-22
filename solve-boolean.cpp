#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left, right;
        int i = 0;
        while (i < expression.length() && expression[i] != '&' && expression[i] != '|') {
            i++;
        }
        left = evaluateBooleanExpression(expression.substr(0, i));
        right = evaluateBooleanExpression(expression.substr(i + 1));

        if (expression[i] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;

    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}