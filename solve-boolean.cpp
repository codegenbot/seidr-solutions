```cpp
#include <vector>
#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> operators;
    stack<string> operands;

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
                string op2 = operands.top();
                operands.pop();
                string op1 = operands.top();
                operands.pop();
                operands.push((op1 + " & " + op2));
            }
            operators.push('&');
        } else if (booleanExpression[i] == '|') {
            while (!operators.empty() && operators.top() == '&') {
                operators.pop();
                string op2 = operands.top();
                operands.pop();
                string op1 = operands.top();
                operands.pop();
                operands.push((op1 + " | " + op2));
            }
            operators.push('|');
        } else if (booleanExpression[i] == 'T' || booleanExpression[i] == 'F') {
            string operand = "";
            while (i < booleanExpression.length() && (booleanExpression[i] == 'T' || booleanExpression[i] == 'F')) {
                operand += booleanExpression[i];
                i++;
            }
            operands.push(operand);
        }
    }

    return operands.top().compare("T") == 0;
}

int main() {
    string booleanExpression;
    cout << "Enter a Boolean expression: ";
    cin >> booleanExpression;
    bool result = solveBoolean(booleanExpression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}