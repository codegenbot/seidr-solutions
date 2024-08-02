#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBoolean(string expression) {
    stack<char> operatorStack;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|')
                operatorStack.pop();
            if (!operatorStack.empty() && operatorStack.top() == '&')
                return false;
        } else if (expression[i] == '|') {
            while (!operatorStack.empty())
                operatorStack.pop();
            operatorStack.push(expression[i]);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            if ((expression[i] == 'T' && !operatorStack.empty() && operatorStack.top() != '|') ||
                (expression[i] == 'F' && !operatorStack.empty() && operatorStack.top() != '&'))
                return false;
        }
    }
    while (!operatorStack.empty()) {
        if (operatorStack.top() == '|')
            return true;
        else
            return false;
    }
    return true;
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = evaluateBoolean(expression);
    cout << "Result: " << (result ? "True" : "False") << endl;
    return 0;
}