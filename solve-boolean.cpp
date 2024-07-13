#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
            }
            if (!operatorStack.empty()) {
                operatorStack.push('&');
            } else {
                operatorStack.push('&');
                break;
            }
        } else if (expression[i] == '|') {
            while (!operatorStack.empty()) {
                operatorStack.pop();
            }
            if (!operatorStack.empty() && expression[i-1] != '&') {
                return false;
            }
        } else if (expression[i] == 't' || expression[i] == 'f') {
            if (i < expression.length()-1) {
                if (expression[i+1] == '&' || expression[i+1] == '|') {
                    operatorStack.push(expression[i]);
                    i++;
                } else {
                    if (expression[i] == 't') {
                        return true;
                    } else {
                        return false;
                    }
                }
            } else {
                if (expression[i] == 't') {
                    return true;
                } else {
                    return false;
                }
            }
        }
    }
    while (!operatorStack.empty()) {
        operatorStack.pop();
    }
    return true;
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}