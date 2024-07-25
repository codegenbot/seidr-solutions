#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    for (char c : expression) {
        if (c == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
            }
        } else if (c == '|') {
            operatorStack.push(c);
        } else if (c == 't' || c == 'f') {
            if (c == 't') return true;
            else return false;
        }
    }
    while (!operatorStack.empty()) {
        operatorStack.pop();
    }
    return false; // Default output, should not be reached
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