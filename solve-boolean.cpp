#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool evaluateBooleanExpression(const string& input) {
    stack<bool> operands;
    stack<char> operators;

    for (char c : input) {
        if (c == 't') { operands.push(true); }
        else if (c == 'f') { operands.push(false); }
        else if (c == '&' || c == '|') { operators.push(c); }
        else if (c == ')') {
            char op = operators.top();
            operators.pop();
            bool operand1 = operands.top();
            operands.pop();
            bool operand2 = operands.top();
            operands.pop();

            if (op == '&') { operands.push(operand1 && operand2); }
            else if (op == '|') { operands.push(operand1 || operand2); }
        }
    }

    return operands.top();
}

int main() {
    string input;
    cin >> input;
    
    bool result = evaluateBooleanExpression(input);
    
    cout << (result ? "True" : "False") << endl;
    
    return 0;
}