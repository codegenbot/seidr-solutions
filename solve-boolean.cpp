#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (c == '&' || c == '|') {
            while (!operationStack.empty() && operationStack.top() != '(') {
                if (c == '&') {
                    c = '&';
                } else {
                    c = '|';
                }
                stack<char>().swap(operationStack);
            }
            if (c == '(') {
                operationStack.push(c);
            }
        } else if (c == 'T' || c == 'F') {
            while (!operationStack.empty() && operationStack.top() != '(') {
                stack<char>().swap(operationStack);
            }
            if (!operationStack.empty() && operationStack.top() == '(') {
                stack<char>().swap(operationStack);
            }
        } else {
            continue;
        }
    }

    return c == 'T';
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    if (expression.length() > 0) {
        bool result = evaluateBooleanExpression(expression);
        if (result) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}