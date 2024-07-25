#include <vector>
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const string &expression) {
    int T = 1, F = 0;
    
    if (expression == "t") return T == 1;
    if (expression == "f") return F == 1;
    
    for (int i = 0; expression[i]; ++i) {
        if (expression[i] == '&') {
            int left = evaluateBooleanExpression(expression.substr(0, i));
            int right = evaluateBooleanExpression(expression.substr(i + 1));
            return left && right;
        }
        if (expression[i] == '|') {
            int left = evaluateBooleanExpression(expression.substr(0, i));
            int right = evaluateBooleanExpression(expression.substr(i + 1));
            return left || right;
        }
    }
    
    return false;  // This line should not be reached
}

int main() {
    string expression;
    cout << "Enter a Boolean expression (t/f, |, &): ";
    cin >> expression;
    cout << evaluateBooleanExpression(expression) << endl;
    return 0;
}