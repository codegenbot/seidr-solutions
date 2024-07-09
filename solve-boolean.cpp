#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> opStack;
    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (c == 'T' || c == 't')
            return true;
        else if (c == 'F' || c == 'f')
            return false;
        else if (c == '|') 
            opStack.push('|');
        else if (c == '&') 
            opStack.push('&');
        else {
            while (!opStack.empty()) {
                char op = opStack.top();
                opStack.pop();
                if (op == '&') {
                    bool b1 = expression[i - 2] == 'T' || expression[i - 2] == 't';
                    bool b2 = expression[i - 1] == 'T' || expression[i - 1] == 't';
                    return b1 && b2;
                }
                else if (op == '|') {
                    bool b1 = expression[i - 2] == 'T' || expression[i - 2] == 't';
                    bool b2 = expression[i - 1] == 'T' || expression[i - 1] == 't';
                    return b1 || b2;
                }
            }
        }
    }
    return true; // Default value if no operators found
}

int main() {
    string expression;
    cout << "Enter a Boolean expression (e.g., t, f, f&f): ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}