#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> opstack;
    stack<string> valstack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opstack.empty() && opstack.top() == '|') {
                opstack.pop();
                string op2 = valstack.top();
                valstack.pop();
                string op1 = valstack.top();
                valstack.pop();
                valstack.push((op1 + " & " + op2));
            }
            opstack.push('&');
        } else if (expression[i] == '|') {
            while (!opstack.empty() && opstack.top() == '&') {
                opstack.pop();
                string op2 = valstack.top();
                valstack.pop();
                string op1 = valstack.top();
                valstack.pop();
                valstack.push((op1 + " | " + op2));
            }
            opstack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valstack.push("True");
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valstack.push("False");
        }
    }

    while (!opstack.empty()) {
        string op2 = valstack.top();
        valstack.pop();
        string op1 = valstack.top();
        valstack.pop();
        if (opstack.top() == '&') {
            valstack.push((op1 + " & " + op2));
        } else {
            valstack.push((op1 + " | " + op2));
        }
        opstack.pop();
    }

    return valstack.top() == "True";
}