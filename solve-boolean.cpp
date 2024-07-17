#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.length() && expression[j] != '&') {
                j++;
            }
            string subExpression = expression.substr(i + 1, j - i - 1);
            bool left = (subExpression == "t") ? true : false;
            bool right = (expression.substr(j + 1) == "t") ? true : false;
            result &= (left && right);
        } else if (expression[i] == '|') {
            int j = i + 1;
            while (j < expression.length() && expression[j] != '|') {
                j++;
            }
            string subExpression = expression.substr(i + 1, j - i - 1);
            bool left = (subExpression == "t") ? true : false;
            bool right = (expression.substr(j + 1) == "t") ? true : false;
            result |= (left || right);
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    cout << "Result: " << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}