#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool res = true;
    int i = 0, j = 0;
    while (i < expression.size()) {
        if (expression[i] == 't') {
            res &= true;
            i++;
        } else if (expression[i] == 'f') {
            res &= false;
            i++;
        } else if (expression[i] == '|') {
            j = i + 1;
            while (j < expression.size() && expression[j] != '&') {
                j++;
            }
            string subexpr = expression.substr(i, j - i);
            res &= (subexpr == "t" || subexpr == "f");
            i = j;
        } else if (expression[i] == '&') {
            j = i + 1;
            while (j < expression.size() && expression[j] != '|') {
                j++;
            }
            string subexpr = expression.substr(i, j - i);
            res &= (subexpr == "t" && subexpr != "f");
            i = j;
        }
    }
    return res;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}