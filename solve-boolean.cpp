#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t") return true;
    if (expression == "F" || expression == "f") return false;
    
    int i = 0, j = 1;
    while (j < expression.size()) {
        if (expression[j] == '|') {
            bool left = solveBoolean(expression.substr(i, j - i));
            bool right = solveBoolean(expression.substr(j + 1));
            return left || right;
        } else if (expression[j] == '&') {
            bool left = solveBoolean(expression.substr(i, j - i));
            bool right = solveBoolean(expression.substr(j + 1));
            return left && right;
        }
        j++;
    }
    
    return solveBoolean(expression);
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    if (expression == "exit") return 0;
    bool result = solveBoolean(expression);
    if (result) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}