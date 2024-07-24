#include <iostream>
#include <string>
#include <stack>

bool solveBoolean(const string& expression) {
    stack<char> stack;
    for (char c : expression) {
        if (c == 'T' || c == 'F') {
            stack.push(c);
        } else if (c == '&') {
            char operand1 = stack.top(); stack.pop();
            char operand2 = stack.top(); stack.pop();
            if (operand1 == 'T' && operand2 == 'T') {
                stack.push('T');
            } else {
                stack.push('F');
            }
        } else if (c == '|') {
            char operand1 = stack.top(); stack.pop();
            char operand2 = stack.top(); stack.pop();
            if (operand1 == 'T' || operand2 == 'T') {
                stack.push('T');
            } else {
                stack.push('F');
            }
        }
    }
    return stack.top() == 'T';
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False") << endl;
    return 0;
}