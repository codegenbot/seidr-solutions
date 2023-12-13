#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        char operation = expression[1];
        bool left = evaluateBoolean(expression.substr(0, 1));
        bool right = evaluateBoolean(expression.substr(2));

        if (operation == '&') {
            return left && right;
        } else if (operation == '|') {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBoolean(expression) ? "True" : "False") << endl;
    return 0;
}