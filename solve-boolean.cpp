```cpp
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    if (expression.size() > 0) {
        if (expression[0] == 'T' || expression[0] == 't')
            return true;
        else if (expression[0] == 'F' || expression[0] == 'f')
            return false;
    }

    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '|') {
            size_t start = 0;
            for (int j = 0; j < i; j++) {
                if (expression[j] == '|') {
                    start = j+1;
                    break;
                }
            }
            string left = expression.substr(start, i - start);
            size_t end = i + 1;
            for (; end < expression.size(); end++) {
                if (expression[end] == '|') {
                    break;
                }
            }
            string right = expression.substr(end, expression.size() - end);
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            size_t start = 0;
            for (int j = 0; j < i; j++) {
                if (expression[j] == '&') {
                    start = j+1;
                    break;
                }
            }
            string left = expression.substr(start, i - start);
            size_t end = i + 1;
            for (; end < expression.size(); end++) {
                if (expression[end] == '&' || expression[end] == '|') {
                    break;
                }
            }
            string right = expression.substr(end, expression.size() - end);
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    return true;
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