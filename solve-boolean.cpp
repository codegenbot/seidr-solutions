#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBooleanExpression(expression.substr(0, expression.find('&')));
        bool right = evaluateBooleanExpression(expression.substr(expression.find('&') + 1));
        return left && right;
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}