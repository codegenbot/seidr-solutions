#include <vector>
#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operationStack;
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == 'T' || c == 't') {
            return true;
        }
        else if (c == 'F' || c == 'f') {
            return false;
        }
        else if (c == '|') {
            operationStack.push('|');
        }
        else if (c == '&') {
            while (!operationStack.empty() && operationStack.top() == '&') {
                operationStack.pop();
            }
            operationStack.push('&');
        }
    }
    while (!operationStack.empty()) {
        char c = operationStack.top(); 
        operationStack.pop();
        if (c == '|') {
            bool firstOperand = true;
            int result1 = 0, result2 = 0;
            while (!expression.empty() && expression[0] != ' ') {
                if (expression[0] == 'T' || expression[0] == 't')
                    result1 = 1;
                else if (expression[0] == 'F' || expression[0] == 'f')
                    result1 = 0;
                expression = expression.substr(1);
            }
            while (!expression.empty() && expression[0] != ' ') {
                if (expression[0] == 'T' || expression[0] == 't')
                    result2 = 1;
                else if (expression[0] == 'F' || expression[0] == 'f')
                    result2 = 0;
                expression = expression.substr(1);
            }
            return static_cast<bool>(result1 | result2);
        }
        else if (c == '&') {
            bool firstOperand = true;
            int result1 = 0, result2 = 0;
            while (!expression.empty() && expression[0] != ' ') {
                if (expression[0] == 'T' || expression[0] == 't')
                    result1 = 1;
                else if (expression[0] == 'F' || expression[0] == 'f')
                    result1 = 0;
                expression = expression.substr(1);
            }
            while (!expression.empty() && expression[0] != ' ') {
                if (expression[0] == 'T' || expression[0] == 't')
                    result2 = 1;
                else if (expression[0] == 'F' || expression[0] == 'f')
                    result2 = 0;
                expression = expression.substr(1);
            }
            return static_cast<bool>(result1 & result2);
        }
    }
    return true; // default to True
}

int main() {
    string expression;
    cout << "Enter Boolean Expression: ";
    cin >> expression;
    if (expression.length() > 0) {
        bool result = evaluateBooleanExpression(expression);
        if (result)
            cout << "True";
        else
            cout << "False";
    }
    return 0;
}