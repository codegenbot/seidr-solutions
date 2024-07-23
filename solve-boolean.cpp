#include <iostream>
#include <string>

bool solveBoolean(string expression) {
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
    
    if (expression.size() > 0) {
        if (expression[0] == 'T' || expression[0] == 't')
            return true;
        else
            return false;
    } else 
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