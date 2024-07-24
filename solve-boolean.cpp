```cpp
#include <vector>
#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
                string op2 = operandStack.top();
                operandStack.pop();
                string op1 = operandStack.top();
                operandStack.pop();
                string result = (op1 == "True") ? op2 : "False";
                operandStack.push(result);
            }
            operatorStack.push('&');
        } else if (expression[i] == '|') {
            while (!operatorStack.empty() && operatorStack.top() == '&') {
                operatorStack.pop();
                string op2 = operandStack.top();
                operandStack.pop();
                string op1 = operandStack.top();
                operandStack.pop();
                string result = (op1 == "True") ? op2 : "False";
                operandStack.push(result);
            }
            operatorStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string operand;
            while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F')) {
                operand += expression[i];
                i++;
            }
            i--; // backtrack
            operandStack.push(operand);
        }
    }

    return (operandStack.top() == "True");
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;

    bool result = evaluateBooleanExpression(input);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}