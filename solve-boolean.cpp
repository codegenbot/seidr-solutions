#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t") return true;
    if (expression == "F" || expression == "f") return false;
    
    for (int j = 1; j <= expression.size(); j++) {
        if (expression[j-1] == '|') {
            bool left = solveBoolean(expression.substr(0, j - 1));
            bool right = solveBoolean(expression.substr(j));
            return left || right;
        } else if (expression[j-1] == '&') {
            bool left = solveBoolean(expression.substr(0, j - 1));
            bool right = solveBoolean(expression.substr(j));
            return left && right;
        }
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