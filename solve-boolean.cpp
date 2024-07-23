#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    
    return false; // default value
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}