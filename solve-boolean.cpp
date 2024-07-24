#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    for (int i = 0; i < expression.length(); ++i) {
        char currentChar = expression[i];
        if (currentChar == '&' || currentChar == '|') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                if (operatorStack.top() == '&') {
                    operatorStack.pop();
                    currentChar = '|';
                } else {
                    break;
                }
            }
            operatorStack.push(currentChar);
        } else if (currentChar == '(') {
            operatorStack.push('(');
        } else if (currentChar == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '&') {
                operatorStack.pop();
            }
            if (!operatorStack.empty()) {
                operatorStack.pop();
            }
        } else {
            currentChar = (currentChar == 't') ? true : false;
        }
    }
    return currentChar;
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