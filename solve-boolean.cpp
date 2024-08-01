#include <vector>
#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1[0] == 'T' && operand2[0] == 'T') ? "T" : "F");
            }
            opStack.push('&');
        } else if (expression[i] == '|') {
            while (!opStack.empty() && (opStack.top() == '&' || opStack.top() == '|')) {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1[0] == 'T' && operand2[0] == 'T') ? "T" : "F");
            }
            opStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string temp = "";
            temp += expression[i];
            valStack.push(temp);
        }
    }

    return valStack.top()[0] == 'T';
}

int main() {
    cout << evaluateBooleanExpression("t") << endl;
    cout << evaluateBooleanExpression("f") << endl;
    cout << evaluateBooleanExpression("f&f") << endl;
    cout << evaluateBooleanExpression("f&t") << endl;
    cout << evaluateBooleanExpression("t&f") << endl;

    return 0;
}