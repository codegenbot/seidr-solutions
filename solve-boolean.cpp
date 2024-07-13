#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'f') {
            result = false;
            break;
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}