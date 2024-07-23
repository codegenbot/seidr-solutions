#include <iostream>
#include <string>

using namespace std;

bool evaluateExpression(string expression) {
    if (expression.size() == 0)
        return false; // base case: empty string is F

    int i = 0;
    
    while (i < expression.size()) {
        if (expression[i] == '|') {
            int j = i + 1;
            
            for (; j < expression.size(); j++) {
                if (expression[j] == '&') {
                    // found &&
                    return evaluateExpression(expression.substr(i, j - i)) && evaluateExpression(expression.substr(j + 1));
                }
                else if (expression[j] == '|') {
                    // found ||
                    return evaluateExpression(expression.substr(i, j - i)) || evaluateExpression(expression.substr(j + 1));
                }
            }
        }
        
        if (expression[i] == 't')
            return true;
        else if (expression[i] == 'f')
            return false;

        i++;
    }

    // if we reached here, it means the string started with T or F
    return expression[0] == 't';
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateExpression(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}