#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    for (char c : expression) {
        if (c == '&' || c == '|') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                if (operatorStack.top() == '&') {
                    operatorStack.pop();
                    cout << "True" << endl;
                    return true;
                } else if (operatorStack.top() == '|') {
                    operatorStack.pop();
                    cout << "True" << endl;
                    return true;
                }
            }
            operatorStack.push(c);
        } else if (c == '(') {
            operatorStack.push(c);
        } else if (c == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                operatorStack.pop();
            }
            operatorStack.pop();
        }
    }

    while (!operatorStack.empty()) {
        if (operatorStack.top() == '&') {
            operatorStack.pop();
            cout << "True" << endl;
            return true;
        } else if (operatorStack.top() == '|') {
            operatorStack.pop();
            cout << "True" << endl;
            return true;
        }
    }

    return false;
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}