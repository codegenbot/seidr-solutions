#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char operation = expression[1];
        bool operand1 = expression[0] == 't';
        bool operand2 = expression[2] == 't';
        if (operation == '&') {
            return operand1 && operand2;
        } else if (operation == '|') {
            return operand1 || operand2;
        }
    }
    return false;
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}