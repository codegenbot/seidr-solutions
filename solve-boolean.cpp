#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBoolean(string expression) {
    stack<char> operators;
    stack<string> operands;
    
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operators.empty() && operators.top() == '|') {
                operators.pop();
                string op2 = operands.top();
                operands.pop();
                string op1 = operands.top();
                operands.pop();
                operands.push((op1[0] == 'T' && op2[0] == 'T') ? "T" : (op1[0] == 'F' || op2[0] == 'F') ? "F" : "F");
            }
            operators.push('&');
        } else if (expression[i] == '|') {
            while (!operators.empty() && operators.top() == '&') {
                operators.pop();
                string op2 = operands.top();
                operands.pop();
                string op1 = operands.top();
                operands.pop();
                operands.push((op1[0] == 'T' || op2[0] == 'T') ? "T" : (op1[0] == 'F' && op2[0] == 'F') ? "F" : "T");
            }
            operators.push('|');
        } else if (expression[i] == 't' || expression[i] == 'T') {
            operands.push("T");
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            operands.push("F");
        }
    }
    
    while (!operators.empty()) {
        string op2 = operands.top();
        operands.pop();
        string op1 = operands.top();
        operands.pop();
        operands.push((op1[0] == 'T' && op2[0] == 'T') ? "T" : (op1[0] == 'F' || op2[0] == 'F') ? "F" : "F");
    }
    
    return operands.top()[0] == 'T';
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = evaluateBoolean(expression);
    if (result) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}