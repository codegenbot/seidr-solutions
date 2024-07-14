#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression == "T" || expression == "t")
        return true;
    else if (expression == "F" || expression == "f")
        return false;
    else if (expression.length() > 1) {
        int i = 0;
        while (i < expression.length()) {
            if (expression[i] == '&') {
                string left = expression.substr(0, i);
                string right = expression.substr(i + 1);
                return evaluateBooleanExpression(left) && evaluateBooleanExpression(right);
            } else if (expression[i] == '|') {
                string left = expression.substr(0, i);
                string right = expression.substr(i + 1);
                return evaluateBooleanExpression(left) || evaluateBooleanExpression(right);
            }
            i++;
        }
    }
    return false;
}

int main() {
    string input;
    cout << "Enter the Boolean expression (T/F/&(|)): ";
    cin >> input;
    bool result = evaluateBooleanExpression(input);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}