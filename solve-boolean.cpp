
#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> operators;
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            operators.push('|');
        } else if (expression[i] == '&') {
            operators.push('&');
        } else if (expression[i] == 'T') {
            result = true;
        } else if (expression[i] == 'F') {
            result = false;
        } else if (operators.size() > 0) {
            char op = operators.top();
            if (op == '|') {
                result |= solveBoolean(expression.substr(i + 1));
            } else if (op == '&') {
                result &= solveBoolean(expression.substr(i + 1));
            }
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << solveBoolean(expression) << endl;
    return 0;
}