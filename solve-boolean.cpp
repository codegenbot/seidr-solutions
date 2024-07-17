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
            if (j <= expression.length()) {
                string subExpression = expression.substr(i + 1, j - i - 1);
                bool left = (subExpression == "t") ? true : false;
                int k = j + 1;
                while (k < expression.length() && expression[k] != '|') {
                    k++;
                }
                if (k <= expression.length()) {
                    string subSubExpression = expression.substr(j + 1, k - j - 1);
                    bool right = (subSubExpression == "t") ? true : false;
                    result &= left && right;
                } else {
                    result &= left;
                }
            }
        } else if (expression[i] == '|') {
            int j = i + 1;
            while (j < expression.length() && expression[j] != '|') {
                j++;
            }
            if (j <= expression.length()) {
                string subExpression = expression.substr(i + 1, j - i - 1);
                bool left = (subExpression == "t") ? true : false;
                int k = j + 1;
                while (k < expression.length() && expression[k] != '&') {
                    k++;
                }
                if (k <= expression.length()) {
                    string subSubExpression = expression.substr(j + 1, k - j - 1);
                    bool right = (subSubExpression == "t") ? true : false;
                    result |= left || right;
                } else {
                    result |= left;
                }
            }
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