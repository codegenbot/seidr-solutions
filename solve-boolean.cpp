#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            char op1 = s.top();
            s.pop();
            char op2 = s.top();
            s.pop();
            s.push((op1 == 'T' && op2 == 'T') || (op1 == 'F' && op2 == 'T') || (op1 == 'T' && op2 == 'F') || (op1 == 'F' && op2 == 'F'));
        } else if (expression[i] == '&') {
            char op1 = s.top();
            s.pop();
            char op2 = s.top();
            s.pop();
            s.push((op1 == 'T' && op2 == 'T') || (op1 == 'F' && op2 == 'F'));
        } else if (expression[i] != 'T' && expression[i] != 'F') {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}