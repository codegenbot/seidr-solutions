#include <iostream>
#include <string>

using namespace std;

bool evaluateExpression(string expression, int &i) {
    if (expression[i] == 'T') {
        i++;
        return true;
    }
    else if (expression[i] == 'F') {
        i++;
        return false;
    }
    else if (expression[i] == '|') {
        i++;
        bool left = evaluateExpression(expression, i);
        bool right = evaluateExpression(expression, i);
        return left || right;
    }
    else if (expression[i] == '&') {
        i++;
        bool left = evaluateExpression(expression, i);
        bool right = evaluateExpression(expression, i);
        return left && right;
    }
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    int i = 0;
    bool result = evaluateExpression(expression, i);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}